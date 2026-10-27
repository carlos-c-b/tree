#include <stdio.h>
#include <stdlib.h>

void foo(char **s) {
	*s = malloc(10);
}


int main() {
	char *s;
	foo(&s);
	free(s);
}
