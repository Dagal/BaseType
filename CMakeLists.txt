# Version de cmake minimum
cmake_minimum_required (VERSION 2.6)

# Nom du projet
project (BaseType)

# Répertoire de création des binaires
set(LIBRARY_OUTPUT_PATH lib/${CMAKE_BUILD_TYPE})

# Version du projet
set (BaseType_VERSION_MAJOR 0)
set (BaseType_VERSION_MINOR 1)

# Création des listes de fichiers sources
file(
	GLOB_RECURSE
	source_files
	src/*
	include/*
	)

# Configuration d'un fichier d'entête pour passer
# quelques valeurs aux codes sources

configure_file (
	"config/BaseTypeConfig.h.in"
	"${PROJECT_BINARY_DIR}/BaseTypeConfig.h"
	)

# Ajout du répertoire pour retrouver le fichier d'entête ci dessus
include_directories("${PROJECT_BINARY_DIR}")

# Il ne faut pas oublier d'ajouter le répertoire include à la liste
include_directories("include")

# On ajoute le nom de l'exécutable ainsi que le fichier principal
add_library(
	BaseType
	SHARED
	${source_files}
	)

# 
