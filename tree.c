#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "utils.h"

#define FILENAME "list.txt"

/// Produces a file which content is the output of ls
int ls(char *filename) {
	system("ls > ls.tmp");	
	FILE *fd = fopen("ls.tmp", "r");
	const int COUNT = 1000;
	char buf[COUNT];

	while(fgets(buf, COUNT, fd) != NULL) {
		printf("%s", buf);
	}
	printf("\n");

	fclose(fd);

	return 0;
}

// simple ls implementation
int myls(char *filename) {
	return 0;
}

// Returns an array of strings with the file names. 
// The first position of the array is a string containing the number of file names.
char** get_files() {

	return NULL;
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
	ls(".");

	return 0;
}
