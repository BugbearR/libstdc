/**
 * @file stddef.h
 * @author BugbearR (bugbearr@gmail.com)
 * @brief Standard definition header
 * @version 0.1.0
 * @date 2021-08-11
 */
#ifndef _BBRLIBSTDC_STDDEF_H_
#define _BBRLIBSTDC_STDDEF_H_

#include <sys/stddef.h>

/**
 * @brief NULL pointer macro
 */
#define NULL ((void*)0)

/**
 * @brief offset of struct member
 * @param TYPE type of struct
 * @param MEMBER member
 */
#ifdef __compiler_offsetof
#define offsetof(TYPE, MEMBER) __compiler_offsetof(TYPE, MEMBER)
#else
#define offsetof(TYPE, MEMBER) ((size_t)(((char*)&(((TYPE*)0)->MEMBER))-((char*)0)))
#endif

#endif /* _BBRLIBSTDC_STDDEF_H_ */
