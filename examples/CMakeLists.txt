include_directories(${CMAKE_SOURCE_DIR}/include)

file(GLOB_RECURSE
	example_files
	*.cpp
)

foreach(f ${example_files})
	get_filename_component(fileName ${f} NAME_WE)
	add_executable(${fileName} ${f})

	target_link_libraries(${fileName} BaseType)
	install(PROGRAMS ${CMAKE_CURRENT_BINARY_DIR}/${fileName}
		DESTINATION bin
		RENAME ${CMAKE_PROJECT_NAME}-${filName}
	)
endforeach(f)

