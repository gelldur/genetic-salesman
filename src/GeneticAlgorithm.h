//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#pragma once

#include <random>
#include <ostream>

#include "Route.h"
#include "Population.h"

class GeneticAlgorithm
{
public:
	GeneticAlgorithm(const int tournamentSize, const double mutationRate, const bool elitsm);

	Population evolvePopulation(const Population& population, const Map& map);

	Route crossover(const Route& parent1, const Route& parent2);
	void mutate(Route& route);
	Route tournamentSelection(const Population& population, const Map& map);

	friend std::ostream& operator<<(std::ostream& os, const GeneticAlgorithm& algorithm);

private:
	const int _tournamentSize;
	const double _mutationRate;
	const bool _elitsm;

	std::random_device _randomDevice;
	std::mt19937 _mt;
	std::uniform_real_distribution<double> _mutationDistribution;
};


