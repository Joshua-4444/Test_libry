#include "libry.h"

int power(int base, int exp) {
    int result = 1;
    for (int i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}

int fact(int n) {
    if (n == 0) return 1;
    return n * fact(n - 1);
}
