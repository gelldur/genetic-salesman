//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#pragma once

#include <vector>
#include <ostream>

#include "City.h"

class Map;

class Route
{
public:
	Route() = default;
	Route(std::vector<City> cities);

	const std::vector<City>& getVisitedCities() const
	{
		return _cities;
	}

	float totalDistance(const Map& map) const;

	bool containsCity(const City& city) const;

	friend std::ostream& operator<<(std::ostream& os, const Route& route);

	void swap(int a, int b);

private:

	std::vector<City> _cities;//Order is important!
};


