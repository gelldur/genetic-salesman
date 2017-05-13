//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#include "GeneticAlgorithm.h"
//////////////////////////////////

#include <cassert>
#include <set>

GeneticAlgorithm::GeneticAlgorithm(const int tournamentSize, const double mutationRate, const bool elitsm)
		: _tournamentSize(tournamentSize)
		, _mutationRate(mutationRate)
		, _elitsm(elitsm)
		, _mt(_randomDevice())
		, _mutationDistribution(0, 1.0)
{
}

void GeneticAlgorithm::mutate(Route& route)
{
	std::uniform_int_distribution<> distribution(0, (int) (route.getVisitedCities().size() - 1));

	for (int i = 0; i < route.getVisitedCities().size(); ++i)
	{
		if (_mutationDistribution(_mt) < _mutationRate)
		{
			route.swap(i, distribution(_mt));
		}
	}
}

Route GeneticAlgorithm::tournamentSelection(const Population& population, const Map& map)
{
	std::uniform_int_distribution<> distribution(0, (int) (population.getPopulationSize() - 1));

	Population tournament;// Create a tournament population
	// For each place in the tournament get a random candidate tour and add it
	for (int i = 0; i < _tournamentSize; ++i)
	{
		tournament.add(population.getRoutes().at(distribution(_mt)));
	}

	return tournament.getBestRoute(map);
}

Route GeneticAlgorithm::crossover(const Route& parent1, const Route& parent2)
{
	assert(parent1.getVisitedCities().size() == parent2.getVisitedCities().size());

	std::uniform_int_distribution<> distribution(0, (int) (parent1.getVisitedCities().size() - 1));

	// Get start and end sub tour positions for parent1's tour
	const int indexStart = distribution(_mt);
	const auto positionStart = parent1.getVisitedCities().begin() + indexStart;
	const auto positionEnd = parent1.getVisitedCities().begin() + distribution(_mt);

	std::set<City> pickedCities;
	std::vector<City> subRoute;
	for (auto it = positionStart; it != positionEnd;)
	{
		subRoute.emplace_back(*it);
		pickedCities.emplace(subRoute.back());

		++it;
		if (it == parent1.getVisitedCities().end())
		{
			it = parent1.getVisitedCities().begin();
		}
	}

	std::vector<City> newRoute;
	newRoute.reserve(parent1.getVisitedCities().size());

	for (auto& city : parent2.getVisitedCities())
	{
		if (pickedCities.find(city) != pickedCities.end())
		{
			continue;
		}
		newRoute.emplace_back(city);
		pickedCities.emplace(newRoute.back());
	}

	if (indexStart >= newRoute.size())
	{
		newRoute.insert(newRoute.end(), subRoute.begin(), subRoute.end());
	}
	else
	{
		newRoute.insert(newRoute.begin() + indexStart, subRoute.begin(), subRoute.end());
	}

	return {newRoute};
}

std::ostream& operator<<(std::ostream& os, const GeneticAlgorithm& algorithm)
{
	os << "tournamentSize: " << algorithm._tournamentSize << " mutationRate: " << algorithm._mutationRate
	   << " elitsm: " << algorithm._elitsm;
	return os;
}

Population GeneticAlgorithm::evolvePopulation(const Population& population, const Map& map)
{
	Population newPopulation;

	// Keep our best individual if elitism is enabled
	int elitismOffset = 0;
	if (_elitsm)
	{
		newPopulation.add(population.getBestRoute(map));
		elitismOffset = 1;
	}

	// Crossover population
	// Loop over the new population's size and create individuals from
	// Current population
	for (int i = elitismOffset; i < population.getPopulationSize(); ++i)
	{
		// Select parents
		auto parent1 = tournamentSelection(population, map);
		auto parent2 = tournamentSelection(population, map);
		// Crossover parents
		auto child = crossover(parent1, parent2);
		// Add child to new population
		newPopulation.add(child);
	}

	// Mutate the new population a bit to add some new genetic material
	for (int i = elitismOffset; i < newPopulation.getPopulationSize(); ++i)
	{
		mutate(newPopulation.getRoute(i));
	}

	return newPopulation;
}
