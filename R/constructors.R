
#' chunker
#' @param path Input file path 
#' @param sep Character separating cells in the input table (default = " ")
#' @param quoted Quoted character data? Default FALSE. If TRUE, the program removes quotes.
#' @param has_colnames Column names present in the input table? (Logical, default TRUE)
#' @param has_rownames Row names present in the input table? (Logical, default TRUE)
#' @param chunksize Chunk size (default 1000)
#' @param data_format Format of input data: "data.frame" (default) or "matrix".
#' @param columns_classes Vector with the class of each column: "character", "numeric" (aka "double"), 
#' "integer" or "logical".
#' @param autodetect Use auto-detection of columns classes? Default TRUE.
#' @param scan_rows How many rows to scan for auto-detection of columns classes. 
#' Default is 10. Note that this value shoud be increased when columns only have NA values 
#' in the scanned rows. Columns classes are detected via a call to read.table 
#' with the scan_rows value passed to the nrows parameter.
#' @description The objects of class "chunker" are the central elements of the
#' chunkR package. These objects can store a data chunk and other 
#' information required for the process of reading a file in pieces.
#' A "chunker" object is created with the chunker() function, 
#' that requires the path to a file, and other arguments, as the size of the chunk 
#' and the data type ("data.frame" or "matrix").
#' Two basic methods are defined to manipulate the object: 
#' 
#' -  \code{\link{next_chunk}} function to read the next chunk
#' 
#' -  \code{\link{get_table}} function to retrieve the data
#' 
#' The functions \code{\link{get_completed}} and \code{\link{get_colnames}}
#' allow to get the number of rows already read, and the column names of the 
#' table.
#' 
#' @examples
#' 
#' 
#' data(iris)
#' 
#' # write iris as tab delimited file. Note that quote is set to FALSE
#' 
#' tmp_path <- file.path(tempdir(),"iris.txt")
#' write.table(iris, tmp_path, quote = FALSE)
#' 
#' #-----------------------------------------------------------------#
#' #--- Reading a data frame with automatic column-type detection ---#
#' #-----------------------------------------------------------------#
#' 
#' # create a 'chunker' object passing the path of the input file.
#' my_chunker_object <- chunker(tmp_path, chunksize = 30)
#' 
#' # read a chunk
#' next_chunk(my_chunker_object)
#' 
#' # get the chunk
#'  get_table(my_chunker_object)
#' 
#' # read another chunk
#' next_chunk(my_chunker_object)
#' 
#' # get the number of lines already read
#' get_completed(my_chunker_object)
#' 
#' 
#' #--- read a csv file ---#
#' 
#' tmp_path_csv <- file.path(tempdir(),"iris.csv")
#' 
#' write.table(iris, tmp_path_csv, quote = FALSE, sep = ",")
#' 
#' # read the csv indicating the value of the 'sep' parameter
#' my_chunker_object2 <- chunker(tmp_path_csv, chunksize = 30, sep = ",")
#' # the file can  then be processed as with tab delimiters
#' 
#' # remove temporal file
#' file.remove(tmp_path_csv)
#' 
#' #--------------------------------------------------------#
#' #--- Reading a data frame using column types argument ---#
#' #--------------------------------------------------------#
#' 
#' ## Four types can be passed : "character", "numeric" (aka "double"), "integer", "logical"
#' 
#' # create a 'chunker' object passing the path of the input file.
#' my_chunker_object3 <- chunker(tmp_path, chunksize = 120,
#'  columns_classes = c("numeric", "numeric", "numeric","numeric", "character"))
#' 
#' # read a chunk
#' next_chunk(my_chunker_object3)
#' 
#' # get the chunk
#' get_table(my_chunker_object3)
#' 
#' # read another chunk
#' next_chunk(my_chunker_object3)
#' 
#' # get the number of lines already read
#' get_completed(my_chunker_object3)
#' 
#' 
#' #-------------------------#
#' #--- Reading a matrix  ---#
#' #-------------------------#
#' 
#' my_chunker_object4 <- chunker(tmp_path, chunksize = 30, data_format= "matrix")
#' 
#' # store the chunk as a character matrix in R
#' this_data <- get_table(my_chunker_object4)
#' 
#' 
#' # The package provides a fast generic C++ function for conversion from
#' # matrix (any R type) to data frame
#' this_data_as_df2 <- matrix2df(this_data)
#' 
#' # remove temporal file
#' file.remove(tmp_path)
#' 

