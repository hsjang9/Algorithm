#include <string>
#include <vector>

using namespace std;

int getGCD(int a, int b){
    while(a % b){
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return b; 
}

vector<int> solution(int denum1, int num1, int denum2, int num2) {
    vector<int> answer(2);
    int gcd = getGCD(num1, num2);
    int lcm = num1 * num2 / gcd;
    int numerator = lcm / num1 * denum1 + lcm / num2 * denum2;
    int nGcd = getGCD(lcm, numerator);
    answer[0] = numerator / nGcd;
    answer[1] = lcm / nGcd;
    
    
    return answer;
}