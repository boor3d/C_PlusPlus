// Text adventure project (Codecademy)
#include <iostream>

int main()
{
    
    int question1;

    std::cout << "Welcome to the branching story!\n";
    std::cout << "Which door would you like to open?\n";
    std::cout << "1) Door 1";
    std::cout << "2) Door 2";
    std::cout << "3) Door 3";

    std::cin >> question1;

    if (question1 == 1)
    {
        std::cout << "You have choses to watch a TV Series!";
    }
    else if (question1 == 2)
    {
        std::cout << "You have chosen to watch a Movie!";
    }
    else if (question1 == 3)
    {
        std::cout << "You have chosen to code like a BOSS";
    }
    else
    {
        std::cout << "Invalid Input";
    }


    
    
    
    // int ending1, ending2, ending3;
    
    return 0;
}
