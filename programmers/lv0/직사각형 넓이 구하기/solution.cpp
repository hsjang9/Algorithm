#include <string>
#include <vector>

using namespace std;

int abs(int n) {if(n < 0) n -= n; return n;}

int solution(vector<vector<int>> dots) {
    int h, w;
    for(int i=1; i<4; i++){
        if(dots[0][0] - dots[i][0])
            w = abs(dots[0][0] - dots[i][0]);
        if(dots[0][1] - dots[i][1])
            h = abs(dots[0][1] - dots[i][1]);
    }
    
    return w * h;
}