#include "Ejercicio02.h"

int max(int a, int b, int c) {
    if (a < b && c < b) {
        return b;
    }
    else if(b < a && c < a)
        return a;
    else {
        return c;
    }
}

int Ejercicio02::rob(int houses[], int n)
{
    for (int i = 3; i < n; i++) {
        houses[i] = max(houses[i-1], houses[i] + houses[i-2], houses[i] + houses[i-3]);
    }
    return houses[n-1];
}
