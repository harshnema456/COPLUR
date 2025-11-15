#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<string> products;
    string id;

    while (true) {
        cout << "Enter Product ID (or type exit): ";
        cin >> id;

        if (id == "exit") break;

        if (products.count(id)) {
            cout << "Duplicate ID. This product already exists.\n";
        } else {
            products.insert(id);
            cout << "Product added.\n";
        }
    }

    cout << "\nAll Unique Product IDs:\n";
    for (auto &p : products)
        cout << p << endl;

    return 0;
}
