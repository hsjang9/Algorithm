#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer;
    int idx = 0;
    const int size = numbers.size();
    
    for(int i=0; i<k; i++){
        answer = numbers[idx % size];
        idx += 2;
    }
    
    return answer;
}