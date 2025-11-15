#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, vector<string>> graph;
    int n;
    string a, b;

    cout << "How many connections? ";
    cin >> n;

    cout << "Enter connections (A B means A -> B):\n";
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
    }

    string start;
    cout << "Enter starting node: ";
    cin >> start;

    queue<string> q;
    set<string> visited;

    q.push(start);
    visited.insert(start);

    cout << "\nReachable nodes:\n";

    while (!q.empty()) {
        string node = q.front();
        q.pop();
        cout << node << " ";

        for (string next : graph[node]) {
            if (!visited.count(next)) {
                visited.insert(next);
                q.push(next);
            }
        }
    }

    return 0;
}
