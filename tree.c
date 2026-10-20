#include <stdio.h>
#include <stdlib.h>

// Produces a file which content is the output of ls
int ls(char *filename) {

}

// Returns an array of strings with the file names. 
// The first position of the array is a string containing the number of file names.
char** get_files() {

}

// Prints the file names in a tree fashion
// Initially, it only prints a name per line, but the idea is printing it in a tree fashion
void print_list(char** file_list) {
	int n = atoi(file_list[0]);	

	for(int i=1; i<=n; i++) {
		printf("%s\n", file_list[i]);
	}
}

int main() {

}
