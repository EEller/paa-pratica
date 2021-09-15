#include <iostream>
#include <vector>
#include <list>

namespace common {

  //generate output
  void printVector(std::vector<int> a) {
    std::cout << "v = { ";
    for (int n : a) {
      std::cout << n << ", ";
    }
    std::cout << "}; \n";
  }

  void printList(std::list<int> l) {
    std::cout << "l = { ";
    for (const auto n : l) {
        std::cout << n << ", ";
    }
    std::cout << "};\n";
  }

  void printGraph(std::vector<std::vector<int> > G) {
    std::cout << "G = { ";
    for (const auto n : G) {
      std::cout << "{";
      for (const auto l : n) {
         std::cout << l << ",";
      }
      std::cout << "}; \n";
    }
    std::cout << " }; \n";
  }
}