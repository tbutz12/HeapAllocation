#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>
//include your code
void *my_malloc(int n);
void my_free(void *b);
void dump_heap();


//replace malloc here with the appropriate version of mymalloc
#define MALLOC my_malloc
//replace free here with the appropriate version of myfree
#define FREE my_free

//Whether to turn on verbose heap debug output
#define HEAP_DEBUG

//You can adjust how many things are allocated
#define TIMES 100

//If you want to make times bigger than 100, remove the call to qsort and do something else.
//Then remove this check.
#if TIMES >= 1000
        #error "TIMES is too big, qsort will switch to mergesort which requires a temporary malloc()ed array"
#endif



