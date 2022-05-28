#include <iostream>
#include "Vector.h"
#include <math.h>
#include <string>

int main() {
    int n;
    std::cout << "n = ";
    std::cin >> n;
    vector<int> V(n), U(n), T(n), W(n);
    std::cin >> V;
    std::cin >> U;
    T = V + U;
    std::cout << "summa of vectors:" << std::endl; std::cout << T;
    W = V * U;
    std::cout << "scalar multiplication of vectors:" << std::endl; std::cout << W;
    return 0;
}
