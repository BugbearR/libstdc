/**
 * @file string.h
 * @author BugbearR (bugbearr@gmail.com)
 * @brief String header
 * @version 0.1.0
 * @date 2021-08-19
 */
#ifndef _BBRLIBSTDC_STRING_H_
#define _BBRLIBSTDC_STRING_H_

#include <stddef.h>

/**
 * @brief search the first occurrence of character from memory
 *
 * @param ptr pointer to the object to be searched
 * @param ch character to search for
 * @param count max number of characters to be searched
 * @return pointer to the found character, or NULL if no such character is found
 */
void *memchr(const void *ptr, int ch, size_t count);

/**
 * @brief compare memory
 *
 * @param lhs left hand string to compare
 * @param rhs right hand string to compare
 * @param count max number of characters to be compared
 * @retval <0 *lhs < *rhs
 * @retval ==0 *lhs == *rhs
 * @retval >0 *lhs > *rhs
 */
int memcmp(const void *lhs, const void *rhs, size_t count);

/**
 * @brief copy memory
 *
 * @param dest pointer to the object to copy to
 * @param src pointer to the object to copy from
 * @param count number of characters to copy
 * @return a copy of dest
 */
void *memcpy(void * restrict dest, void * restrict src, size_t count);

/**
 * @brief move memory
 *
 * @param dest pointer to the object to copy to
 * @param src pointer to the object to copy from
 * @param count number of characters to copy
 * @return a copy of dest
 */
void *memmove(void *dest, const void *src, size_t count);

/**
 * @brief fill memory
 *
 * @param dest pointer to the object to fill
 * @param ch character to fill
 * @param count number of characters to fill
 * @return a copy of dest
 */
void *memset(void *dest, int ch, size_t count);

/**
 * @brief catenate string
 *
 * @param dest pointer to the string to catenate to
 * @param src pointer to the string to catenate from
 * @return a copy of dest
 */
char *strcat(char * restrict dest, const char * restrict src);

/**
 * @brief search the first occurrence of character from string
 *
 * @param str pointer to the string to be searched
 * @param ch character to search for
 * @return pointer to the found character, or NULL if no such character is found
 */
char *strchr(const char *str, int ch);

/**
 * @brief compare string
 *
 * @param lhs pointer to the left hand string to compare
 * @param rhs pointer to the right hand string to compare
 * @retval <0 *lhs < *rhs
 * @retval ==0 *lhs == *rhs
 * @retval >0 *lhs > *rhs
 */
int strcmp(const char *lhs, const char *rhs);

/**
 * @brief copy string
 *
 * @param dest pointer to the string to copy to
 * @param src pointer to the string to copy from
 * @return a copy of dest
 */
char *strcpy(char * restrict dest, const char * restrict src);

/**
 * @brief catenate string (length-limited)
 *
 * @param dest pointer to the string to catenate to
 * @param src pointer to the string to catenate from
 * @param count max number of characters to catenate
 * @return a copy of dest
 */
char *strncat(char * restrict dest, const char * restrict src, size_t count);

/**
 * @brief compare string (length-limited)
 *
 * @param lhs pointer to the left hand string to compare
 * @param rhs pointer to the right hand string to compare
 * @retval <0 *lhs < *rhs
 * @retval ==0 *lhs == *rhs
 * @retval >0 *lhs > *rhs
 */
int strncmp(const char *lhs, const char *rhs, size_t count);

/**
 * @brief copy string (length-limited)
 *
 * @param dest pointer to the string to copy to
 * @param src pointer to the string to copy from
 * @param count max number of characters to copy
 * @return a copy of dest
 */
char *strncpy(char * restrict dest, const char * restrict src, size_t count);

/**
 * @brief find the last occurrence of character
 *
 * @param str pointer to the string to be analysed
 * @param ch character to search for
 * @return pointer to the found character, or null if no such character is found
 */
char *strrchr(const char *str, int ch);

#endif /* _BBRLIBSTDC_STRING_H_ */
