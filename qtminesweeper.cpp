/*
 * Copyright Daniel Jones 2018
 * qtminesweeper.cpp is part of qtminesweeper, a simple minesweeper clone.
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

#include <stdio.h>
#include <QApplication>
#include "qtminesweeper.h"

qtminesweeper::qtminesweeper()
{

}

void qtminesweeper::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);	
}

void qtminesweeper::keyPressEvent(QKeyEvent *event)
{
	switch(event->key())
	{
		case Qt::Key_W:
			break;
		case Qt::Key_S:
			break;
		case Qt::Key_D:
			break;
		case Qt::Key_A:
			break;
		default:
			break;
	}
	update();
}
