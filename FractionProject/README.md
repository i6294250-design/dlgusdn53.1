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
