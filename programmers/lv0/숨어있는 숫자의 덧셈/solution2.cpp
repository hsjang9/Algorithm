#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    for(auto &s : my_string){
        if(!isdigit(s))
            s = ' ';
    }

    stringstream ss;
    ss.str(my_string);

    int tmp = 0;
    while(ss >> tmp){
        answer += tmp;
    }

    return answer;
}