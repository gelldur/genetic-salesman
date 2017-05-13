//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#include "Route.h"
//////////////////////////////////

#include <algorithm>

#include "Map.h"

Route::Route(std::vector<City> cities)
		: _cities(std::move(cities))
{
}

float Route::totalDistance(const Map& map) const
{
	if (_cities.empty())
	{
		return 0;
	}

	float distance = 0;
	for (int i = 1; i < _cities.size(); ++i)
	{
		distance += map.distance(_cities[i - 1], _cities[i]);
	}

	return distance;
}

bool Route::containsCity(const City& city) const
{
	return std::find(_cities.begin(), _cities.end(), city) != _cities.end();
}

std::ostream& operator<<(std::ostream& os, const Route& route)
{
	os << "|";
	for (auto& city : route._cities)
	{
		os << "->" << city;
	}
	os << "|";
	return os;
}

void Route::swap(int a, int b)
{
	std::swap(_cities.at(a), _cities.at(b));
}
