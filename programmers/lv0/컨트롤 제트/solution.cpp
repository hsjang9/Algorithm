#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> stack;
    string str;
    stringstream ss;
    ss.str(s);
    
    while(ss >> str){
        if(str == "Z")
            stack.pop_back();
        else
            stack.emplace_back(str);
    }
    
    for(int i=0; i<stack.size(); i++){
        answer += stoi(stack[i]);
    }
    
    return answer;
}