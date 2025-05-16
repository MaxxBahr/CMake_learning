cmake_minimum_required(VERSION 3.15)

project(Calculator LANGUAGES CXX)

add_library(calclib STATIC calclib.cpp)
target_include_directories(calclib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_library(calcprint SHARED 
	# which sources are contained in this target
	calcprint.cpp
	calclib.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/include/calc/printlib.hpp  )

# where to find the included header-files
target_include_directories(calcprint PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include/calc)

option(Print "print to console or not" ON)
if(Print)
	add_library(printer STATIC printHello.cpp)
	# in which directories to search for headers
	target_include_directories(printer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
endif()

add_executable(calc main.cpp calcprint)

target_link_libraries(calc PRIVATE calclib printer calcprint)