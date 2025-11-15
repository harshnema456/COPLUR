#include <bits/stdc++.h>
using namespace std;

int main() {

    list<int> myList;
    map<int,string> myDict;
    queue<string> myQueue;
    stack<string> myStack;
    unordered_set<string> mySet;

    int mainChoice;

    while (true) {
        cout << "\n--- MAIN MENU ---\n";
        cout << "1. List\n";
        cout << "2. Dictionary\n";
        cout << "3. Queue\n";
        cout << "4. Stack\n";
        cout << "5. HashSet\n";
        cout << "6. Exit\n";
        cout << "Choose: ";
        cin >> mainChoice;

        if (mainChoice == 1) {

            int ch, val;
            cout << "\n--- LIST MENU ---\n";
            cout << "1. Add\n2. Remove\n3. Display\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter value: "; cin >> val;
                myList.push_back(val);
            }
            else if (ch == 2) {
                cout << "Enter value to remove: "; cin >> val;
                myList.remove(val);
            }
            else if (ch == 3) {
                for (int x : myList) cout << x << " ";
                cout << endl;
            }
        }

        else if (mainChoice == 2) {

            int ch, roll;
            string name;

            cout << "\n--- DICTIONARY MENU ---\n";
            cout << "1. Add\n2. Update\n3. Delete\n4. Search\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter roll: "; cin >> roll;
                cout << "Enter name: "; cin >> name;
                myDict[roll] = name;
            }
            else if (ch == 2) {
                cout << "Enter roll: "; cin >> roll;
                cout << "Enter new name: "; cin >> name;
                myDict[roll] = name;
            }
            else if (ch == 3) {
                cout << "Enter roll to delete: "; cin >> roll;
                myDict.erase(roll);
            }
            else if (ch == 4) {
                cout << "Enter roll: "; cin >> roll;
                if (myDict.count(roll))
                    cout << myDict[roll] << endl;
                else
                    cout << "Not found\n";
            }
        }

        else if (mainChoice == 3) {

            int ch;
            string s;
            cout << "\n--- QUEUE MENU ---\n";
            cout << "1. Enqueue\n2. Dequeue\n3. Front\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter value: "; cin >> s;
                myQueue.push(s);
            }
            else if (ch == 2) {
                if (!myQueue.empty()) myQueue.pop();
            }
            else if (ch == 3) {
                if (!myQueue.empty()) cout << myQueue.front() << endl;
                else cout << "Empty\n";
            }
        }

        else if (mainChoice == 4) {

            int ch;
            string s;
            cout << "\n--- STACK MENU ---\n";
            cout << "1. Push\n2. Pop\n3. Top\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter value: "; cin >> s;
                myStack.push(s);
            }
            else if (ch == 2) {
                if (!myStack.empty()) myStack.pop();
            }
            else if (ch == 3) {
                if (!myStack.empty()) cout << myStack.top() << endl;
                else cout << "Empty\n";
            }
        }

        else if (mainChoice == 5) {

            int ch;
            string id;
            cout << "\n--- HASHSET MENU ---\n";
            cout << "1. Add\n2. Remove\n3. Check\nChoose: ";
            cin >> ch;

            if (ch == 1) {
                cout << "Enter ID: "; cin >> id;
                if (mySet.count(id))
                    cout << "Duplicate\n";
                else
                    mySet.insert(id);
            }
            else if (ch == 2) {
                cout << "Enter ID to remove: "; cin >> id;
                mySet.erase(id);
            }
            else if (ch == 3) {
                cout << "Enter ID: "; cin >> id;
                if (mySet.count(id)) cout << "Exists\n";
                else cout << "Not found\n";
            }
        }

        else if (mainChoice == 6) {
            break;
        }

        else {
            cout << "Invalid choice\n";
        }
    }

    return 0;
}
