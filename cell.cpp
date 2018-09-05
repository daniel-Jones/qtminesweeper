/*
 * Copyright Daniel Jones 2018
 * cell.cpp is part of qtminesweeper, a simple minesweeper clone.
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

#include "cell.h"
#include <stdio.h>

cell::cell(int flag)
{
	setflags(flag);
}

void cell::setflags(int flag)
{
	flags = (enum flagtype)flag;
}

void cell::flagcheck()
{
	puts("cell flags:");
	if (flags & MINE)
		puts("mine");
	if (flags & REVEALED)
		puts("revealed");
	if (flags & FLAG)
		puts("flag");
	if (flags & NUMBER)
		puts("number");
}

int cell::getflags()
{
	return flags;
}

void cell::reveal()
{
	setflags((int)flags ^ (int)REVEALED);
}
