/*
 ============================================================================
 Name        : C_Ref_Ch03_Statements_If_Else.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(void) {

      setvbuf(stdout, NULL, _IONBF, 0);
	float magic;
	float guess;
	int i=0;

for(i=0; i<5; i++){
srand ( time(NULL) );
    magic = (rand() % 100);
	printf("\nGuess the magic number: ");
	scanf("%f", &guess);
	printf("%f\n", guess);

	if(magic==guess) printf("***Right***\n");
	else {
		printf("***Wrong***\n");
		if(guess>magic) printf("Number missed by: %f\n", (guess-magic));
		else printf("Number missed by: %f\n", (magic-guess));
	}

	printf("The correct number was: %f\n", magic);

	}
	return 0;
}


//generates same random numbers all the time
// when the entered value like .98 iterates the loop for all i(s) and prints all wrong and does not ask for another number.
