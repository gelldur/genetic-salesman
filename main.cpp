#include <iostream>
#include <Population.h>
#include <GeneticAlgorithm.h>

#include "Map.h"

int main()
{
	std::cout << "Please enter map width: " << std::endl;
	int cities = 0;
	std::cin >> cities;

	std::cout << "Generated map: " << std::endl;

	Map map{(int) (cities * cities * 0.2F), cities, cities};
	std::cout << map << std::endl;

	Population population{50, map};
	float bestRouteDistance = population.getBestRoute(map).totalDistance(map);

	std::cout << "First best route in population #1: " << bestRouteDistance << std::endl;
	std::cout << "Route: " << population.getBestRoute(map) << std::endl;

	GeneticAlgorithm algorithm{5, 0.015, true};
	std::cout << "Genetic algorithm config: " << algorithm;


	// Evolve population for x generations
	for (int i = 2; i < 100; ++i)
	{
		population = algorithm.evolvePopulation(population, map);

		auto best = population.getBestRoute(map);
		if (bestRouteDistance > best.totalDistance(map))
		{
			std::cout << "#" << i << " Better route in population: " << best.totalDistance(map) << std::endl;
			std::cout << "\tRoute:" << best << std::endl;
			bestRouteDistance = best.totalDistance(map);
		}
	}

	std::cout << "This is the END!";

	return 0;
}