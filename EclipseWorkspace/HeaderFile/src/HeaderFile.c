/*
 ============================================================================
 Name        : HeaderFile.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROW 100
#define COLUMN 100

int sizeOfIntegerArray(int array[]){
	int i;
	for(i = 0; i < ROW; i++){
		if(array[i] == NULL)
			return i;
	}
return i;
}

int sizeOf2DArray(int array[][COLUMN]){
	int i;
	for(i = 0;i < ROW; i++){
		if(array[i][0] == NULL)
			return i;
		}
}

void nullify1DArray(int array[]){
	int i;
	for(i = 0; i<ROW; i++){
		array[i] = NULL;
	}
}

void nullify2DArray(int array[][COLUMN]){
	int i,j;
	for(i = 0; i < ROW; i++){
	for(j = 0; j < COLUMN; j++)
		array[i][j] = NULL;
	}
}

void insertionSort(int array[], int sizeOfIntegerArray)
{
   int i, pivot, key;
   for (i = 1; i < sizeOfIntegerArray; i++)
   {
       pivot = array[i];
       key = i-1;

       while (key >= 0 && array[key] > pivot)
       {
           array[key+1] = array[key];
           key = key-1;
       }
       array[key+1] = key;
   }
}


//sizeOfCharArrayNew keeps a counter to calculate the size of a char array.

int sizeOfCharArray(char array[]){
	int i = 0;
	while(array[i]!='\0'){i++;}
	return i;
}

bool containsSubString(char array[], char array2[], int arrSize, int arr2Size){
	int i= 0, j=0;
	bool flag = false;
	for(i = 0; i<arrSize; i++){
		flag = false;
		if(array2[j] == array[i]){
			flag = true;
			if(j<arr2Size) j++;
			if(j!=arr2Size) flag = false;
		}
		if(j==arr2Size) break;
	}
	return flag;
}

//bool findLongestSubstring(char array[], char array2[], int arrSize, int arr2Size)

void printContainsSubstring(bool flag, int arr2Size){
	if(flag == false){printf("The entered Substring does not exits\n");}

	if(flag == true){printf("\nThe substring is contained in the main string");}
	}



//construct linked list structure.
typedef struct nodeLL{
	int data;
	int *previous, *next;
}nodeLL;

//create a linked list
//int createLinkedList(int *previous,int *next, int *root, int data){
//
//	printf("Enter the list of numbers to create a linked list");
//	while(!"\n"){
//		printf("\nEnter the numbers you")
//	}
//
//}

int main() {

	setvbuf(stdout, NULL, _IONBF, 0);

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

//
//	nodeLL *root;
//	root = (nodeLL *)malloc(sizeof(nodeLL));
//	root->data = 1;
//	root

	return EXIT_SUCCESS;


}
