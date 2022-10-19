#include <string>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second > b.second;
}

int solution(vector<int> array) {
    map<int, int> m;
    const int size = array.size();
    
    for(int i=0; i<size; i++){
        m[array[i]]++;
    }
    vector<pair<int, int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), cmp);
    
    if(vec[0].second == vec[1].second) return -1;
    else return vec[0].first;
}