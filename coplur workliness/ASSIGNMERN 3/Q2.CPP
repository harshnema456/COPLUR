#include <bits/stdc++.h>
using namespace std;

map<int, string> students;

void addStudent(int roll, string name) {
    students[roll] = name;
}

void updateStudent(int roll, string newName) {
    if (students.count(roll))
        students[roll] = newName;
    else
        cout << "Roll number not found\n";
}

void deleteStudent(int roll) {
    if (students.count(roll))
        students.erase(roll);
    else
        cout << "Roll number not found\n";
}

void searchStudent(int roll) {
    if (students.count(roll))
        cout << "Found: " << students[roll] << "\n";
    else
        cout << "Student not found\n";
}

int main() {
    addStudent(1, "Harsh");
    addStudent(2, "Aman");
    addStudent(3, "Riya");

    updateStudent(2, "Aman Sharma");

    deleteStudent(3);

    searchStudent(1);
    searchStudent(3);

    cout << "\nAll Students:\n";
    for (auto &s : students)
        cout << s.first << " -> " << s.second << "\n";

    return 0;
}
