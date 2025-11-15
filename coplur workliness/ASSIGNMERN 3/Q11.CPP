#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> patients;
    int choice, id;

    while (true) {
        cout << "\n--- CLINIC QUEUE SYSTEM ---\n";
        cout << "1. New patient arrives\n";
        cout << "2. Doctor treats next patient\n";
        cout << "3. Show waiting patients\n";
        cout << "4. Exit\n";
        cout << "Choose: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter patient ID: ";
            cin >> id;
            patients.push(id);
            cout << "Patient added to waiting list.\n";
        }

        else if (choice == 2) {
            if (patients.empty()) {
                cout << "No patients waiting.\n";
            } else {
                cout << "Doctor is treating patient: " << patients.front() << "\n";
                patients.pop();
            }
        }

        else if (choice == 3) {
            if (patients.empty()) {
                cout << "No patients in queue.\n";
            } else {
                cout << "Patients waiting: ";
                queue<int> temp = patients;
                while (!temp.empty()) {
                    cout << temp.front() << " ";
                    temp.pop();
                }
                cout << "\n";
            }
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
