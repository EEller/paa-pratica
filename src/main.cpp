#include <iostream>
#include <vector>
#include <list>
#include "functions/common.h"
#include "functions/search.h"
#include "functions/sort.h"
using namespace common;
using namespace search;
using namespace sort;

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

    return 0;
}