#include "IntList.h"
#include <iostream>

int main() {
  IntList *L = new IntList(15);
  L = new IntList(10, L);
  L = new IntList(5, L);

  std::cout << L->size() << std::endl;
  std::cout << L->iterativeSize() << std::endl;

  std::cout << L->get(0) << std::endl;
  std::cout << L->iterativeGet(1) << std::endl;

  IntList *Q = incrList(L, 2);
  std::cout << Q->get(0) << " " << Q->get(1) << " " << Q->get(2) << std::endl;
  std::cout << L->get(0) << " " << L->get(1) << " " << L->get(2) << std::endl;

  IntList *Q2 = dincrList(L, 2);
  std::cout << Q2->get(0) << " " << Q2->get(1) << " " << Q->get(2) << std::endl;
  std::cout << L->get(0) << " " << L->get(1) << " " << L->get(2) << std::endl;

  delete L, delete Q;

  return 0;
}
