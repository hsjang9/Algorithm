#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    const int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
    const int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
    
    const int size = board.size();
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(board[i][j] == 1){
                for(int k=0; k<8; k++){
                    int ny = i + dy[k];
                    int nx = j + dx[k];
                    if(nx<0 || nx>=size || ny<0 || ny>=size) continue;
                    if(!board[ny][nx])
                        board[ny][nx] = 2;
                }
            }
        }
    }
    
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            if(!board[i][j])
                answer++;
        }
    }
    
    return answer;
}