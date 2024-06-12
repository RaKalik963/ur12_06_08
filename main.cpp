#include <iostream>
#include <ctime>
using namespace std;



int power(int num, int degree) {
    if (degree == 0) {
        return 1; 
    }
    else {
        return num * power(num, degree - 1); 
    }
}

int main() {
    int num, degree;
    cout << "enter num ";
    cin >> num;
    cout << "enter degree ";
    cin >> degree;

    cout << num << "^" << degree << " = " << power(num, degree) << endl;
    return 0;
}