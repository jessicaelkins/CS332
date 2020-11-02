// Jessica Elkins
// CS332
// Lab 11
// 4/14/20
// This program prompts users to enter a UNIX command 
// and executes the command using popen and pclose.

// TO COMPILE: gcc lab11.c -o lab11
// TO RUN: ./lab11

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {    
	FILE *fp;    
	char line[BUFSIZ];
	char input[BUFSIZ];
	int length;

	// keep asking the user for input until they enter "quit"
	while((strcmp("quit", input) != 0)){

		// printing "Enter command" 
		printf("Enter command: ");

		// storing the line the user entered into input string
		fgets(input, BUFSIZ, stdin);

		length = strlen(input);
	
		// getting rid of new line character at the end
		if(input[length-1] == '\n')
			input[length-1] = '\0';
		
		// making sure it doesnt execute "quit" command
		if((strcmp("quit", input) != 0)){		    

			// opening popen in read mode
			if ((fp = popen(input, "r")) == NULL) {
				perror("popen");
				exit(EXIT_FAILURE);    
			}    

			// diplaying popen results to standard out
			while (fgets(line, BUFSIZ, fp) != NULL) {  
				fputs(line, stdout);     
			}    

			// closing the file pointer
			if (pclose(fp) == -1) {
				perror("pclose");
				exit(EXIT_FAILURE);    
			}		
		}
	}

	printf("Exiting program...bye! \n");    

	return 0;
}
