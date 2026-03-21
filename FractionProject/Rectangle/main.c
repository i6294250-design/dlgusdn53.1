#include <stdio.h>
#include <stdlib.h>
#include "../Fraction/my_fraction.h"
#include "../Math/my_math.h"

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("Usage: %s width height\n", argv[0]);
        printf("Example: %s 3/7 4/9\n", argv[0]);
        return 1;
    }

    // 명령줄 인자로 받은 분수 파싱
    Fraction width = parseFraction(argv[1]);
    Fraction height = parseFraction(argv[2]);

    // 둘레 계산: 2*(width + height)
    Fraction sum = add(width, height);
    Fraction perimeter = multiply(sum, parseFraction("2/1"));

    // 넓이 계산: width * height
    Fraction area = multiply(width, height);

    // 출력
    printf("Perimeter: ");
    printFraction(perimeter);

    printf("Area: ");
    printFraction(area);

    return 0;
}
