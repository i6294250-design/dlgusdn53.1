#include <stdio.h>
#include <stdlib.h>
#include "my_fraction.h"

// 최대공약수(GCD)
static int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return (a < 0) ? -a : a;  // 음수 처리
}

// 기약분수 만들기
Fraction simplify(Fraction f) {
    if (f.denominator == 0) {
        printf("Error: denominator is 0\n");
        exit(1);
    }
    int g = gcd(f.numerator, f.denominator);
    f.numerator /= g;
    f.denominator /= g;

    // 분모 음수 처리
    if (f.denominator < 0) {
        f.numerator = -f.numerator;
        f.denominator = -f.denominator;
    }
    return f;
}

// 문자열 "A/B" → Fraction
Fraction parseFraction(const char* str) {
    Fraction f;
    if (sscanf(str, "%d/%d", &f.numerator, &f.denominator) != 2) {
        printf("Invalid fraction format: %s\n", str);
        exit(1);
    }
    return simplify(f);
}

// Fraction → 문자열 출력
void printFraction(Fraction f) {
    f = simplify(f);
    if (f.denominator == 1)
        printf("%d\n", f.numerator);
    else
        printf("%d/%d\n", f.numerator, f.denominator);
}

// 사칙연산
Fraction add(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

Fraction subtract(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.denominator - b.numerator * a.denominator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

Fraction multiply(Fraction a, Fraction b) {
    Fraction result;
    result.numerator = a.numerator * b.numerator;
    result.denominator = a.denominator * b.denominator;
    return simplify(result);
}

Fraction divide(Fraction a, Fraction b) {
    if (b.numerator == 0) {
        printf("Error: division by zero\n");
        exit(1);
    }
    Fraction result;
    result.numerator = a.numerator * b.denominator;
    result.denominator = a.denominator * b.numerator;
    return simplify(result);
}
