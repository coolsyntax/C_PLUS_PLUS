#include<iostream>

void log(const char* message)
{
    return;
    std::cout << "hello world" << "\n";
    // ideally this code should print hello world to the console 
    // but as soon as program hit the return keyword it will exit 
    // the function
    // So return keyword is used to stop executing the function and 
    // return a value if it has to*****
}

int main()
{
    for (int i = 0; i < 5; i++)
    {
        if(i>2)
            continue;
        // continue is a keyword which when executed tells the program
        // to stop executing this iteration and move on to run the next iteration 
        // example this code will print hello world 3 times instead of 5
        std::cout << "hello world" << "\n";
        std::cout << i << "\n";
    }

    std::cout << "====================" << "\n";

    for (int i = 0; i < 5; i++)
    {
        if((i+1) % 2 == 0)
            break;
        // break is a keyword which when executed tells the program
        // to stop executing this loop and move out of the loop 
        // example this code will print hello world 1 times instead of 5
        // break breaks out of the loop
        std::cout << "hello world" << "\n";
        std::cout << i << "\n";
    }

    std::cout << "====================" << "\n";

    log("hello world");

}