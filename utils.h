#ifndef CONCAT_H
#define CONCAT_H

/*
 * @brief Concatenates two strings into a newly allocated string
 *
 * @param t1 The first string. It must be non-null
 * @param t2 The second string. It must be non-null
 * @param dst Pointer to the destination string
 *
 * @return Length of the string
 */
int concat(const char *t1, const char *t2, char **dst);

#endif
