#include <iostream>
#include <ctime>
using namespace std;

template <typename T>
T diapasone_from_a_to_b(T a, T b)
{
	if (a > b)
	{
		return 0;
	}
	else
	{
	    return a + diapasone_from_a_to_b(a + 1, b);
	}
}

int main()
{
	int a, b;
	cout << "enter a start of diapasone";
	cin >> a;
	cout << "enter the end of diapasone";
	cin >> b;

	cout <<diapasone_from_a_to_b<int>(a, b) << endl;
	return 0;
	system("pause");
}