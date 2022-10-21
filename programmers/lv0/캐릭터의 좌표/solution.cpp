#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2);
    const int size = keyinput.size();
    const int bw = board[0] / 2;
    const int bh = board[1] / 2;
    
    for(int i=0; i<size; i++){
        int nx = answer[0], ny = answer[1];
        if(keyinput[i] == "left")
            nx--;
        else if(keyinput[i] == "right")
            nx++;
        else if(keyinput[i] == "up")
            ny++;
        else if(keyinput[i] == "down")
            ny--;
        if(nx<-bw || ny<-bh || nx>bw || ny>bh) continue;
        
        answer[0] = nx;
        answer[1] = ny;
    }
    
    return answer;
}