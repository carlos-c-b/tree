#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "utils.h"

int concat(const char *src1, const char *src2, char **dst) {
	int l1 = strlen(src1);
	int l2 = strlen(src2);
	int length = l1 + l2;


	*dst = malloc(length+1);

	strcpy(*dst, src1);
	strcpy(*dst+l1, src2);
	
	return length;
}

void print_string(const char *str, int length) {
	for(int i = 0; i < length; i++) printf("%c", str[i]);
	printf("\n");
}
