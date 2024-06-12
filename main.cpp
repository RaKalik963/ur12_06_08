#include <iostream>
#include <ctime>
using namespace std;

int one_dimensional_max(int one_arr[], int size) {
    int max_value = one_arr[0];
    for (int i = 1; i < size; ++i) {
        if (one_arr[i] > max_value) {
            max_value = one_arr[i];
        }
    }
    return max_value;
}

int two_dimensional_max(int arr[][100], int rows, int cols) {
    int max_value = arr[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (arr[i][j] > max_value) {
                max_value = arr[i][j];
            }
        }
    }
    return max_value;
}

int max_between_two_numbers(int x, int y) {
    if (x > y) {
        cout << x << " is bigger" << endl;
        return x;
    }
    else if (x == y) {
        cout << "your numbers are equal" << endl;
        return x; // або y, оскільки вони рівні
    }
    else {
        cout << y << " is bigger" << endl;
        return y;
    }
}

int max_between_three_numbers(int a, int b, int c) {
    if (a > b && a > c) {
        cout << a << " is bigger" << endl;
        return a;
    }
    else if (a == b && a == c) {
        cout << "your numbers are equal" << endl;
        return a; // або b, або c, оскільки всі рівні
    }
    else if (b > a && b > c) {
        cout << b << " is bigger" << endl;
        return b;
    }
    else {
        cout << c << " is bigger" << endl;
        return c;
    }
}

int main() {
    srand(time(0));

    const int FULL_SIZE = 15;
    int one_arr[FULL_SIZE];
    int size;

    cout << "Enter size of array: ";
    do {
        cin >> size;
    } while (size > FULL_SIZE || size <= 0);

    for (int i = 0; i < size; ++i) {
        one_arr[i] = rand() % 25 - 10;
    }
    for (int i = 0; i < size; i++) {
        cout << one_arr[i] << " ";
    }
    cout << endl;

    int max_value_one = one_dimensional_max(one_arr, size);
    cout << "One dimensional array max: " << max_value_one << endl;







    const int full_col = 100;
    const int full_row = 100;
    int row, col;

    do {
        cout << "Enter rows: ";
        cin >> row;
    } while (row < 1 || row > 100);

    do {
        cout << "Enter columns: ";
        cin >> col;
    } while (col < 1 || col > 100);

    int arr[full_row][full_col];
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            arr[i][j] = rand() % 30 - 10;
        }
    }

    cout << "Two dimensional array:" << endl;
    for (size_t i = 0; i < row; ++i) {
        for (size_t j = 0; j < col; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int max_value_two = two_dimensional_max(arr, row, col);
    cout << "Two dimensional array max: " << max_value_two << endl;







    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    max_between_two_numbers(x, y);








    int a, b, c;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;

    max_between_three_numbers(a, b, c);

    return 0;
}
