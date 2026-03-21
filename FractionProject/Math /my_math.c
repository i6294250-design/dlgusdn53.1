#include "my_math.h"

// 최대공약수 (유클리드 호제법)
int gcd(int a, int b) {
    // 음수 처리
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// 최소공배수
int lcm(int a, int b) {
    if (a == 0 || b == 0) return 0; // 0과의 곱은 0
    int result = (a / gcd(a, b)) * b;
    return (result < 0) ? -result : result; // 음수 처리
}
