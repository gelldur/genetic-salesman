CMAKE_MINIMUM_REQUIRED(VERSION 3.7)
PROJECT(genetic_salesman)

SET(CMAKE_CXX_STANDARD 14)

SET(SOURCE_FILES main.cpp
		src/City.cpp src/City.h
		src/GeneticAlgorithm.cpp src/GeneticAlgorithm.h
		src/Map.cpp src/Map.h
		src/Population.cpp src/Population.h
		src/Route.cpp src/Route.h
		lib/common-cpp/src/acme/StringUtils.cpp lib/common-cpp/src/acme/StringUtils.h
		)
ADD_EXECUTABLE(genetic_salesman ${SOURCE_FILES})

TARGET_INCLUDE_DIRECTORIES(genetic_salesman PRIVATE
		src/
		lib/common-cpp/src/
		)