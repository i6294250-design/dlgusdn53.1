#ifndef MY_FRACTION_H
#define MY_FRACTION_H

typedef struct {
    int numerator;
    int denominator;
} Fraction;

// 문자열 ↔ 분수
Fraction parseFraction(const char* str);
void printFraction(Fraction f);

// 사칙연산
Fraction add(Fraction a, Fraction b);
Fraction subtract(Fraction a, Fraction b);
Fraction multiply(Fraction a, Fraction b);
Fraction divide(Fraction a, Fraction b);

// 기약분수
Fraction simplify(Fraction f);

#endif
