/* File: matrix_dynamic.h */
#ifndef MATRIXh
#define MATRIXh
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#define FORMAT "%8.3lf"

typedef double T;

typedef struct {
  int  row_dim, col_dim;
  T** element;
} matrix;

/* function prototypes */
matrix create_empty_dynamic(int rdim, int cdim);
matrix create_initval_dynamic(int rdim, int cdim, T val);
matrix create_initvals_dynamic(int rdim, int cdim, T* initval);
void destroy_dynamic(matrix);
void matrix_print_dynamic(matrix);
T retrieve_dynamic(int row, int col, matrix m);  /* retrieve an element from m */
void assign_dynamic(int row, int col, matrix*, T val); /* assign a value to an element of m */
void equate_dynamic(matrix* m1, matrix* m2);  /* m1 = m2 */
matrix add_dynamic(matrix, matrix);
matrix subtract_dynamic(matrix, matrix);
matrix negate_dynamic(matrix);
matrix multiply_dynamic(matrix, matrix);
matrix scalar_multiply_dynamic(T scalar, matrix);
matrix transpose_dynamic(matrix);
/* remaining function prototypes not shown */

#endif
