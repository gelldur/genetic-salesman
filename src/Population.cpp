//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#include "Population.h"
//////////////////////////////////

#include <algorithm>

#include "Map.h"

Population::Population(int count, const Map& map)
{
	_routes.reserve(count);
	for (int i = 0; i < count; ++i)
	{
		_routes.emplace_back(map.createRandomRoute());
	}
}

Route Population::getBestRoute(const Map& map) const
{
	return *std::min_element(_routes.begin(), _routes.end(), [&](const Route& routeA, const Route& routeB)
	{
		return routeA.totalDistance(map) < routeB.totalDistance(map);
	});
}

void Population::setRoute(int index, Route route)
{
	_routes.at(index) = std::move(route);
}

void Population::add(Route route)
{
	_routes.emplace_back(std::move(route));
}
