#include <stdio.h>
#include "my_math.h"

int main() {
    int x = 18;
    int y = 24;

    printf("GCD: %d, LCM: %d\n", gcd(x, y), lcm(x, y));

    return 0;
}
