#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    string buf;
    
    const int size = my_string.size();
    
    for(int i=0; i<size; i++){
        if(isdigit(my_string[i])){
            buf += my_string[i];
        }else if(isalpha(my_string[i])){
            if(!buf.empty()){
                answer += stoi(buf);
                buf.clear();
            }
        }
        
        if(i == size-1){
            if(!buf.empty())
                answer += stoi(buf);
        }
    }
    
    return answer;
}