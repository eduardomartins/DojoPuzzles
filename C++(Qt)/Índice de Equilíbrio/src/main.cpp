/* -------------------------------------------------------------------------
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
 * -------------------------------------------------------------------------
 * 
 * Retirado de: http://dojopuzzles.com/problemas/exibe/indice-de-equilibrio/
 *
 * =========================== Índice de Equilíbrio ========================
 *
 * Contribuição de: Renne Rocha
 * 
 *
 * Um vetor com N números inteiros é dado. O índice de equilíbrio deste
 * vetor é o número inteiro P (com 0 ≤ P < N) e soma dos elementos do
 * vetor com índices inferiores é igual a soma dos elementos de índices
 * superiores. Isto é:
 *
 * A[0] + A[1] + ... + A[P−1] = A[P+1] + ... + A[N−2] + A[N−1]
 *
 * Assumimos que a soma de zero elementos é igual a zero. Isso pode
 * acontecer se P = 0 ou se P = N-1.
 *
 * Por exemplo, tendo o seguinte vetor com 7 elementos:
 *
 * A[0] = -7 A[1] = 1 A[2] = 5 A[3] = 2 A[4] = -4 A[5] = 3 A[6] = 0
 *
 * Então:
 *
 *   P = 3 é um índice de equilíbrio deste vetor, já que
 *     A[0] + A[1] + A[2] = A[4] + A[5] + A[6]
 *   P = 6 também é um índice de equilíbrio deste vetor, já que
 *     A[0] + A[1] + A[2] + A[3] + A[4] + A[5] = 0 e não existem elementos
 *     com índices maiores que 6.
 *
 * Escreva uma função que, dado um vetor A com índices iniciando em zero,
 * com N número inteiros, retorna qualquer um de seus índices de equilíbrio.
 *
 * A função deve retornar -1 se o índice de equilíbrio não existir.
 *
 * -----------------------------------------------------------------------
 */

#include <QList>
#include <QDebug>

void imprimeLista(QList<int> vec){
	QDebug debug = qDebug();
	debug << "[";
	foreach(const int r, vec)
		debug << r;
	debug << "]";
}


int indiceEquilibrio(QList<int> vec){
	long RHS = 0, LHS = 0;
	
	for(int i = 0;i < vec.size();i++)
		LHS += vec.value(i);
	
	for(int p = vec.size()-1;p >= 0;p--){
		LHS -= vec.value(p);
		if(LHS == RHS)
			return p;
		RHS += vec.value(p);
			
	}
	return -1;
}	


int main(int argv, char **argc){
	QList<int> vec;
	if(argv > 1){
		for(int i = 1;i < argv;i++){
			vec << QString(argc[i]).toInt();
		}
	}
	imprimeLista(vec);
	qDebug() << "ÍNDICE: " << indiceEquilibrio(vec);
	return 0;
}

