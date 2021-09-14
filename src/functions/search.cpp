#include <iostream>
#include <vector>

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
}