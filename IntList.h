class IntList {
  public:
    int first;
    IntList *rest;
    IntList(int f, IntList *r = nullptr) {
      first = f;
      rest = r;
    }

    /**
    * @brief Returns the number of items in the list
    *
    * @return int count for the list
    */
    int size() {
      // base case: the smallest problem that we can solve using this method
      if (rest == nullptr) { // NULL or nullptr
        return 1;

      }
      // recursive part: shrink the size of the problem
      // we no longer want to know the size of the whole list,
      // but the size of the "rest" list
      return 1 + rest->size();
    }

    /**
    * @brief Returns the number of items in the list iteratively
    *
    * @return int count for the list
    */
    int iterativeSize() {
      int count = 0;
      IntList *current = this;
      while (current != nullptr) {
        count++;
        current = current->rest;
      }
      return count;
    }

    /**
    * @brief Retrieve the i-th element (i.e., int) in the list
    *
    * @param i index of element
    * @return int& the reference to the first element
    */
    int &get(int i) {
      if (i == 0)
        return first;
      return rest->get(i - 1);
    }

    /**
    * @brief Retrieve the i-th element (i.e., int) in the list iteratively
    * @param i index of element
    * @return int& the reference to the first element
    */
    int &iterativeGet(int i) {
      // TODO
    }

};

/**
* @brief Increase all elements in the list by a given value
* @param n the value to increase
* @return IntList* the new list
*/
IntList *incrList(const IntList *L, int n) {
  // TODO
}

/**
* @brief Increase all elements in the list by a given value
* @param n the value to increase
* @return IntList* the new list
* @post the original list is also changed
*/
IntList *dincrList(IntList *L, int n) {
  // TODO
}

