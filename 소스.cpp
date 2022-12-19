#include <string>
#include <vector>

using namespace std;

// 피보나치 수를 구하는 문제로 문제자체는 간단하지만
// 자료형의 범위를 오버하게 되었을 때 대처하는 방식이
// 주된 문제이다.
// 간단하게 모든 연산을 하기 전에 1234567에 대한 나머지화를 시켜주면 된다.
// a + b = c가 있다면 당연하게도 a%d + b%d = c%d이기 때문에 가능한
// 방법이다.
//

int solution(int n) {
    int answer = 0;
    int firstNum = 0;
    int secondNum = 1;
    int thirdNum = 0;
    for (int i = 2; i <= n; i++)
    {
        firstNum = firstNum % 1234567;
        secondNum = secondNum % 1234567;
        thirdNum = thirdNum % 1234567;
        thirdNum = firstNum + secondNum;
        firstNum = secondNum;
        secondNum = thirdNum;
    }
    answer = thirdNum % 1234567;
    return answer;
}