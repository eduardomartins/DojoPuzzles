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
 #include "celula.h"


Celula::Celula(QObject *parent, bool vivo):
QObject(parent)
{
        setVivo(vivo);
}

void Celula::setVivo(bool vivo)
{
        _vivo = vivo;
        if(_vivo == false)
                emit morreu();
}

 bool Celula::vivo(void)
{
        return _vivo;
}

 void Celula::morre(void)
{
        setVivo(false);
}

QList<Link> addVizinho(Link link)
{
        
}