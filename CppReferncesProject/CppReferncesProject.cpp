// CppReferncesProject.cpp 
//

#include <iostream>

void func(int& n)
{
    n = 456;
}

void swap(int& x, int& y)
{
    int temp = x;
    x = y;
    y = temp;
}

int main()
{
    //int a = 20;
    //int b = 30;
    //std::cout << &a << " " << &b << "\n";
    //
    ///*swap(a, b);
    //std::cout << a << " " << b << "\n";*/

    //unsigned long long addr = &a;

    /*int size;
    std::cout << "Input size: ";
    std::cin >> size;

    int* array;
    array = new int[size];

    for (int i = 0; i < size; i++)
        array[i] = i + 1;

    for (int i = 0; i < size; i++)
        std::cout << *(array + i) << " ";

    std::cout << "\n";*/

    /*long long n{ 200 };
    long long* iptr;
    iptr = &n;

    std::cout << iptr << "\n";
    std::cout << iptr + 1 << "\n";*/

    //*iptr = 300;
    //std::cout << n << "\n";

    int m;
    int* addr1 = &m;
    int* addr2 = addr1 + 10;

    std::cout << addr1 << " " << addr2 << "\n";
    std::cout << addr2 - addr1 << "\n";

}
