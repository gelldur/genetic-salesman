//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#include "Map.h"
//////////////////////////////////

#include <set>
#include <functional>
#include <algorithm>
#include <sstream>

#include <acme/StringUtils.h>

Map::Map(int cities, int width, int height)
		: _width(width)
		, _height(height)
		, _mt(_randomDevice())
{
	std::set<City> generatedCities;
	while (generatedCities.size() < cities)
	{
		generatedCities.emplace(createRandomCity());
	}
	_cities.insert(_cities.begin(), generatedCities.begin(), generatedCities.end());

	for (int i = 'A'; i <= 'Z'; ++i)
	{
		_names.emplace_back((char) i);
	}
}

City Map::createRandomCity()
{
	std::uniform_int_distribution<> distributionWidth(0, _width - 1);
	std::uniform_int_distribution<> distributionHeight(0, _height - 1);
	return City(distributionWidth(_mt), distributionHeight(_mt));
}

float Map::distance(const City& cityA, const City& cityB) const
{
	//Maybe map has some lake so, we want point that out in distance!
	const int xDistance = std::abs(cityA.getX() - cityB.getX());
	const int yDistance = std::abs(cityA.getY() - cityB.getY());
	return static_cast<float>( std::sqrt((xDistance * xDistance) + (yDistance * yDistance)));
}

std::string Map::getField(int x, int y) const
{
	auto found = std::find(_cities.begin(), _cities.end(), City{x, y});
	if (found == _cities.end())
	{
		if (_cities.size() > _names.size())
		{
			return std::string(std::to_string(_cities.size()).size(), '#');
		}
		return "#";
	}

	auto cityIndex = found - _cities.begin();
	if (cityIndex >= _names.size())
	{
		return std::to_string(cityIndex);
	}
	else
	{
		//Get city index. This is simple name of city on the map
		return std::string(1, _names.at(cityIndex));
	}
}

std::ostream& operator<<(std::ostream& stream, const Map& map)
{
	std::string liner;

	std::function<std::string(int)> createSpaces = [](int count)
	{
		return (count < 1 ? "" : std::string((unsigned long) count, ' '));
	};

	std::vector<unsigned> longestColumns;
	const unsigned fieldRows = (unsigned) StringUtils::split(map.getField(0, 0), '\n').size();

	for (unsigned y = 0; y < map.getHeight(); ++y)
	{
		for (unsigned x = 0; x < map.getWidth(); ++x)
		{
			const auto& field = map.getField(x, y);
			auto splited = StringUtils::split(field, '\n');
			for (auto& row : splited)
			{
				if (longestColumns.size() <= x)
				{
					longestColumns.emplace_back(0);
				}
				longestColumns[x] = std::max((unsigned) row.length(), longestColumns.at(x));
			}
		}
	}

	for (int y = static_cast<int>(map.getHeight()) - 1; y > -1; --y)
	{
		stream << liner;
		std::vector<std::string> splitedLines;
		for (unsigned x = 0; x < map.getWidth(); ++x)
		{
			const auto& field = map.getField(x, (unsigned) y);
			auto splited = StringUtils::split(field, '\n');
			splitedLines.insert(splitedLines.end(), splited.begin(), splited.end());
		}

		for (unsigned i = 0; i < splitedLines.size(); i += fieldRows)
		{
			stream << splitedLines[i];
			stream << createSpaces((int) (longestColumns.at((i / fieldRows)) - splitedLines[i].length()));
			stream << "|";
		}

		stream << " " << y << " \n";

		unsigned separatorLength = 0;
		for (auto column : longestColumns)
		{
			separatorLength += (column + 1);// delim char
		}
		stream << std::string(separatorLength, '-');

		liner = "\n";
	}
	stream << '\n';
	unsigned x = 0;
	for (auto column : longestColumns)
	{
		if ((column & 1) == 0) //even
		{
			stream << createSpaces(column / 2) << x++ << createSpaces(column / 2);
		}
		else //odd
		{
			stream << createSpaces(column / 2) << x++ << createSpaces(column / 2 + 1);
		}
	}

	return stream;
}

Route Map::createRandomRoute() const
{
	auto allCities = _cities;
	std::random_shuffle(allCities.begin(), allCities.end());
	return {allCities};
}
