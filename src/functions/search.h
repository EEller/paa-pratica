#include <iostream>
#include <vector>
#include <list>

namespace search {
  void sequential(std::vector<int> a);
  int BruteForceStringMatch(std::string text, std::string pattern);
  std::list<int> dfs(int, std::vector< std::vector<int> >);
  int bynarySearch(int, std::vector<int>);
}