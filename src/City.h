//
// Created by Dawid Drozd aka Gelldur on 13.05.17.
//
#pragma once

#include <ostream>

class City
{
public:
	City(int x = 0, int y = 0);

	int getX() const
	{
		return _x;
	}

	int getY() const
	{
		return _y;
	}

	friend bool operator==(const City& lhs, const City& rhs);
	friend bool operator!=(const City& lhs, const City& rhs);

	friend bool operator<(const City& lhs, const City& rhs);
	friend bool operator>(const City& lhs, const City& rhs);
	friend bool operator<=(const City& lhs, const City& rhs);
	friend bool operator>=(const City& lhs, const City& rhs);

	friend std::ostream& operator<<(std::ostream& os, const City& city);

private:
	int _x;
	int _y;
};


