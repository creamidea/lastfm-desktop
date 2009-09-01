/*
   Copyright 2005-2009 Last.fm Ltd. 

   This file is part of the Last.fm Desktop Application Suite.

   lastfm-desktop is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   lastfm-desktop is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with lastfm-desktop.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "MoreStationsWidget.h"

#include <QGridLayout>
#include <QPushButton>
#include <QLabel>


MoreStationsWidget::MoreStationsWidget()
{
    QGridLayout* layout = new QGridLayout( this );
    layout->addWidget(new QLabel(tr("More")), 0, 0, 1, 2, Qt::AlignCenter);

    QWidget* w;

    w = new QPushButton(tr("Your Friends"));
    w->setObjectName("friends");
    connect(w, SIGNAL(clicked()), SIGNAL(friends()));
    layout->addWidget(w, 1, 0);

    w = new QPushButton(tr("Your Tags"));
    w->setObjectName("tags");
    connect(w, SIGNAL(clicked()), SIGNAL(tags()));
    layout->addWidget(w, 1, 1);

    w = new QPushButton(tr("Your Playlists"));
    w->setObjectName("playlists");
    connect(w, SIGNAL(clicked()), SIGNAL(playlists()));
    layout->addWidget(w, 2, 0);

    w = new QPushButton(tr("Start a combo station"));
    w->setObjectName("combos");
    connect(w, SIGNAL(clicked()), SIGNAL(combo()));
    layout->addWidget(w, 2, 1);
}
