#include <bits/stdc++.h>

int main()
{
    int number_to_be_reversed = 0 , reversed_number = 0;
    std::cout << "Enter number to be reversed \n";
    std::cin >> number_to_be_reversed;
    while (number_to_be_reversed > 0)
    {
        reversed_number = 10 * reversed_number + (number_to_be_reversed % 10);
        number_to_be_reversed = number_to_be_reversed / 10;
    }
    std::cout << reversed_number;
}