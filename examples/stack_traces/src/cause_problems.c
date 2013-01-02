
#include "cause_problems.h"

#include <stdlib.h>
#include <stdbool.h>

void dummy_function();
void dummy_function()
{
  // char foo[1000];
  // foo[0]= 123;
  //while (1) {}; // inifinite loop (don't do this yet)
  //dummy_function(); // stack overflow

  int32_t a = 1;
  int32_t b = 0;
  int32_t c = a / b; // divide by zero

  // int32_t x = INT32_MIN;
  // int32_t y = -1;
  // int32_t z = x / y; // other integer error

  // int32_t * p = 1243214;
  // *p = 123; // segfault
}

void dummy_function_2()
{
  dummy_function();
}

void do_something_bad(void)
{
  dummy_function_2();
}

