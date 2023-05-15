#include <string.h>
#include <stdio.h>
#include "utility.h"

#ifdef __DEBUG__
int its_debug = 1;
#else
int its_debug = 0;
#endif

void printDebug(char *sx, char *dx) {
	if( its_debug ) {
		printf("%c = %c\n", *sx, *dx);
	}
}

int isPalindrome(char *str) {
	int result = 0 ;
	char *indice_sx, *indice_dx;

	indice_sx=str;
	indice_dx=indice_sx + strlen(str) -1;
	printDebug(indice_sx, indice_dx);
	while (indice_sx < indice_dx  &&  *indice_sx++ == *indice_dx--) {
		printDebug(indice_sx, indice_dx);
	}


	if (*--indice_sx == *++indice_dx) {
		result = 1;
	}

	return result ;
}
