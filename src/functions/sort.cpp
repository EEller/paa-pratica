#include <iostream>
#include <vector>
#include "common.h"
using namespace common;

namespace sort {
  //Sorts a given array by bubble sort
  //Input: An array A[0..n-1] of orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
  void bubble(std::vector<int> a){
    for (int i = 0; i < a.size()-1; i++) {
      for (int j = 0; j < a.size() -1 -i; j++) {
        if (a[j + 1] < a[j]) {
          std::swap(a[j],a[j + 1]);
        }
      }
    }

    printVector(a);
  }

  //Sorts a given array by selection sort
  //Input: An array A[0..n-1] of orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
  void selection(std::vector<int> a) {
    int min;
    for (int i = 0; i < a.size() -1; i++) {
      min = i;
      for (int j = i + 1; j < a.size(); j++) {
        if (a[j] < a[min]) {
          min = j;
        }
      }
      std::swap(a[i],a[min]);
    }

    printVector(a);
  }
}