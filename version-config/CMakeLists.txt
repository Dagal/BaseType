CONFIGURE_FILE(${CMAKE_CURRENT_SOURCE_DIR}/BaseTypeConfig.h.in
	${CMAKE_CURRENT_BINARY_DIR}/BaseTypeConfig.h @ONLY
)

# Pas besoin d'installation pour le fichier config.h
#install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pkg-config/BaseType.pc
#	DESTINATION lib/pkgconfig/
#)

