/*
 * Copyright Daniel Jones 2018
 * square.h is part of qtminesweeper, a simple minesweeper clone.
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

#ifndef SQUARE_H
#define SQUARE_H

class square 
{

	public:
		explicit square(); /* init function */

	private:

	protected:
		/*
		 * real* indicates the pixel position
		 * grid* indicates grid position
		 */
		int realx;
		int realy;

		int gridx;
		int gridy;

		void setrealx(int x);
		void setrealy(int y);

		void setgridx(int x);
		void setgridy(int y);

		int getrealx();
		int getrealy();

		int getgridx();
		int getgridy();

		void movetogridpos(int x, int y)
};

#endif
