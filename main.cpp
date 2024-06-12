#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    cout << "enter num1 ";
    cin >> a;
    cout << "enter num2 ";
    cin >> b;

    cout << "GCD of " << a << " and " << b << " = " << gcd(a, b) << endl;

    return 0;
}
