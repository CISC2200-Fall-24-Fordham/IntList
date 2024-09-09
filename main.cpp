#include "IntList.h"
#include <iostream>

int main() {
  IntList *aList = new IntList(5, NULL);
  IntList *x = new IntList(10, aList);
  std::cout << x->get(1) << std::endl;
  return 0;
}
