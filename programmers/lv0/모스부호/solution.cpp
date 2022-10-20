#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    map<string, string> m = {
        {".-"  , "a"}, {"-...", "b"}, {"-.-.", "c"}, {"-.." , "d"}, {"."   , "e"}, {"..-.", "f"},
        {"--." , "g"}, {"....", "h"}, {".."  , "i"}, {".---", "j"}, {"-.-" , "k"}, {".-..", "l"},
        {"--"  , "m"}, {"-."  , "n"}, {"---" , "o"}, {".--.", "p"}, {"--.-", "q"}, {".-." , "r"},
        {"..." , "s"}, {"-"   , "t"}, {"..-" , "u"}, {"...-", "v"}, {".--" , "w"}, {"-..-", "x"},
        {"-.--", "y"}, {"--..", "z"}
    };
    
    stringstream ss;
    ss.str(letter);
    while(ss)
    {
        string str;
        ss >> str;
        answer += m[str];
    }
    
    return answer;
}