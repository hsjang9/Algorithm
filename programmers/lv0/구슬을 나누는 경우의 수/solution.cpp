#include <string>
#include <vector>

using namespace std;

int comb(int n, int r){
    if(r == 0) return 1;
    if(n == 1) return 1;
    if(r >= n) return 1;
    return comb(n-1, r) + comb(n-1, r-1);
}

int solution(int balls, int share) {
    return comb(balls, share);
}