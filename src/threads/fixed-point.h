#ifndef THREADS_FIXED_POINT_H
#define THREADS_FIXED_POINT_H

#define fp_t int

#define P 17
#define Q 14

#define FRACTION 1<<Q

#if P + Q != 31
#error "FATAL ERROR: P + Q != 31."
#endif

#define FP_CONVERT(x) (x) * (FRACTION)
#define FP_INT_PART(x) (x) / (FRACTION)
#define FP_ROUND(x) ((x) >= 0 ? ((x) + (FRACTION) / 2) / (FRACTION) : ((x) - (FRACTION) / 2) / (FRACTION))
#define FP_ADD_MIX(x, n) (x) + (n) * (FRACTION)
#define FP_SUB_MIX(x, n) (x) - (n) * (FRACTION)
#define FP_MUL(x, y) ((int64_t)(x)) * (y) / (FRACTION)
#define FP_DIV(x, y) ((int64_t)(x)) * (FRACTION) / (y)

#endif /* threads/fixed-point.h */
