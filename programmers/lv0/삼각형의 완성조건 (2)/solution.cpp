#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {   
    if(sides[0] > sides[1])
        swap(sides[0], sides[1]);
    return 2 * sides[0] - 1;
}