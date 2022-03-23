/**
 * @file assert.h
 * @author BugbearR (bugbearr@gmail.com)
 * @brief Standard limitation header
 * @version 0.1.0
 * @date 2022-03-23
 */
#ifndef _BBRLIBSTDC_ASSERT_H_
#define _BBRLIBSTDC_ASSERT_H_

#ifdef NDEBUG
#define assert(ignore) ((void)0)
#else
#define assert(expr) \
    do { \
        fprintf(stderr, "assert. expr:%s\n", #expr); \
        exit(EXIT_FAILURE); \
    }
#endif

#endif /* _BBRLIBSTDC_ASSERT_H_ */
