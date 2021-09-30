#include <iostream>
#include <vector>

namespace median {
  int lomutoPartition(std::vector<int> &a, int l) {
    int pivot = a[l];
    int s = l;

    for (size_t i = l + 1; i < a.size(); i++) {
      if (a[i] < pivot) {
        s += 1;
        std::swap(a[s], a[i]);
      }
    }
    std::swap(a[l], a[s]);

    return s;
  }

  //Quick Select
  void quickSelect (std::vector<int> v, int k) {
    int l = 0;
    std::vector <int> auxV = { };
    int s = lomutoPartition(v, l);

    if (s == k - 1) {
      std::cout << "Mediana é = " << v[s] <<  std::endl;

      return;
    }

    l = s+1;
    if (s > l + k - 1) {
      for (int i = l; i < v.size() -1; i++) {
        auxV.push_back(v[i]);
      }
      quickSelect(auxV, k);
    } else {
      for (int i = s+1; i < v.size(); i++) {
        auxV.push_back(v[i]);
      }
      quickSelect (auxV, k-1-s);
    }
  }
}