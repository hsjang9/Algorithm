#include <string>
#include <vector>

using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double total = 0;
    const int size = numbers.size();
    for(int i=0; i<size; i++)
        total += numbers[i];
    
    return total/size;
}