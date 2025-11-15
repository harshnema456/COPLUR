#include <bits/stdc++.h>
using namespace std;

int main() {
    string para = "this is a test this test is simple simple test example";

    map<string, int> freq;
    string word;
    stringstream ss(para);

    while (ss >> word) {
        freq[word]++;
    }

    vector<pair<string, int>> list(freq.begin(), freq.end());
    
    sort(list.begin(), list.end(),
         [](auto &a, auto &b) { return a.second > b.second; });

    cout << "Top 3 most frequent words:"endl;
    for (int i = 0; i < 3 && i < list.size(); i++) {
        cout << list[i].first << " -> " << list[i].second << endl;
    }

    return 0;
}