#' \dontrun{ 
#' 
#' #----------------------------------#
#' #--- Example with a big table -----#
#' #----------------------------------#
#' 
#' ### Example with a data frame
#' 
#' # create a large data frame, and write it in a temporal directory
#' 
#' tmp_path <- file.path(tempdir(),"big_table.txt")
#' 
#' out <- data.frame(numeric_data = runif(1000000),
#'                   character_data = sample(c("a", "t", "c", "g"), 1000000, 
#'                   replace = TRUE),
#'                   integer_data = sample(1000000),
#'                   bool_data = sample(c(TRUE, FALSE), 1000000, replace = TRUE))
#' 
#' 
#' write.table(out, tmp_path, quote = FALSE)
#' 
#' # create a chunker object, reading in chunks of 10000 lines
#' my_chunker_object5 <- chunker(tmp_path, chunksize = 10000)
#' 
#' next_chunk(my_chunker_object5)
#' data <- get_table(my_chunker_object5) 
#' 
#' # check classes
#' lapply(data,typeof)
#' file.remove(tmp_path)
#' 
#' 
#' ### Example with a matrix
#' 
#' # create a large matrix, and write it in a temporal directory
#' 
#' my_table <- tempfile()
#' write.table(matrix(sample(c("a", "t", "c", "g"), 1000000, replace = TRUE), 
#' 100000, 1000), my_table, quote = FALSE)
#' 
#' # create a chunker object, reading in chunks of 10000 lines
#' my_chunker_object6 <- chunker(my_table, chunksize = 10000, data_format= "matrix")
#'
#' # create a loop to read all the file and make something with it
#' 
#' lines <- 0
#' while(next_chunk(my_chunker_object6))
#' {
#'   data <- get_table(my_chunker_object6) 
#'   
#'   # do something with data, e.g., convert to data frame first
#'   data <- matrix2df(data)
#'   
#'   lines <- lines + nrow(data)
#'   cat("Processed ", lines, "lines\n")
#' }
#' 
#' # remove the temporal file
#' file.remove(my_table)

#' }
#' 
#' @export

setGeneric("chunker", function(path, sep = " ", quoted = FALSE,
                               has_colnames = TRUE, has_rownames = TRUE, 
                               chunksize = 1000L, data_format = c("data.frame", "matrix"),
                               columns_classes = character(0), autodetect = TRUE,
                               scan_rows = 10) {
  
  data_format <- match.arg(data_format)
  
  if(length(columns_classes) != 0) {
    autodetect <- FALSE
  }
  
  if(data_format == "matrix") {
    autodetect <- FALSE
    if(length(columns_classes) > 0) {
      stop("The parameter columns_classes can not be used with output data of type matrix")
    }
  }
  
  if(autodetect) {
    
      if(!has_rownames) {
        x <- read.table(path, nrows = scan_rows, header = has_colnames, 
                        row.names = NULL, stringsAsFactors = FALSE, sep = sep)
      } else {
        x <- read.table(path, nrows = scan_rows, header = has_colnames, 
                        stringsAsFactors = FALSE, sep = sep) 
      }
      # special case with another custom newline
 
    x <- lapply(as.list(x), typeof)
    columns_classes <- unname(unlist(x))
  }

  out <- new("chunker", path, sep, quoted, has_colnames, 
      has_rownames, chunksize, data_format, columns_classes)
  out@attr <- list(path = path, sep = sep, quoted = quoted,
                   has_colnames = has_colnames, has_rownames  = has_rownames,
                   chunksize = chunksize, data_format = data_format,
                   columns_classes = columns_classes, call = match.call())
 out
})
