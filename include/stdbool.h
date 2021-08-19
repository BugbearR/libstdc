/**
 * @file stdint.h
 * @author BugbearR (bugbearr@gmail.com)
 * @brief Standard boolean header
 * @version 0.1.0
 * @date 2021-08-19
 */
#ifndef _BBRLIBSTDC_STDBOOL_H_
#define _BBRLIBSTDC_STDBOOL_H_

#ifndef __cplusplus

/** boolean type */
#ifndef bool
#define bool _Bool
#endif

/** boolean value true */
#ifndef true
#define true (1)
#endif

/** boolean value false */
#ifndef false
#define false (0)
#endif

#endif /* __cplusplus */

#endif /* _BBRLIBSTDC_STDBOOL_H_ */
