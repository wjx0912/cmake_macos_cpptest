file(GLOB_RECURSE  SRCS    "*.cpp")
add_executable(main ${SRCS})

include_directories(./include)
target_link_libraries (main PUBLIC hello_dynamic)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/)
