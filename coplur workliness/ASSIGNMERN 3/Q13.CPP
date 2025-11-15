#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> seen;
    unordered_set<int> duplicates;

    int n, value;
    cout << "How many numbers? ";
    cin >> n;

    cout << "Enter numbers:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;

        if (seen.count(value))
            duplicates.insert(value);
        else
            seen.insert(value);
    }

    cout << "\nDuplicate numbers:\n";
    if (duplicates.empty())
        cout << "No duplicates found.\n";
    else
        for (int x : duplicates)
            cout << x << " ";

    return 0;
}
