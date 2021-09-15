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

  //Sorts a given array by insertion sort
  //Input: an array A[0..n-1] of n orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
  void insertionSort(std::vector<int> v) {
    int x, y;
    for (int i = 1; i < v.size(); i++) {
      x = v[i];
      y = i - 1;
      while((y>=0) && (v[y]>x)) {
        v[y+1] = v[y];
        y= y - 1;
        v[y+1] = x;
      }
    }
    printVector(v);
  }
}