# Création de la liste des fichiers source
file( GLOB
	source_files
	*.cpp
)

# Annoncer où trouver les fichiers include
include_directories(${CMAKE_SOURCE_DIR}/include)
message(STATUS "Ajout du répertoire include pour le compilateur")

# Annoncer où trouver le fichier include de gestion de versions
include_directories(${CMAKE_SOURCE_DIR}/version-config)
message(STATUS "Ajout du répertoire include de la configuration de version")

# Création de la librairie
add_library(BaseType SHARED
	${source_files})
message(STATUS "Création de la librairie")

# Installation de la librairie
install(TARGETS BaseType
	DESTINATION lib/Dagal
)
message(STATUS "Installation de la librairie")


