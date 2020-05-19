// cPlusPlusApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//functions here

    int solver(int X, std::string TypeOfEquation) {
        int Y;

        if (TypeOfEquation == "square") {
            Y = X * X;
        }

        if (TypeOfEquation == "add") {
            Y = X + X;
        }
        if (TypeOfEquation == "subtract") {
            Y = X - X;
        }

        if (TypeOfEquation == "divide") {
            Y = X / X;
        }

        return Y;
    }

    int GetUserAge() {
        std::cout << "Please fill out the following:\n";
        int UserAge;
        std::cout << "Age:";std::cin >> UserAge;
        return UserAge;
    }

    std::string GetUserName() {
        std::string Name;
        std::cin >> Name;
        return Name;
    }

    void PasswordChecker(std::string Password) {
        std::string EntryCode;

        int PasswordScore;
        
        PasswordScore = 0;
        while (PasswordScore == 0) {
            std::cout << "Enter password here:";
            std::cin >> EntryCode;
            if (EntryCode == Password) {
                PasswordScore = 1;
            }
        }
        std::cout << "Correct!";
    }

//main program here
int main()
{
    //Main
    std::cout << "Hello World!";
    std::cout << " and goodmorning.\n";
    PasswordChecker("1234567890");
    std::cout << "Welcome!";



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
