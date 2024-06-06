#include <iostream>
#include <ctime>
using namespace std;



int main()
{
	srand(0);
	const int size = 100;
	int arr[size];
	for (size_t i = 0; i < size; i++)
	{
		arr[size] = rand() % 100;
	}

	for (size_t i = 0; i < size; i++)
	{
		cout << arr[i] << " ";

	}
	return 0;
	system("pause");
}