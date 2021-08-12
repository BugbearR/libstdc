/**
 * @file sys/limits.h
 * @author BugbearR (bugbearr@gmail.com)
 * @brief System dependent limitation header
 * @version 0.1.0
 * @date 2021-08-11
 */
#ifndef _BBRLIBSTDC_SYS_LIMITS_H_
#define _BBRLIBSTDC_SYS_LIMITS_H_

/** Bit size of char type */
#define CHAR_BIT (8)

/**
 * @brief min value of char
 */
#define CHAR_MIN (-128)

/**
 * @brief max value of char
 */
#define CHAR_MAX (127)

/**
 * @brief min value of signed char
 */
#define SCHAR_MIN (-128)

/**
 * @brief max value of signed char
 */
#define SCHAR_MAX (127)

/**
 * @brief max value of unsigned char
 */
#define UCHAR_MAX (255)

/**
 * @brief min value of signed short
 */
#define SHRT_MIN (-32768)

/**
 * @brief max value of signed short
 */
#define SHRT_MAX (32767)

/**
 * @brief max value of unsigned short
 */
#define USHRT_MAX (65535)

#if INT_BIT == 32
/**
 * @brief min value of signed int
 */
#define INT_MIN (-2147483648)

/**
 * @brief max value of signed int
 */
#define INT_MAX (2147483647)

/**
 * @brief max value of unsigned int
 */
#define UINT_MAX (4294967295)
#elif INT_BIT == 64
/**
 * @brief min value of signed int
 */
#define INT_MIN (-9223372036854775808)

/**
 * @brief max value of signed int
 */
#define INT_MAX (9223372036854775807)

/**
 * @brief max value of unsigned int
 */
#define UINT_MAX (18446744073709551615)
#endif

#if LONG_BIT == 32
/**
 * @brief min value of signed long
 */
#define LONG_MIN (-2147483648L)

/**
 * @brief max value of signed long
 */
#define LONG_MAX (2147483647L)

/**
 * @brief max value of unsigned long
 */
#define ULONG_MAX (4294967295UL)
#elif LONG_BIT == 64
/**
 * @brief min value of signed long
 */
#define LONG_MIN (-9223372036854775808L)

/**
 * @brief max value of signed long
 */
#define LONG_MAX (9223372036854775807L)

/**
 * @brief max value of unsigned long
 */
#define ULONG_MAX (18446744073709551615UL)
#endif

#endif /* _BBRLIBSTDC_SYS_LIMITS_H_ */
