#include <stdlib.h>
#include <iostream>
#include <String>
#include <set>

using namespace std;

bool word_break(string A, set<string> B, int n) {

    cout << "-- word-break-2 --" << endl;




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