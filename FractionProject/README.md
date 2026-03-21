🔢 Fraction 라이브러리분수를 다루기 위한 구조체와 관련 기능을 제공합니다.구조체(Fraction): numerator(분자), denominator(분모)사칙연산: 덧셈, 뺄셈, 곱셈, 나눗셈 지원기약분수(Simplify): 연산 결과 또는 입력된 분수를 기약분수로 자동 변환문자열 변환:"A/B" 형태의 문자열을 Fraction 객체로 파싱 (parseFraction)Fraction 객체를 문자열로 출력 (printFraction)예외 처리: 분모가 0인 경우 오류 메시지 출력 및 프로그램 종료🧮 Math 라이브러리기약분수 변환의 핵심이 되는 유틸리티 기능을 제공합니다.GCD: 두 정수의 최대공약수 계산LCM: 두 정수의 최소공배수 계산처리 범위: 음수 입력 및 0에 대한 예외 처리 지원📏 Rectangle 프로그램명령줄 인자(CLI)를 통해 분수 형태의 가로, 세로 길이를 입력받아 결과를 출력합니다.둘레(Perimeter): $2 \times (\text{width} + \text{height})$넓이(Area): $\text{width} \times \text{height}$🚀 사용 예시1. 분수 연산 코드 예시CFraction a = parseFraction("2/5");
Fraction b = parseFraction("2/4");
Fraction sum = add(a, b);

printFraction(sum); 
// 출력: 9/10
2. GCD/LCM 연산 예시Cint x = 18, y = 24;
printf("GCD: %d, LCM: %d\n", gcd(x, y), lcm(x, y));
// 출력: GCD: 6, LCM: 72
💻 실행 방법 (Rectangle 프로그램)컴파일터미널에서 아래 명령어를 입력하여 컴파일합니다.Bashgcc Rectangle/main.c Fraction/my_fraction.c Math/my_math.c -I./Fraction -I./Math -o rectangle_program
프로그램 실행가로와 세로 길이를 분수 형태로 입력합니다.Bash./rectangle_program 3/7 4/9
출력 결과PlaintextPerimeter: 110/63
Area: 4/21
📄 파일 상세 설명구분파일명설명Fractionmy_fraction.h / .c분수 ADT 정의 및 연산 로직 구현main.c분수 라이브러리 단위 테스트Mathmy_math.h / .c최대공약수(GCD) 및 최소공배수(LCM) 알고리즘AppRectangle/main.c분수를 이용한 직사각형 계산 메인 프로그램DocREADME.md프로젝트 개요 및 매뉴얼
