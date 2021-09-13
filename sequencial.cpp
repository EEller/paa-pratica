#include <iostream>
#include <vector>
using namespace std;

//Implements sequential search with a search key as a sentinel
//Input: An array A of n elements and a search key K
//Output: The index of the first element in A[0..n − 1] whose value is
// equal to K or −1 if no such element is found
int main() {
    std::vector<int> v = { 89, 45, 68, 90, 29, 34, 17 };
    int k;
    int i = 0;
    int position = -1;

    cout << "Digite o número a ser buscado:  ";
    cin >> k;

    while (i < v.size() ) {
        if (v[i] == k) {
            position = i;
            break;
        }
        i++;
    }

    if (position != -1) {
        cout << "Elemento encontrado na posição " << position << endl;
    } else {
        cout << "Elemento não encontrado." << endl;
    }

    return 0;
}