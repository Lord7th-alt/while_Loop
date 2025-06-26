#include <iostream>
using namespace std;

int main() {
    int i = 0;
    while (true) {
        if (i == 5)
            break;  // exit loop when i equals 5
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}

