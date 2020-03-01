#include <stdio.h>

int main() {
  int int_var = 5;
  int *int_ptr;

  int_ptr = &int_var; // Put the address of int_var into int_ptr

  printf("int_ptr = 0x%016x\n", int_ptr);
  printf("&int_ptr = 0x%016x\n", &int_ptr);
  printf("*int_ptr = %08x\n\n", *int_ptr);

  printf("int_var is located at 0x%016x and contains %d\n", &int_var, int_var);
  printf("int_ptr is located at 0x%016x and contains 0x%016x, and points to %d\n\n", &int_ptr, int_ptr, *int_ptr);
}
