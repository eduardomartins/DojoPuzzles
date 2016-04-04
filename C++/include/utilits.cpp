#include "utilits.h"

int convertCharToInt(char c){
	return (c >= 48 && c <= 57) ? c - 48 : -1;
}

int convertStringToInt(char *c){
	int v = 0;
	while(*c != 0){
		v = (v * 10) + convertCharToInt(*c);
		c++;
	}
	return v;
}
