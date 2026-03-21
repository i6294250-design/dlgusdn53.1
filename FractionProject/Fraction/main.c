#include <stdio.h>
#include "my_fraction.h"

int main() {
    Fraction a = parseFraction("2/5");
    Fraction b = parseFraction("2/4");

    Fraction sum = add(a, b);
    printFraction(sum); // 출력: 9/10

    Fraction prod = multiply(a, b);
    printFraction(prod); // 출력: 1/5

    return 0;
}
