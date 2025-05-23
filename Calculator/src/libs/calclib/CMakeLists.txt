PROJECT(Calculator LANGUAGES CXX)

add_library(calclib STATIC calclib.cpp)
target_include_directories(calclib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/libs/calclib/calclib.cpp)
