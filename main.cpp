#include <iostream>
#include <ctime>
using namespace std;

int row(int N)
{
	for (size_t i = 0; i < N; i++)
	{
		cout << "*" << " ";
	}
	cout << endl;
}

int main()
{
	int N;
	cout << "enter the count of stars";
	cin >> N;

	return 0;
	system("pause");
}