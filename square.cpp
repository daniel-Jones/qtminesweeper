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
void square::setrealx(int x)
{
	realx = x;
}

void square::setrealy(int y)
{
	realy = y;
}

void square::setgridx(int x)
{
	gridx = x;
}

void square::setgridy(int y)
{
	gridy = y;
}

int square::getrealx()
{
	return realx;
}

int square::getrealy()
{
	return realy;
}

int square::getgridx()
{
	return gridx;
}

int square::getgridy()
{
	return gridy;
}

void square::movetorealpos(int x, int y)
{
	setrealx(x);
	setrealy(y);
}

void square::movetogridpos(int x, int y)
{
	setgridx(x);
	setgridy(y);

}
