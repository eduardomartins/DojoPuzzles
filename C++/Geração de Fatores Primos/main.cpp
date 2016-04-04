#include <iostream>
#include "utilits.h"

using namespace std;

bool checkPrime(int n){
	for(int i=2;i<n;i++){
		if(n % i == 0){
			return true;
		}
	}
	return false;
}

int nextPrime(int n){
	do{
		n++;
			
	}while(checkPrime(n));
	return n;
}

void primesFactor(int num){
	int prime = 2, n = num;
	do{
		while(n % prime == 0){
			n /= prime;
			
			if(n != 1)
				cout << prime << " * ";
			else
				cout << prime <<  " = " << num;
		}
		prime = nextPrime(prime);
	}while(n != 1);
	cout << "\n";
}

int main(int argv, char *argc[]){
	if(argv == 2){
		primesFactor(convertStringToInt(argc[1]));
	}
	else{
		cout << "Modo de uso: "<< argc[0] << " <numero> \n";
	}
	return 0;
}
