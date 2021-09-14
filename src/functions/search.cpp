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

    std::cout << "Digite o número a ser buscado:  ";
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
}