#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

typedef struct Emergency{
    int index;
    int emergency;
    int order;
} Emergency;

bool cmp1(Emergency a, Emergency b){
    return a.emergency > b.emergency;
}

bool cmp2(Emergency a, Emergency b){
    return a.index < b.index;
}

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    vector<Emergency> data;
    
    const int size = emergency.size();
        
    for(int i=0; i<size; i++){
        Emergency tmp = {i+1, emergency[i], -1};
        data.emplace_back(tmp);
    }
    
    sort(data.begin(), data.end(), cmp1);
    
    for(int i=0; i<size; i++){
        data[i].order = i+1;
    }
    
    sort(data.begin(), data.end(), cmp2);
    
    for(int i=0; i<size; i++){
        answer.emplace_back(data[i].order);
    }

    return answer;
}