#include <stdio.h>

int j = 42; // j is global variable

void func3() {
  int i = 11, j = 999; // Here, j is a local variable of func3().
  printf("\t\t\t[in func3] i @ 0x%016x = %d\n", &i, i);
  printf("\t\t\t[in func3] j @ 0x%016x = %d\n", &j, j);
}

void func2() {
  int i = 7;
  printf("\t\t[in func2] i @0x%016x = %d\n", &i, i);
  printf("\t\t[in func2] j @ 0x%016x = %d\n", &j, j);
  printf("\t\t[in func2] setting j = 1337\n");
  j = 1337; // Writting to j
  func3();
  printf("\t\t[back in func2] i @ 0x%016x = %d\n", &i, i);
  printf("\t\t[back in func2] j @ 0x%016x = %d\n", &j, j);
}

void func1() {
  int i = 5;
  printf("\t[in func1] i @0x%016x = %d\n", &i, i);
  printf("\t[in func1] j @ 0x%016x = %d\n", &j, j);
  printf("\t\t[in func2] setting j = 1337\n");
  func2();
  printf("\t[back in func2] i @ 0x%016x = %d\n", &i, i);
  printf("\t[back in func2] j @ 0x%016x = %d\n", &j, j);
}

int main() {
  int i = 3;
  printf("[in main] i @0x%016x = %d\n", &i, i);
  printf("[int main] j @ 0x%016x = %d\n", &j, j);
  func1();
  printf("[back in func1] i @ 0x%016x = %d\n", &i, i);
  printf("[back in func1] j @ 0x%016x = %d\n", &j, j);
}
