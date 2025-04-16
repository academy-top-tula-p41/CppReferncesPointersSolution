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
    int a = 20;
    int b = 30;
    std::cout << a << " " << b << "\n";
    
    swap(a, b);
    std::cout << a << " " << b << "\n";

}
