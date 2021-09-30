#include <iostream>
#include <vector>
#include <list>
#include <math.h>
#include "functions/common.h"
#include "functions/search.h"
#include "functions/sort.h"
#include "functions/problems.h"
#include "functions/median.h"
using namespace common;
using namespace search;
using namespace sort;
using namespace problems;
using namespace median;

int main() {
    std::vector<int> v = { 89, 45, 68, 90, 29, 34, 17 };
    std::cout << "Entrada\n";
    printVector(v);
    std::vector<std::vector<int> > G ({
        {1,2},
        {3,4},
        {5},
        {},
        {},
        {6,7},
        {8},
        {},
        {9},
        {}
    });

    std::cout << "Bubble\n";
    bubble(v);
    std::cout << "Selection\n";
    selection(v);
    std::cout << "Search sequential\n";
    sequential(v);
    std::cout << "Brute Force String Match\n";
    std::cout << BruteForceStringMatch("NOBODY_NOTICED_HIM", "NOT") << std::endl;
    std::cout << "DFS\n";
    std::list<int> pathdfs = dfs(0, G);
    printList(pathdfs);
    std::cout << "insertionSort\n";
    insertionSort(v);
    std::vector<int> b = { 3, 14, 27, 31, 39, 42, 55, 70, 74, 81, 85,93, 98 };
    int indice = bynarySearch(70, b);
    std::cout << indice << std::endl;
    std::vector<int> coins = {1, 1, 1, 0, 1, 1, 1, 1};
    std::cout << "Fake Coin" << std::endl;
    fakeCoin(coins);

    //Input interpolation Search
    //TODO:
    std::vector<int> vectorInterpolation = { 3, 14, 27, 31, 39, 42, 55, 70, 74, 81, 85, 93, 98 };
    int k;
    std::cout << "Digite o número a ser buscado: ";
    std::cin >> k;
    std::cout << vectorInterpolation.size() << std::endl;
    std::cout << "Interpolation Search" << std::endl;
    int positionIS = interpolationSearch(k, vectorInterpolation, 0, vectorInterpolation.size()-1);
    if (positionIS != -1 ) {
        std::cout << "Element found at index " << positionIS <<  std::endl;
    } else {
        std::cout << "Element not found " << std::endl;
    }

    //Input QuickSelect;
    //TODO
    std::vector<int> vectorQS = { 4, 1, 10, 8, 7, 12, 9, 2, 15 };
    double len = vectorQS.size();
    int kQS = ceil(len/2);
    quickSelect(vectorQS, kQS);

    return 0;
}