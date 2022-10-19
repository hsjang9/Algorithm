#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    while(n){
        if(!(n&1)) answer += n;
        n--;
    }
    
    return answer;
}