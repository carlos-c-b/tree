#include <stdlib.h>
#include <string.h>
#include "utils.h"

int concat(const char *t1, const char *t2, char **dst) {
	int l1 = strlen(t1);
	int l2 = strlen(t2);
	int length = l1 + l2;

	*dst = malloc(length+1);

	strcpy(*dst, t1);
	strcpy(dst[l1], t2);	// This is not correct

	return length;
}
