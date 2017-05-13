//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#include "City.h"
//////////////////////////////////

#include <random>

City::City(int x, int y)
		: _x(x)
		, _y(y)
{
}

bool operator==(const City& lhs, const City& rhs)
{
	return lhs._x == rhs._x &&
		   lhs._y == rhs._y;
}

bool operator!=(const City& lhs, const City& rhs)
{
	return !(rhs == lhs);
}

std::ostream& operator<<(std::ostream& os, const City& city)
{
	os << "[x: " << city._x << " y: " << city._y << "]";
	return os;
}

bool operator<(const City& lhs, const City& rhs)
{
	if (lhs._x < rhs._x)
		return true;
	if (rhs._x < lhs._x)
		return false;
	return lhs._y < rhs._y;
}

bool operator>(const City& lhs, const City& rhs)
{
	return rhs < lhs;
}

bool operator<=(const City& lhs, const City& rhs)
{
	return !(rhs < lhs);
}

bool operator>=(const City& lhs, const City& rhs)
{
	return !(lhs < rhs);
}
