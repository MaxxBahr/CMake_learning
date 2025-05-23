option(Print "print to console or not" ON)
if(Print)
	add_library(printer STATIC printHello.cpp)
	# in which directories to search for headers
	target_include_directories(printer PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src/libs)
    endif()