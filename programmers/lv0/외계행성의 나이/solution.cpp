#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    string tmp = "";
    while(age){
        tmp += (age % 10) + 'a';
        age /= 10;
    }
    answer = {tmp.rbegin(), tmp.rend()};
    return answer;
}