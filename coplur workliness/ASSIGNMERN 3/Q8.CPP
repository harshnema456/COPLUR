#include <bits/stdc++.h>
using namespace std;

int main() {
    list<string> tasks;
    int choice;
    string task, newTask;

    while (true) {
        cout << "\n--- TO-DO LIST MENU ---\n";
        cout << "1. Add Task\n";
        cout << "2. Edit Task\n";
        cout << "3. Remove Task\n";
        cout << "4. Display All Tasks\n";
        cout << "5. Exit\n";
        cout << "Choose: ";
        cin >> choice;
        cin.ignore(); 

        if (choice == 1) {
            cout << "Enter task: ";
            getline(cin, task);
            tasks.push_back(task);
        }

        else if (choice == 2) {
            cout << "Enter task to edit: ";
            getline(cin, task);

            bool found = false;
            for (auto &t : tasks) {
                if (t == task) {
                    cout << "Enter new text: ";
                    getline(cin, newTask);
                    t = newTask;
                    found = true;
                    break;
                }
            }
            if (!found) cout << "Task not found.\n";
        }

        else if (choice == 3) {
            cout << "Enter task to remove: ";
            getline(cin, task);

            if (tasks.remove(task))
                cout << "Removed.\n";
            else
                cout << "Task not found.\n";
        }

        else if (choice == 4) {
            cout << "\nYour Tasks:\n";
            for (string t : tasks)
                cout << "- " << t << "\n";
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
