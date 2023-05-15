#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

#define MAX 1000
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char vettore[MAX];

	printf("Introduci la stringa: ");
	gets(vettore);

	if (isPalindrome(vettore) != 0 ) {
		printf("La stringa e\' palindroma\n");
	} else {
		printf("La stringa non e\' palindroma\n");
	}
	return EXIT_SUCCESS;

}
