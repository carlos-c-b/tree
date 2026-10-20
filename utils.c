#include <stdlib.h>
#include <string.h>
#include "utils.h"

char *concat(const char *t1, const char *t2) {
	int l1 = strlen(t1);
	int l2 = strlen(t2);
	int length = l1 + l2;

	char *s = malloc(length+1);

	strcpy(s, t1);
	strcpy(&s[l1], t2);

	return s;
}
