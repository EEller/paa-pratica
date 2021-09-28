#include <iostream>
#include <map>
#include <string>
#include <string_view>
#include <vector>
#include "common.h"
using namespace common;

namespace problems {
  const int K = 3;

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
    return l % K;
  }

  void fakeCoin(std::vector<int> c) {
    printVector(c);

    if (c.size() == 1 ) {
      std::cout << c[0] << std::endl;

      return;
    }

    int f = getFactor(c.size());
    int limit;
    if (f == 0 ) {
      limit = c.size() / K;
    } else {
      limit = ((c.size() - f) / K) + 1;
    }

    std::vector<int> bl = insertBalance(c, 0, limit);
    std::vector<int> br = insertBalance(c, limit, 2*limit);
    std::vector<int> bo = insertBalance(c, 2*limit, c.size());
    int wL = getWeight(bl);
    int wR = getWeight(br);

    std::cout << wL << std::endl;
    std::cout << wR << std::endl;

    if (wL < wR) {
      fakeCoin(bl);
    } else if (wL > wR) {
      fakeCoin(br);
    } else if (wL == wR) {
      fakeCoin(bo);
    }
  }

}