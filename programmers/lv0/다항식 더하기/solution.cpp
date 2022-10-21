#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

string solution(string polynomial) {
    int coef[2] = {0};
    string answer, s;
    stringstream ss;
    
    ss.str(polynomial);
    
    while(ss >> s){
        if(s == "+") continue;
        
        if(s.back() == 'x'){
            s.pop_back();
            if(s.empty())
                coef[1] += 1;
            else
                coef[1] += stoi(s); 
        } else {
            coef[0] += stoi(s);
        }
    }
    
    
    if(coef[1] == 1){
        answer += "x";
    } else if(coef[1])
        answer += to_string(coef[1]) + "x";

    if(coef[1] && coef[0])
        answer += " + ";
    
    if(coef[0])
        answer += to_string(coef[0]);            
    
    return answer;
}