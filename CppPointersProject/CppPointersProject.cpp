#include <iostream>

void ArrayInit(int* array, int size)
{

}

int main()
{
    //int size{ 10 };
    //int* array{ new int[size] };

    //int width{ 8 };
    //int height{ 5 };

    //int** matrix = new int*[height];
    //for (int i = 0; i < height; i++)
    //    matrix[i] = new int[width];

    ////
    ////


    //for (int i = 0; i < height; i++)
    //    delete[] matrix[i];

    //delete[] matrix;

    unsigned long long number;
    std::cin >> number;

    int copy{ number };
    int size{};
    while (copy)
    {
        size++;
        copy /= 10;
    }

    int* numberArray = new int[size];
    for (int i{}; i < size; i++)
    {
        numberArray[i] = number % 10;
        number /= 10;
    }
        

    bool isPalinfrom{ true };
    for(int i{}; i < size / 2; i++)
        if (numberArray[i] != numberArray[size - 1 - i])
        {
            isPalinfrom = false;
            break;
        }
}
