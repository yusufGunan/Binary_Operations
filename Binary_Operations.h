/* Descriptions */

#ifndef BINARY_OPERATIONS_H
#define BINARY_OPERATIONS_H

#if defined(__cplusplus)
extern "C" {
#endif /* _cplusplus */

#include <stdlib.h>
#include <stdint.h>

/* */
#define COMPILE_TIME_COND_CHECK(condition) ((void)sizeof(char[1 - 2*!!(condition)]));

/* Macros */
/* */
#define BINARY_BASIC_LEFT_SHIFT(x, n) ((x) << (n));

/* */
#define BINARY_LEFT_SHIFT(x, n)         \
    BINARY_BASIC_LEFT_SHIFT(x, n)       \
    COMPILE_TIME_COND_CHECK((n < 0) || (sizeof(x)*8 < n)) 

/* */
#define BINARY_BASIC_RIGHT_SHIFT(x, n) ((x) >> (n));

/* */
#define BINARY_AND(x, y) ((x) & (y))

/* */
#define BINARY_OR(x, y) ((x) | (y))

/* */
#define BINARY_XOR(x, y) ((x) ^ (y))

/* */
#define BINARY_NOT(x) (~(x))

/* */
#define BINARY_CLEAR_BIT(x, n) ((x) & BINARY_NOT(BINARY_LEFT_SHIFT(1U, (n))))

/* */
#define BINARY_SET_BIT(x, n) ((x) | (BINARY_LEFT_SHIFT(1U, (n))))


/* Functions */





#if defined(__cplusplus)
}
#endif /* __cplusplus */ 
#endif /* BINARY_OPERATIONS_H */