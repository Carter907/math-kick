#include "calculator.h"

int main() {

  Calculator c;

  c.eval("5 + 2/5+10");

  c.print_result();

  return 0;
}
