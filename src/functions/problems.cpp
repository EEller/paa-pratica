#include <iostream>
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include "common.h"
using namespace common;

namespace problems {

  std::vector<int> insertBalance(std::vector<int> v, int init, int end) {
    std::vector<int> a;

    for (int i = init; i < end; i++) {
      a.push_back(v[i]);
    }

    return a;
  }

  int getWeight(std::vector<int> v) {
    int sum = 0;
    for (int n : v) {
      sum += n;
    }

    return sum;
  }

  int getFactor(int l) {
    return l / 2;
  }

  void fakeCoin(std::vector<int> c) {
    printVector(c);

    if (c.size() == 1 ) {
      std::cout << c[0] << std::endl;

      return;
    }

    int limit = getFactor(c.size());
    std::vector<int> bl = insertBalance(c, 0, limit);
    std::vector<int> br = insertBalance(c, limit, c.size());
    int wL = getWeight(bl);
    int wR = getWeight(br);

    std::cout << wL << std::endl;
    std::cout << wR << std::endl;

    if (wL < wR) {
      fakeCoin(bl);
    } else if (wL > wR) {
      fakeCoin(br);
    } else if (wL == wR) {
      std::cout << "Não existe uma moeda falsa" << std::endl;

      return;
    }
  }

}