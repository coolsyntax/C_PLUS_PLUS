#include <iostream>
#include <cmath>

int main()
{
    int number_to_be_checked = 0;
    std::cout << "Enter number to be checked \n";
    std::cin >> number_to_be_checked;
    if (number_to_be_checked == 1)
    {
        std::cout << "number is prime";
    }
    else
    {
        bool flag = 0;
        for (int i = 2; i <= sqrt(number_to_be_checked); i++)
        {
            if (number_to_be_checked % i == 0)
            {
                flag = 1;
                std::cout << "number is not prime";
                break;
            }       
        }
        if (flag == 0)
        {
            std::cout << "number is prime";
        } 
    }
}