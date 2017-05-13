#include <iostream>
#include <algorithm>
#include <chrono>

#include "Population.h"
#include "GeneticAlgorithm.h"
#include "Map.h"

int main()
{
	std::cout << "Please enter map width: " << std::endl;
	int cities = 0;
	std::cin >> cities;

	std::cout << "Generated map: " << std::endl;

	Map map{(int) (cities * cities * 0.2F), cities, cities};
	std::cout << map << std::endl;

	auto start = std::chrono::steady_clock::now();

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

	std::cout << "This is the END! It took: " << (std::chrono::duration_cast<std::chrono::milliseconds>
			(std::chrono::steady_clock::now() - start)).count() << " mls" << std::endl;
	std::cout << "Now some brute force!!!!!!!!!" << std::endl;

	start = std::chrono::steady_clock::now();

	auto allCities = population.getBestRoute(map).getVisitedCities();
	std::vector<int> permutations;
	for (int i = 0; i < allCities.size(); ++i)
	{
		permutations.emplace_back(i);
	}

	std::vector<City> pickedCities;
	do
	{
		pickedCities.clear();
		for (auto i : permutations)
		{
			pickedCities.emplace_back(allCities[i]);
		}
		Route permutation{pickedCities};
		if (bestRouteDistance > permutation.totalDistance(map))
		{
			std::cout << "Better route in brute force: " << permutation.totalDistance(map) << std::endl;
			std::cout << "\tRoute:" << permutation << std::endl;
			bestRouteDistance = permutation.totalDistance(map);
		}
	} while (std::next_permutation(permutations.begin(), permutations.end()));
	std::cout << "This is the END! It took: " << (std::chrono::duration_cast<std::chrono::milliseconds>
			(std::chrono::steady_clock::now() - start)).count() << " mls" << std::endl;
	return 0;
}