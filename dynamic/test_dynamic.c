/* File: test_dynamic.c */
#include "matrix_dynamic.h"

int main() 
{
  matrix  a,b,r;
  static T data[] = {1,2,3,4};
  a = create_initvals_dynamic(2,2,data);
  b = create_empty_dynamic(2,2);
  r = create_empty_dynamic(2,2);
  equate_dynamic(&a,&b);
  printf("\n Matrix a:");
  matrix_print_dynamic(a);
  printf("\n Matrix b:");
  matrix_print_dynamic(b);
  printf("\n a+b:");
  matrix_print_dynamic(add_dynamic(a,b));
  printf("\n Matrix a transposed:");
  r = transpose_dynamic(a);
  matrix_print_dynamic(r);
}
