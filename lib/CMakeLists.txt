file(GLOB_RECURSE  SRCS    "*.cpp")

add_library(hello_dynamic SHARED ${SRCS})

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/)

