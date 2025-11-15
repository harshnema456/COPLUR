#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<string> history;
    string current = "Home";

    auto visit = [&](string page) {
        history.push(current);
        current = page;
        cout << "Current Page: " << current << endl;
    };

    auto back = [&]() {
        if (history.empty())
            cout << "No previous page" << endl;
        else {
            current = history.top();
            history.pop();
        }
        cout << "Current Page: " << current << endl;
    };

    visit("Page1");
    visit("Page2");
    back();
    visit("Page3");
    back();
    back();

    return 0;
}
