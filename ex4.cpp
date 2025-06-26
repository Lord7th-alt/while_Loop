#include <iostream>
using namespace std;

int main() {
    // Checking for a prime number
    int num;
    cout << "Enter a number to check for prime: ";
    cin >> num;
    
    if (num <= 1) {
        cout << num << " is not prime." << endl;
        return 0;
    }
    
    int i = 2;
    bool isPrime = true;
    while (i * i <= num) {
        if (num % i == 0) {
            isPrime = false;
            break;
        }
        i++;
    }
    cout << num << (isPrime ? " is prime." : " is not prime.") << endl;
    return 0;
}

