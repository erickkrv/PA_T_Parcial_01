#include "Ejercicio02.h"
#include <vector>

int max(int a, int b) {
    if (a < b) {
        return b;
    }
    else if(b < a)
        return a;
}

int Ejercicio02::rob(int houses[], int n)
{
    if (n == 0) return 0;
    if (n == 1) return houses[0];
    if (n == 2) return max(houses[0], houses[1]);

    std::vector<int> housesN(n);
    housesN[0] = houses[0];
    housesN[1] = max(houses[0], houses[1]);

    for (int i = 2; i < n; i++) {
        housesN[i] = max(housesN[i - 1], houses[i] + housesN[i - 2]);
    }

    return  housesN[n - 1];
}
