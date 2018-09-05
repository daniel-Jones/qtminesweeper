/*
 * Copyright Daniel Jones 2018
 * qtminesweeper.h is part of qtminesweeper, a simple minesweeper clone.
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

#ifndef QTMINESWEEPER_H
#define QTMINESWEEPER_H

#include <QtGui>
#include <QWidget>
#include <QList>
#include <vector>
#include "selector.h"
#include "cell.h"
#include "constants.h"

class qtminesweeper : public QWidget
{
	Q_OBJECT

	public:
		explicit qtminesweeper(); /* init function */

	private:
		QPen blackpen;
		QPen whitepen;
		QPen redpen;
		QPen greenpen;
		QPen bluepen;

		void drawgrid(QPainter *painter);
		void drawcursor(QPainter *painter);
		void drawcells(QPainter *painter);
		void generatecellpos();
		void revealcell(int index);
		int getcellindexfrompos(int gridx, int gridy);

		selector cursor;
		std::vector<cell> cells;
			
	protected:
		void paintEvent(QPaintEvent *event);
		void keyPressEvent(QKeyEvent *event);

signals:
	public slots:
	private slots:
};

#endif
