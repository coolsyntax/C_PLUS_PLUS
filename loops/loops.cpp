#include <bits/stdc++.h>

int main()
{
    // lets say I want to print hello world 5 times without writing cout statement 5 times

    for (int i = 0; i < 5; i++)
    {
        std::cout << "hello world" << "\n";
    }
    // for loops are very flexible and are ideally used while iterating 

    // while loops are another way of looping 
    // we use while loop when a condition already exist and we want our code 
    // to execute till the time condition is true

    std::cout << "===================" << "\n";


    // another way of iteration using for loop in mordern c++ 
    std::vector<int> v{1,2,3,4,5};
    for (const auto &i : v)
    {
        std::cout << i << "\n";     // element at index automatically is printed hence 'i' is used 
                                    // instead of v[i]
    }
    std::cout << "===================" << "\n";


    int i = 0;
    while (i < 5)
    {
        std::cout << "hello world" << "\n";
        i++;
    }
    
    // while and for loops are similar and can be used in place of one another

    // do while execute the loop at least once even if the condition is false

    std::cout << "===================" << "\n";

    bool condition = false;
    do
    {
        std::cout << "hello world" << "\n";
    } while (condition );
    
}