#include <iostream>
#include <vector>
using namespace std;

//Sorts a given array by bubble sort
//Input: An array A[0..n-1] of orderable elements
//Output: Array A[0..n-1] sorted in nondecreasing order
int main() {
  std::vector<int> v = { 89, 45, 68, 90, 29, 34, 17 };

  for (int i = 0; i < v.size()-1; i++) {
    for (int j = 0; j < v.size() -1 -i; j++) {
      if (v[j + 1] < v[j]) {
        std::cout << v[j] << ", ";
        std::cout << v[j + 1] << " \n";
        std::swap(v[j],v[j + 1]);
      }
    }
  }

  std::cout << "v = { ";
  for (int n : v) {
    std::cout << n << ", ";
  }
  std::cout << "}; \n";
}