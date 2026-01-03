#include <iostream>
#include <string>

void ch3Drill_01()
{
    std::string input1;
    std::string input2;

    while (true)
    {
        std::cout << "Please enter two numbers: \n";
        std::cin >> input1;

        if (input1 == "x" || input1 == "X")
        {
            break;
        }

        std::cin >> input2;

        if (input2 == "x" || input2 == "X")
        {
            break;
        }

        int a = std::stoi(input1);
        int b = std::stoi(input2);

        std::cout << "Your two ints are " << a << " and " << b << ". \n";

    }
}