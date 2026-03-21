# FractionProject

## 1. 프로젝트 개요
이 프로젝트는 세 가지 주요 기능을 포함합니다:

1. **Fraction 라이브러리**: 분수 ADT 구현 (분수 사칙연산, 기약분수 변환, 문자열 ↔ 분수 변환)  
2. **Math 라이브러리**: 두 정수의 최대공약수(GCD)와 최소공배수(LCM) 계산  
3. **Rectangle 프로그램**: 명령줄 인자를 이용해 직사각형의 가로, 세로를 입력받아 둘레와 넓이를 계산

---

## 2. 폴더 구조

```text
FractionProject/
│
├─ Fraction/
│   ├─ my_fraction.h      <-- 분수 ADT 헤더
│   ├─ my_fraction.c      <-- 분수 ADT 구현
│   └─ main.c             <-- 분수 테스트용
│
├─ Math/
│   ├─ my_math.h          <-- GCD/LCM 헤더
│   └─ my_math.c          <-- GCD/LCM 구현
│
├─ Rectangle/
│   └─ main.c             <-- 직사각형 둘레/넓이 계산
│
└─ README.md              <-- 프로젝트 설명
3. Fraction 라이브러리
3.1 기능
분수 구조체(Fraction)
int numerator (분자)
int denominator (분모)
사칙연산: add, subtract, multiply, divide
기약분수 변환: simplify
문자열 ↔ Fraction 변환:
"A/B" → Fraction (parseFraction)
Fraction → "A/B" 또는 정수 출력 (printFraction)
예외 처리:
분모 0 → 오류 메시지 및 종료
3.2 사용 예시
Fraction a = parseFraction("2/5");
Fraction b = parseFraction("2/4");
Fraction sum = add(a, b);
printFraction(sum); // 출력: 9/10
4. Math 라이브러리
4.1 기능
GCD 계산: gcd(a, b)
LCM 계산: lcm(a, b)
음수 입력 및 0 처리 지원
4.2 사용 예시
int x = 18;
int y = 24;
printf("GCD: %d, LCM: %d\n", gcd(x, y), lcm(x, y));
// 출력: GCD: 6, LCM: 72
5. Rectangle 프로그램
5.1 기능
명령줄 인자 입력으로 직사각형 가로, 세로를 분수 형태로 받음
둘레 = 2 × (가로 + 세로)
넓이 = 가로 × 세로
출력은 기약분수로 표시
5.2 사용 예시
컴파일
gcc Rectangle/main.c Fraction/my_fraction.c Math/my_math.c -o rectangle_program
실행
./rectangle_program.exe 3/7 4/9
출력
Perimeter: 110/63
Area: 4/21
6. 파일 설명
폴더/파일	설명
Fraction/my_fraction.h	분수 ADT 헤더
Fraction/my_fraction.c	분수 ADT 구현
Fraction/main.c	분수 테스트용 프로그램
Math/my_math.h	GCD/LCM 헤더
Math/my_math.c	GCD/LCM 구현
Rectangle/main.c	직사각형 계산 프로그램
README.md	프로젝트 설명
