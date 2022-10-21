#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int prev = 1;
    
    if(n == 1) return 1;
    else if(n == 2) return 2;
    
    for(int i=2; i<=n; i++){
        prev *= i;
        if(prev > n) return i - 1;
    }
}