add_library(calcprint SHARED 
	# which sources are contained in this target
	calcprint.cpp
	calclib.cpp
	${CMAKE_CURRENT_SOURCE_DIR}/src/libs/calcprint/include/printlib.hpp  )

# where to find the included header-files
target_include_directories(calcprint PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/src/libs/calcprint)
