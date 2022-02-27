#include "assignment/code.hpp"

#include <iostream>   // cout, printf
#include <algorithm>  // fill, copy

namespace assignment {

  // Task 1
  int squared_diff(int left, int right) {

    int name = (left - right) * (left - right);

    return name;
  }

  // Task 2
  bool check_bit(int mask, int bit_pos) {
    bool flag = true;
    if (mask < 0 or bit_pos < 0) {
      flag = false;
    } else {
      flag = (mask >> bit_pos) % 2 == 1;
    }
    return flag;
  }

  // Task 3
  int max3(int left, int middle, int right) {

    int maxim = left;
    if (maxim < middle) {
      maxim = middle;
    }
    if (maxim < right) {
      maxim = right;
    }
    return maxim;
  }

  // Task 4
  void swap_args(int *left, int *right) {

    // Write your code here ...
  }

  // Task 5
  int arr_sum(int *arr, int length) {

    // Write your code here ...

    return 0;
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {

    // Write your code here ...

    return nullptr;
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {

    // Write your code here ...

    return nullptr;
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {

    // Write your code here ...
  }

}  // namespace assignment
