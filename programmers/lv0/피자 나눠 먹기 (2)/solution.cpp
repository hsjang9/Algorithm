#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int a = 6;
    int b = n;
    while(b % a){
        int tmp = b % a;
        b = a;
        a = tmp;
    }
    
    return n / a;
}