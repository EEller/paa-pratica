#include <iostream>
#include <vector>
using namespace std;

//Sorts a given array by bubble sort
//Input: An array A[0..n-1] of orderable elements
//Output: Array A[0..n-1] sorted in nondecreasing order
int main() {
  std::vector<int> v = { 89, 45, 68, 90, 29, 34, 17 };
  int min;
  for (int i = 0; i < v.size(); i++) {
    min = i;
    for (int j = i + 1; j < v.size(); j++) {
      //std::cout << v[j] << ", ";
      //std::cout << v[min] << " \n";
      if (v[j] < v[min]) {
        min = j;
        //std::cout << v[i] << ", ";
        //std::cout << v[min] << " \n";
      }
    }
    std::swap(v[i],v[min]);
    std::cout << "v = { ";
    for (int n : v) {
      std::cout << n << ", ";
    }
    std::cout << "}; \n";
  }
}