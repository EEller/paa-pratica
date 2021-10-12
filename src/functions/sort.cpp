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

  std::vector<int> mergeSort(std::vector<int> v) {
    std::cout << "Split ---> ";
    printVector(v);

    if (v.size() > 1) {
      int mid = v.size()/ 2;

      //a call stack trabalha primeiro os elementos da esquerda e posteriormente os da direita.
      std::vector<int> esq(v.begin(), v.begin()+mid);
      std::vector<int> dir(v.begin()+mid, v.begin()+v.size());

      esq = mergeSort(esq);
      dir = mergeSort(dir);

      unsigned i = 0;
      unsigned j = 0;
      unsigned k = 0;
      //para não fazer um for encadeado, usou-se o while.
      while (i < esq.size() && j < dir.size()) {
        //após o caso base, o recursivo faz uma comparação do maior e menor
        if (esq[i] < dir[j]) {
          v[k]=esq[i];
          i++;
        } else {
          v[k] = dir[j];
          j++;
        }
        k++;
      }

      while (i<esq.size()) {
        v[k] = esq[i];
        i++;
        k++;
      }

      while (j<dir.size()) {
        v[k]=dir[j];
        j++;
        k++;
      }
    }

    std::cout << "Merge ---> ";
    printVector(v);

    return v;
  }

  int partition (std::vector<int> &v, int f, int l) {
    int pivot = v[f];
    int right = l;
    int left = f+1;
    bool done = false;

    while (!done) {
      while (left<=right && v[left]<=pivot) {
        left++;
      }

      while (right>=left && v[right]>=pivot) {
        right--;
      }

      if(right<left) {
        done = true;
      } else {
        std::swap(v[right], v[left]);
      }
    }

    std::swap(v[right], v[f]);

    return right;
  }

  void quickSort(std::vector<int> &v, int f, int l) {
    int splitPoint;

    if (f < l) {
      splitPoint = partition(v, f, l);

      quickSort(v, f, splitPoint);
      quickSort(v, splitPoint+1, l);
    }
  }
}