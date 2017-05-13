//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#pragma once

#include <string>
#include <vector>
#include <random>
#include <ostream>

#include "City.h"
#include "Route.h"

class Map
{
public:
	Map(int cities, int width, int height);

	City createRandomCity();

	Route createRandomRoute() const;

	const int getWidth() const
	{
		return _width;
	}

	const int getHeight() const
	{
		return _height;
	}

	float distance(const City& cityA, const City& cityB) const;

	friend std::ostream& operator<<(std::ostream& os, const Map& map);

	std::string getField(int x, int y) const;

private:
	const int _width;
	const int _height;
	std::vector<char> _names;

	std::vector<City> _cities;
	std::random_device _randomDevice;
	std::mt19937 _mt;
};


