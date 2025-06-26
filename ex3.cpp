#include <iostream>
using namespace std;

int main() {
    // Fibonacci series
    int a = 0, b = 1, next, count = 0, limit = 10;
    while (count < limit) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
        count++;
    }
    cout << endl;
    return 0;
}

