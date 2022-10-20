#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int start1, int end1, int end2){
    const int size1 = end1 - start1 + 1;
    const int size2 = end2;
    vector<int> vec1(size1), vec2(size2);
    
    for(int i=0; i<size1; i++){
        vec1[i] = i + start1;
    }
    
    for(int i=0; i<size2; i++){
        vec2[i] = i + 1;
    }
    
    for(int i=size1-1; i>=0; i--){
        for(int j=size2-1; j>=0; j--){
            if(!(vec1[i] % vec2[j]) 
               && (vec1[i] != 1) 
               && (vec2[j] != 1)){
                vec1[i] /= vec2[j];
                vec2[j] = 1;
                break;
            }
        }
    }
    
    long int num = 1;
    long int den = 1;
    for(int i=0; i<size1; i++){
        num *= vec1[i];
    }
    
     for(int i=0; i<size2; i++){
        den *= vec2[i];
    }
    return num / den;
}

int solution(int balls, int share) {
    return solution(balls-share+1, balls, share);
}