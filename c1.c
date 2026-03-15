#include <stdio.h>
#include <stdint.h>

int main() {

    /* -------------------------------
       과제 1) 1의 보수 / 2의 보수 판별
       --------------------------------

       원리:
       2의 보수 시스템에서는 다음이 성립한다.
           (~x + 1) == -x

       예를 들어 x = 5이면
           ~5 + 1 = -5

       하지만 1의 보수 시스템에서는
           ~x == -x

       따라서 (~x + 1) 과 (-x) 를 비교하면
       현재 시스템이 2의 보수인지 확인할 수 있다.
    */

    int x = 5;

    if ((~x + 1) == -x)
        printf("2의 보수입니다.\n");
    else
        printf("1의 보수입니다.\n");


    /* -------------------------------
       과제 2) Q8.8 Fixed Point 변환
       --------------------------------

       조건
       - 전체 16비트
       - 정수부 8비트
       - 소수부 8비트
       - two's complement

       방법
       1. 입력값 × 256 (2^8) → fixed point 정수 변환
       2. int16_t에 저장
       3. 비트를 하나씩 출력
    */

    float input;
    printf("입력값: ");
    scanf("%f", &input);

    int16_t fixed = (int16_t)(input * 256);

    for (int i = 15; i >= 0; i--) {

        if (fixed & (1 << i))
            printf("1");
        else
            printf("0");

        if (i == 8)
            printf(".");
    }

    printf("\n");

    return 0;
}