//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#pragma once

#include <vector>

#include "Route.h"

class Population
{
public:
	Population() = default;
	Population(int count, const Map& map);

	Route getBestRoute(const Map& map) const;

	const std::vector<Route>& getRoutes() const
	{
		return _routes;
	}

	Route& getRoute(int index)
	{
		return _routes.at(index);
	}

	void setRoute(int index, Route route);

	void add(Route route);

	size_t getPopulationSize() const
	{
		return _routes.size();
	}

private:
	std::vector<Route> _routes;
};


