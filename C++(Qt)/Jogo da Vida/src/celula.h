/* -------------------------------------------------------------------------
 *
 * main.cpp
 *
 * Copyright 2016 Eduardo Sant'Anna Martins <eduardo@eduardomartins.site> 
 * 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software 
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 * ------------------------------------------------------------------------- 
*/
#ifndef CELULA_H
#define CELULA_H

#include <QList>

class Celula: public QObject 
{
        Q_OBJECT
        public:
                Celula(QObject * = 0, bool vivo = true);
                ~Celula();
                void setVivo(bool vivo);
                bool vivo(void);
                QList<Link> vizinhos(void);
                QList<Link> addVizinho(Link link);
        signal:
                void morreu(void);
        slot:
        void morre(void);
        private:
                bool _vivo;
                QList<Link> _vizinhos;
};

#endif
