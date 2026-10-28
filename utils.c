#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
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

char* sconcat(int n_arg,...) {
	va_list ap;
	int length = 0;
	int lengths[n_arg];
	for(int i = 0; i < n_arg; i++) lengths[i] = 0;


	va_start(ap, n_arg);
	for(int i = 0; i < n_arg; i++) {
		lengths[i] = strlen(va_arg(ap, char *));
		length += lengths[i];
	}
	va_end(ap);



	char *dst = malloc(length+1);
	
	va_start(ap, n_arg);
	int pos = 0;
	for(int i = 0; i < n_arg; i++) {
		strcpy(&dst[pos], va_arg(ap, char *));
		pos += lengths[i];
	}
	va_end(ap);

	return dst;

}

void print_string(const char *str, int length) {
	for(int i = 0; i < length; i++) printf("%c", str[i]);
	printf("\n");
}
