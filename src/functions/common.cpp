#include <iostream>
#include <vector>

namespace common {

  //generate output
  void printVector(std::vector<int> a) {
    std::cout << "v = { ";
    for (int n : a) {
      std::cout << n << ", ";
    }
    std::cout << "}; \n";
  }
}