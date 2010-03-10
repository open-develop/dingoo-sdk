#ifndef __stdlib_h__
#define __stdlib_h__

#include <stddef.h>
#include <malloc.h>

#define EXIT_FAILURE -1
#define EXIT_SUCCESS 1

typedef struct {
	long int quot;
	long int rem;
} ldiv_t;

typedef struct {
	int quot;
	int rem;
} div_t;

extern void  abort();

extern int      abs(int n);
extern long int labs(long int n);

extern div_t  div(int numerator, int denominator);
extern ldiv_t ldiv(long int numerator, long int denominator);

#define RAND_MAX 0x7FFFFFFF

extern void     srand(unsigned int inSeed);
extern int      rand();

#endif
