/*
 ============================================================================
 Name        : SUPD_TypeCast.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	char s = 45;
	double d = *(double *) &s;
	printf("%f", d);
	return EXIT_SUCCESS;
}
