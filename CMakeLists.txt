# CMakeList.txt: проект CMake для InsertionSort; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required(VERSION 3.31)
project ("InsertionSort")

set(CMAKE_CXX_STANDARD 14)

SET(FILES_CPP 
	main.cpp
	sort.cpp
	fill_data.cpp
	)
SET(FILES_H 
	header.h
	fill_data.h
	sort.h
	)
	set_property(GLOBAL PROPERTY USE_FOLDERS ON)

FILE(GLOB_RECURSE headers ${FILES_CPP})
FILE(GLOB_RECURSE sources ${FILES_H})
# Добавьте источник в исполняемый файл этого проекта.
add_executable (InsertionSort ${FILES_CPP} ${FILES_H})


# TODO: Добавьте тесты и целевые объекты, если это необходимо.
