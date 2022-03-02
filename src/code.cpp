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
    if (left == nullptr or right == nullptr) {
      return;
    } else {
      int a = *left;
      int b = *right;
      *left = b;
      *right = a;
      return;
    }
  }

  // Task 5
  int arr_sum(int *arr, int length) {
    int s = 0;
    if (arr != nullptr and length > 0) {
      int count = 0;
      while (count < length) {
        s += *(arr + count);
        count += 1;
      }
      return s;
    } else {
      return 0;
    }
  }

  // Task 6
  int *find_max_elem(int *arr, int length) {
    int maxim = -100000000000;
    int *pnt = arr;
    if (arr != nullptr and length > 0) {
      for (int i = 0; i < length; i++) {
        if (maxim < *(arr + i)) {
          maxim = *(arr + i);
          pnt = arr + i;
        }
      }
      return pnt;
    } else {
      return 0;
    }
  }

  // Task 7
  int *allocate_arr(int length, int init_value) {
    if (length > 0) {
      int *pointer = new int[length];
      for (int i = 0; i < length; i++) {
        pointer[i] = init_value;
        }
//      delete[] pointer;
      return pointer;
    } else {
      return nullptr;
    }
  }

  // Task 8
  int *clone_arr(int *arr_in, int length) {
    if (length > 0 and arr_in != nullptr) {
      int *pointer = new int[length];
      for (int i = 0; i < length; i++){
        pointer[i] = *(arr_in + i);
      }
      return pointer;
    } else {
      return nullptr;
    }
  }

  // Task 9
  void print_kth_elements(int *arr, int length, int k, std::ostream &os) {
    if (arr == nullptr){
      os << "Invalid argument: arr\n";
    } else if(length <= 0){
      os << "Invalid argument: length\n";
    } else if(k <= 0){
      os << "Invalid argument: k\n";
    }else{
      for (int i = 0; i < length; i++){
        if (i % k == 0) {
          os << *(arr + i);
        }
      }
    }
  }

}  // namespace assignment
