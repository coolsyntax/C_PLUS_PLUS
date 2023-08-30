#include <bits/stdc++.h>

int main()
{
    int number_to_be_checked = 0, sum = 0, last_digit = 0, original_number_to_be_checked = 0;
    std::cout << "Enter number to be checked \n";
    std::cin >> number_to_be_checked;
    original_number_to_be_checked = number_to_be_checked;
    while (number_to_be_checked > 0)
    {
        last_digit = number_to_be_checked % 10;
        sum += pow(last_digit, 3);
        number_to_be_checked = number_to_be_checked / 10;
    }
    if (sum == original_number_to_be_checked)
    {
        std::cout << "is armstrong";
    }
    else
    {
        std::cout << "is not armstrong";
    }
}