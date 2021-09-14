#include <iostream>
#include <vector>
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

    std::cout << "Bubble\n";
    bubble(v);
    std::cout << "Selection\n";
    selection(v);
    std::cout << "Search sequential\n";
    sequential(v);
    std::cout << "Brute Force String Match\n";
    std::cout << BruteForceStringMatch("NOBODY_NOTICED_HIM", "NOT") << std::endl;

    return 0;
}