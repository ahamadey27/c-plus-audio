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

        double a = std::stod(input1);
        double b = std::stod(input2);

        if (a > b)
        {
            std::cout << a << ", your first number, is greater than " << b << ".\n";
        }
        else if (a < b)
        {
            std::cout << b << ", your second number, is greater than " << a << ".\n";
        }
        else
        {
            std::cout << a << " and " << b << " are equal.\n";
        }

    }
}