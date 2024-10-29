#include "function.h"

extern int nComplettionStatus = 0;

int main(int argc, char **argv)
{
  float x = 1.0;
  float y = 5.0;

  float z;

  z = add_and_multiply(x, y);
  nComplettionStatus = 1;
  return 0;
}
