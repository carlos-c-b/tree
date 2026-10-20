#ifndef CONCAT_H
#define CONCAT_H

/*
 * @brief Concatenates two strings into a newly allocated string
 *
 * @param t1 The first string. It must be non-null
 * @param t2 The second string. It must be non-null
 *
 * @return A pointer to the newly allocated string, or NULL if allocation fails
 */
char *concat(const char *t1, const char *t2);

#endif
