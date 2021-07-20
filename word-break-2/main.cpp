#include <stdlib.h>
#include <iostream>
#include <String>
#include <set>
#include <vector>
using namespace std;

bool word_break(string A, set<string> B, int n) {
    vector<set<string>> segmented_words;
    int index = -1;
    set<string> B_cpy = B;
    string A_cpy = A;
    for(string str : B)
    {
        
        B_cpy.erase(str);
        for(string s : B_cpy)
        {
            if(A_cpy.empty())
            {
                //segmented_words.push_back
            }
        }
        B_cpy.erase(str);
        B_cpy = B;
        A_cpy = A;
    }
    return 0;
}


int main() {

    string A1 = "catsanddog";
    string A2 = "catsandog";
    int n = 5;
    set<string> B = { "cats", "cat", "and", "sand", "dog" };
    word_break(A1, B, n) ? cout << true << endl : cout << false << endl;

    return 0;
}