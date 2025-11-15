#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, string> staff; 
    int choice;
    string id, dept;

    while (true) {
        cout << "\n--- STAFF DEPARTMENT SYSTEM ---\n";
        cout << "1. Add Staff\n";
        cout << "2. Change Staff Department\n";
        cout << "3. Display Staff by Department\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter Staff ID: ";
            cin >> id;
            cout << "Enter Department: ";
            cin >> dept;
            staff[id] = dept;
            cout << "Added.\n";
        }

        else if (choice == 2) {
            cout << "Enter Staff ID: ";
            cin >> id;

            if (staff.count(id)) {
                cout << "Enter new Department: ";
                cin >> dept;
                staff[id] = dept;
                cout << "Updated.\n";
            } else {
                cout << "Staff ID not found.\n";
            }
        }

        else if (choice == 3) {
            cout << "Enter Department to view: ";
            cin >> dept;

            bool found = false;
            for (auto &p : staff) {
                if (p.second == dept) {
                    cout << p.first << "\n";
                    found = true;
                }
            }
            if (!found) cout << "No staff in this department.\n";
        }

        else if (choice == 4) {
            break;
        }

        else {
            cout << "Invalid choice.\n";
        }
    }

    return 0;
}
