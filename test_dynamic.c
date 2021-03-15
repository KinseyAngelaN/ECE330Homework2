/* File: test_dynamic.c */
#include "matrix_dynamic.h"
#include "matrix_static.h"

int main() 
{
//test static
  static T data[] = {1,2,3,4};
  matrix  a,b;
  a = create_initvals(2,2,data);
  b = create_empty(2,2);
  equate(&a,&b);
  printf("\n Matrix a:");
  matrix_print(a);
  printf("\n Matrix b:");
  matrix_print(b);
  printf("\n a+b:");
  matrix_print(add(a,b));
  transpose(a);

//test dynamic
 
  matrix  c,d;
  c = create_initvals_dynamic(2,2,data);
  d = create_empty_dynamic(2,2);
  equate_dynamic(&c,&d);
  printf("\n Matrix c:");
  matrix_print_dynamic(c);
  printf("\n Matrix d:");
  matrix_print_dynamic(d);
  printf("\n c+d:");
  matrix_print_dynamic(add_dynamic(c,d));
  transpose_dynamic(a);
}
