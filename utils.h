#ifndef UTILS_H
#define UTILS_H

/*
 * @brief Concatenates two strings into a newly allocated string
 *
 * @param t1 The first string. It must be non-null
 * @param t2 The second string. It must be non-null
 * @param dst Pointer to a pointer to the destination string
 *
 * @return Length of the string
 *
 * @note Caller is responsible for freeing the pointer
 */
int concat(const char *src1, const char *src2, char **dst);

char* sconcat(int arg_n,...);

void print_string(const char *str, int length);

#endif
