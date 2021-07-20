#include <stdlib.h>
#include <iostream>
#include <String>
#include <set>

using namespace std;
bool word_break(string A, set<string> B, int n) {

    cout << "-- word-break-1 --" << endl;
    int index = -1;
    set<string> segmented_words;
    for(string s : B)
    {
        if(A.empty())
            break;
        if( (index = A.find(s)) != -1)
        {
            segmented_words.insert(s);
            A.erase(index, s.length());
        }
    }
    for(string s : segmented_words)
        cout << s << " ";
    cout << endl;
    if(A.empty())
        return 1;
    return 0;
}

int main() {
    int n = 12;
    set<string> B = {"i", "like", "sam", "sung", "samsung", "mobile", "ice","cream", "icecream", "man", "go", "mango" };
    string A = "ilike";
    string A2 = "ilikesamsung";
    word_break(A, B, n) ? cout << true << endl : cout << false << endl;
    word_break(A2, B, n) ? cout << true << endl : cout << false << endl;

    system("PAUSE");
    return 0;
}