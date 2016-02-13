# Création de la liste des fichiers include
file(GLOB_RECURSE
	include_files
	*.hpp
)
message(STATUS "Création de la liste des fichiers include")

# Installation des fichiers include
install(FILES ${include_files}
	DESTINATION include/Dagal/${CMAKE_PROJECT_NAME}
)
message(STATUS "Installation des fichiers include")


