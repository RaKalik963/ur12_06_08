#include <iostream>
#include <ctime>


int sumOfSubarray(int array[], int start) 
{
    int sum = 0;
    for (int i = start; i < start + 10; ++i) {
        sum += array[i];
    }
    return sum;
}

int findMinSumPosition(int array[], int start, int SIZE) 
{
    if (start > SIZE - 10) {
        return -1; 
    }
    int nextMinPosition = findMinSumPosition(array, start + 1); 
    if (nextMinPosition == -1 || sumOfSubarray(array, start) < sumOfSubarray(array, nextMinPosition)) {
        return start; 
    }
    else {
        return nextMinPosition; 
    }
}

int main() 
{
    const int SIZE = 100;
    int array[SIZE];
    

    srand(time(0));

    for (int i = 0; i < SIZE; ++i) 
    {
        array[i] = rand() % 100; 
    }
    int minPosition = findMinSumPosition(array, 0);

    std::cout << "The starting position of the minimum subarray: " << minPosition << std::endl;

    return 0;
}
