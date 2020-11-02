//Jessica Elkins
//1/30/20
// This program uses an insertion sort algorithm to sort user input

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//defined N as global variable
int N = 0;

// this method get an array of strings from the user and returns it
char **userInput( ){
	char **array;
	int i;

	//asking user how many elements are in the array & storing it as N
	printf("Enter the number of elements in the array: \n");
	scanf("%d", &N);
	//dynamically allocating an array of pointers
	array = (char**)malloc(sizeof(char*)*N);

	//getting each of the string from the user
	for(i = 0; i < N; i++) {
		printf("Enter string #%d: ", i + 1);

		//allocating memory for each string
		array[i] = (char*)malloc(20);
		scanf(" %s", array[i]);

		//putting the null character at the end of each string
		array[i][sizeof(array[i] - 1)] = '\0';
	}
	//returning the input array to main	
	return array;
}

//this method takes in the unsorted input array and sorts it using insertion sort
//then returns the sorted array
char ** insertionSort(char **array){
	int i, j;

	//allocating a temp array to store string contents for swapping
	char *tempArray;
	tempArray = malloc(sizeof(char)*N);

	for(i = 1; i < N; i++){
		j = i;

		//compares elements of the array & swaps them if previous element is bigger
		//than current element
		while(j > 0 && strcmp(array[j - 1], array[j]) > 0) {
			strcpy(tempArray, array[j-1]);
			strcpy(array[j-1],array[j]);
			strcpy(array[j],tempArray);	
			--j;
		} 
	}	

	//returns the sorted array to main
	return array;
}

//this method takes in the sorted array and prints it 
char ** print(char **array) {
	int i;
	
	// looping through each element of the array and displaying it
	for(i = 0; i < N; i++){
		printf("%s ", *(array + i));
	}
	printf("\n");
}


int main() {

	char **array;
	//getting the input from the user
	array = userInput();
	
	//sorting the input
	array = insertionSort(array);

	//printing the sorted array
	print(array);

	//freeing memory
	free(array);

	return 0;
}
