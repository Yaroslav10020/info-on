#include <iostream>
#include <string>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    for (int q = 0; q < a.size(); q++) {
        for (int w = 0; w < a.size(); w++) {
            if (a[w] > a[w + 1]) {
                swap(a[w], a[w + 1]);
            }
        }
    }
    for (int i = 0; i < b.size(); i++) {
        for (int j = 0; j < b.size(); j++) {
            if (b[j] > b[j + 1]) {
                swap(b[j], b[j + 1]);
            }
        }
    }
    if(a == b) {
         cout << "YES";
    }
    else {
        cout << "NO";
    }
    return 0;
}
