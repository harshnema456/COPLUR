#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> salaries = {25000, 32000, 45000, 28000, 50000, 30000};

    salaries.remove_if([](int s){ return s < 30000; });

    salaries.sort(greater<int>());

    for(int s : salaries) cout << s << " ";

    return 0;
}
