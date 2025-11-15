#include <bits/stdc++.h>
using namespace std;

int main() {
    map<int,string> dict1, dict2, merged;

    dict1[1] = "Aman";
    dict1[2] = "Riya";

    dict2[3] = "Karan";
    dict2[4] = "Sita";

    for (auto &p : dict1)
        merged[p.first] = p.second;

    for (auto &p : dict2)
        merged[p.first] = p.second;

    cout << "Merged Dictionary:\n";
    for (auto &p : merged)
        cout << p.first << " -> " << p.second << endl;

    return 0;
}
