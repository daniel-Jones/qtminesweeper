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
	this->setStyleSheet("background-color: black;");
	/* setup function */
	blackpen = QPen(Qt::black);
	whitepen = QPen(Qt::white);
	redpen = QPen(Qt::red);
	greenpen = QPen(Qt::green);
	bluepen = QPen(Qt::blue);

	/* create cells */
	int tmpx, tmpy;
	for (int c = 0; c < NUMBEROFCELLS; c++)
	{
		cell tmp(cell::MINE);
		generatecellpos(&tmp);
		cells.append(tmp);
		tmpx++;
		tmpy++;
	}

	cursor.movetogridpos(0, 0);
}

void qtminesweeper::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);	
	painter.setPen(whitepen);
	drawgrid(&painter);
	painter.setPen(redpen);
	drawcursor(&painter);
	painter.setPen(greenpen);
	drawcells(&painter);
}

void qtminesweeper::drawgrid(QPainter *painter)
{
	int i, c;
	painter->drawRect(BORDEROFFSET, BORDEROFFSET, GRIDWIDTH, GRIDHEIGHT);
	i = c = 0;
	i = BORDEROFFSET;
	for (c = 0; c < GRIDHEIGHT-SQUARESIZE; c+=SQUARESIZE)
	{
		i+=SQUARESIZE;
		painter->drawLine(BORDEROFFSET, i, BORDEROFFSET+GRIDWIDTH, i);
	}
	i=BORDEROFFSET;
	for (c = 0; c < GRIDWIDTH-SQUARESIZE; c+=SQUARESIZE)
	{
		i+=SQUARESIZE;
		painter->drawLine(i, BORDEROFFSET, i, BORDEROFFSET+GRIDHEIGHT);
	}
}

void qtminesweeper::drawcursor(QPainter *painter)
{
	painter->drawRect(cursor.getrealx(), cursor.getrealy(), SQUARESIZE, SQUARESIZE);
}

void qtminesweeper::drawcells(QPainter *painter)
{
	for (int c = 0; c < cells.length(); c++)
	{
		painter->drawText(cells[c].getrealx(),
				cells[c].getrealy()+(SQUARESIZE/2),
				"B");
	}
}

void qtminesweeper::keyPressEvent(QKeyEvent *event)
{
	switch(event->key())
	{
		case Qt::Key_W:
			if (cursor.getrealy() > BORDEROFFSET)
			{
				cursor.movetogridpos(cursor.getgridx(),
						cursor.getgridy()-1);
			}
			break;
		case Qt::Key_S:
			if (cursor.getrealy() < GRIDHEIGHT-BORDEROFFSET)
			{
				cursor.movetogridpos(cursor.getgridx(),
						cursor.getgridy()+1);
			}
			break;
		case Qt::Key_D:
			if (cursor.getrealx() < GRIDWIDTH-BORDEROFFSET)
			{
				cursor.movetogridpos(cursor.getgridx()+1,
						cursor.getgridy());
			}
			break;
		case Qt::Key_A:
			if (cursor.getrealx() > BORDEROFFSET)
			{
				cursor.movetogridpos(cursor.getgridx()-1,
						cursor.getgridy());
			}
			break;
		default:
			break;
	}
	update();
}


void qtminesweeper::generatecellpos(cell *c)
{
	int dx, dy;
	dx = dy = 0;
	c->movetogridpos(dx, dy);
	printf("%d\n", c->getrealx());
}
