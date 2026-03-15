#include <stdio.h>

int main() {

    /* -------------------------
       과제 1) IEEE 754 출력
       ------------------------- */

    float num;
    printf("과제 1) 입력\n");
    scanf("%f", &num);

    union {
        float f;
        unsigned int i;
    } data;

    data.f = num;

    printf("\n과제 1) 출력\n");

    /* 부호 비트 */
    printf("%d/", (data.i >> 31) & 1);

    /* 지수 8비트 */
    for (int i = 30; i >= 23; i--) {
        printf("%d", (data.i >> i) & 1);
        if (i == 27) printf(" ");
    }
    printf("/");

    /* 가수 23비트 */
    for (int i = 22; i >= 0; i--) {
        printf("%d", (data.i >> i) & 1);

        if (i % 4 == 3 && i != 22) printf(" ");
    }

    printf("\n\n");

 /*   과제 2) 대소문자 변환 */

    char str[200];

    getchar(); // 버퍼 제거
    printf("과제 2) 입력\n");
    fgets(str, sizeof(str), stdin);

    printf("\n과제 2) 출력\n");

    for (int i = 0; str[i] != '\0'; i++) {

        /* 대문자 -> 소문자 */
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;

        /* 소문자 -> 대문자 */
        else if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;
    }

    printf("%s", str);

    return 0;
}