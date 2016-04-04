#include <iostream>
#include "utilits.h"

using namespace std;

typedef enum 
{
	off=0,
	on=1,
}lampada;

void init(lampada *l, int n){
	for(int i=0;i<=n;i++)
		l[i] = off; 
}

void print(lampada *l, int n){
	for(int i=1;i<=n;i++){
		cout << (l[i] == on ? "ON" : "OFF") << ", ";
	}
	cout << "\n";
}

int main(int argv, char *argc[]){
	int n = 0;
	lampada *lampadas;
	if(argv == 2){
		n = convertStringToInt(argc[1]);
		lampadas = new lampada[n]; 
		init(lampadas, n);
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j % i == 0)
					lampadas[j] = (lampadas[j] == on ? off : on); 
			}
		}
		print(lampadas, n);
	}
	else{
		cout << "Modo de uso: " << argc[0] << " <numero> \n"; 
	}
	delete [] lampadas;
	return 0;
}
