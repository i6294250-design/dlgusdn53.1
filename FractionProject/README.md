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
│   ├─ my_fraction.h
│   ├─ my_fraction.c
│   └─ main.c
├─ Math/
│   ├─ my_math.h
│   └─ my_math.c
├─ Rectangle/
│   └─ main.c
└─ README.md
```

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
