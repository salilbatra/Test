/*
 ============================================================================
 Name        : subString.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int sizeOfCharArray(char array[]){
	int i = 0;
	while(array[i]!='\0'){i++;}
	return i;
}

void printContainsSubstring(bool flag, int arr2Size){
	if(flag == false){printf("The entered Substring does not exits\n");}

	if(flag == true){printf("\nThe substring is contained in the main string\n");}
	}

bool containsSubString(char array[], char array2[], int arrSize, int arr2Size){
	int i = 0, j = 0;
	bool flag = false;

	for(i = 0; i<arrSize; i++){
		if(array2[j] == array[i]){
			flag = true;
			j++;
			if(j == arr2Size) break;
		}

		else {
			flag = false;
			j = 0;
		}
	}

	if(j == arr2Size) flag = true;
	else flag = false;

	return flag;
}
int main(void) {
	int size = 20;
		char arr[size], arr2[size];
		//get input for the first string and store in char array(arr)
		scanf("%s", &arr);

		//get input string and store in char array(arr2) to find if that string exists as substring.
		scanf("%s", &arr2);

		int arrSize = sizeOfCharArray(arr);
		int arr2Size = sizeOfCharArray(arr2);

		bool flag = containsSubString(arr, arr2, arrSize, arr2Size);
		printContainsSubstring(flag, arr2Size);

	return EXIT_SUCCESS;
}
