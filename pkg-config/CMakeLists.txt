CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/BaseType.pc.in
	${CMAKE_CURRENT_BINARY_DIR}/pkg-config/BaseType.pc @ONLY
)

install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pkg-config/BaseType.pc
	DESTINATION lib/pkgconfig/
)

