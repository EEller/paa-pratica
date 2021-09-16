#include <iostream>
#include <vector>
#include <list>
#include "common.h"
using namespace common;

namespace search {

  //search totally_ordered
  //templates e concepts
  //Sorts a given array by bubble sort
  //Input: An array A[0..n-1] of orderable elements
  //Output: Array A[0..n-1] sorted in nondecreasing order
  void sequential(std::vector<int> a) {
    int k;
    int i = 0;
    int position = -1;

    std::cout << "Digite o número a ser buscado: ";
    std::cin >> k;

    while (i < a.size() ) {
      if (a[i] == k) {
          position = i;
          break;
      }
      i++;
    }

    if (position != -1) {
      std::cout << "Elemento encontrado na posição " << position << std::endl;
    } else {
      std::cout << "Elemento não encontrado." << std::endl;
    }
  }

  //Implements brute-force string matching
  //Input: text and pattern
  //Output: index of first character found or -1 if the search is unsuccessful.
  int BruteForceStringMatch(std::string text, std::string pattern) {
    for (int i = 0; i < (text.length()-pattern.length()); i++) {
      int j = 0;
      while (j < pattern.length() && pattern[j] == text[i+j]) {
        j++;
        if (j == pattern.length()) {
          return i;
        }
      }
    }

    return -1;
  }

  std::vector<int> getNeighbors(int node, std::vector< std::vector<int> > G) {
    return G[node];
  }

  std::list<int> dfs(int s, std::vector< std::vector<int> > G) {
    std::list<int> start({ s });
    std::list< std::list<int> > frontier({ start });

    while (!frontier.empty()) {
      std::list<int> path(frontier.back());
      frontier.pop_back();

      if (path.back() == 9) {
        return path;
      } else {
        for (auto e : getNeighbors(path.back(), G)) {
          std::list<int> new_path(path);
          new_path.push_back(e);
          frontier.push_back(new_path);
        }
      }
    }

    return start;
  }

  //Implements nonrecursive binary search
  //Input: An array A[0..n-1] sorted in ascending order and a search key K
  //Output: An index of the array's element that is equal to k or -1 if
  //        ther is no such element
  int bynarySearch(int k, std::vector<int> v) {
    int l = 0;
    int r = v.size() - 1;
    int m;
    while(l<=r) {
      m = (l + r)/2;
      std::cout << l << " - " << m << " - " << r << std::endl;
      if (k == v[m]) {
        return m;
      } else if (k < v[m]) {
        r = m - 1;
      } else {
        l = m + 1;
      }
    }

    return -1;
  }

  //TODO:
  //Implements recursive binary search algorithm.
}