#include <stdlib.h>
#include <iostream>
#include <String>
#include <set>

using namespace std;
bool word_break(string A, set<string> B, int n) {

    cout << "-- word-break-1 --" << endl;

    set<string> segmented_words;
    for(string s : B)
    {
        if(A.empty())
            return 1;
        if(!A.find(s))
        {
            segmented_words.insert(s);
            A.erase(0, s.length());
        }
    }
    for(string s : segmented_words)
        cout << s << " ";
    cout << endl;
    return 0;
}

int main() {
    int n = 12;
    set<string> B = { "i", "like", "sam", "sung", "samsung", "mobile", "ice","cream", "icecream", "man", "go", "mango" };
    string A = "ilike";
    word_break(A, B, n) ? cout << true : cout << false;


    system("PAUSE");
    return 0;
}