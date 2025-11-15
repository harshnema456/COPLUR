#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<string> history;
    history.push(""); 

    int choice;
    string input;

    while (true) {
        cout << "\n--- TEXT EDITOR HISTORY ---\n";
        cout << "1. Set text\n";
        cout << "2. Append text\n";
        cout << "3. Undo\n";
        cout << "4. Show current text\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        if (!(cin >> choice)) break;
        cin.ignore();

        if (choice == 1) {
            cout << "Enter full text: ";
            getline(cin, input);
            history.push(input);
            cout << "Saved.\n";
        }
        else if (choice == 2) {
            cout << "Enter text to append: ";
            getline(cin, input);
            string cur = history.top();
            cur += input;
            history.push(cur);
            cout << "Appended and saved.\n";
        }
        else if (choice == 3) {
            if (history.size() > 1) {
                history.pop();
                cout << "Undo done.\n";
            } else {
                cout << "Nothing to undo.\n";
            }
        }
        else if (choice == 4) {
            cout << "Current text:\n" << history.top() << "\n";
        }
        else if (choice == 5) {
            break;
        }
        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
