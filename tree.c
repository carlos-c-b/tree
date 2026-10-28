#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"


// Produces a file which content is the output of ls, reads it and deletes it
// filename - pointer to string
// d - position of / character in string, or -1
 int _ls(char *filename, int d) { 
	if(d != -1)
		filename[d] = '\0';
	printf("\t%s\n", filename);
	
 	char *tmpfilename = sconcat(3, ".ls-", filename, ".tmp"); // E.g. .ls-dir1.tmp
 	char *cmd = sconcat(2, "ls --file-type > ", tmpfilename);	 
 	system(cmd); 
 	free(cmd); 



 	FILE *fd = fopen(tmpfilename, "r"); 
 	const int COUNT = 100; 
 	char buf[COUNT];

 	while(fgets(buf, COUNT, fd) != NULL) {
 		for(int i = 0; buf[i] != '\n' && buf[i] != '\0'; i++) {
 			printf("%c", buf[i]);
			  if(buf[i] == '/') // Folder found
				_ls(&buf[0], i); // This doesn't work, and either way a recursive version will cause stack overflow.
								 // Alternative: create a Hash map were you introduce the folders you find, so you can
								 // return back to them after traversing their children. In this hash table we'll store
								 // (hash(inode), (inode, fd position)), so we can close the file and reopen it later
								 // and position the pointer with fseek
 		}
 		printf("\n");
 	}
	

 	fclose(fd);
 	system(sconcat(2, "rm ", tmpfilename));
	free(tmpfilename);

 	return 0;
 }

int ls(char *filename) {
	_ls(filename, -1);
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
