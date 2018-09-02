/*
 * Copyright Daniel Jones 2018
 * square.cpp is part of qtminesweeper, a simple minesweeper clone.
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "square.h"

square::square()
{

}

int square::getgridx()
{
	return gridx;
}

int square::getgridy()
{
	return gridy;
}

int square::getrealx()
{
	return realx;
}

int square::getrealy()
{
	return realy;
}
void square::movetorealpos(int x, int y)
{
	realx = x;
	realy = y;
}

void square::movetogridpos(int x, int y)
{
	gridx = x;
	gridy = y;
	int rx, ry;
	rx = x * SQUARESIZE + BORDEROFFSET;
	ry = y * SQUARESIZE + BORDEROFFSET;
	movetorealpos(rx, ry);
}
