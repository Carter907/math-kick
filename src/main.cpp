#include "calculator.h"

int main() {

  Calculator c;

  c.eval("1 + 2");

  c.print_result();

  c.eval("5 + 2");

  c.print_result();

  return 0;
}
