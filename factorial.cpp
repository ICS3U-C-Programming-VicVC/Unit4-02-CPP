// Copyright (c) 2026 Victor Victor-Calixte All rights reserved.
// .
// Created by: Victor Victor-Calixte
// Date: 11/9/26
// This program calculates the factorial of the given number


#include<iostream>
#include<string>

char const INPT_MSG[] = ("Enter a number to factorial: ");
char const FINAL_MSG[] = ("Factorial of ");
char const ERR_MSG[] =
(" isn't a valid value.\n "
"(MUST BE A POSITIVE INTEGER!)\n");

int main() {
    // Setting needed variables
    std::string factorialNumStr;

    // Getting the factorial number from the user
    std::cout << INPT_MSG;
    std::cin >> factorialNumStr;

    // the try statement will make sure the code safely with invalid user inputs
    try {
        // Converting the input from the user to number
        // and turning it to a positive number
        int factorialNum = std::stoi(factorialNumStr);
        int totalLoops = std::abs(factorialNum);
        // Setting the needed variables
        int crntLoop = 0;
        int sumNum = 1;

        // calculating the factorial
        do {
            crntLoop += 1;
            sumNum *= crntLoop;
        } while (crntLoop < totalLoops);

        if (factorialNum < 0) {
            sumNum = -sumNum;
        }

        // Displaying the results to the user
        std::cout
        << FINAL_MSG
        << factorialNum
        << " is: "
        << sumNum
        << "\n";
    } catch(std::invalid_argument) {
        std::cout
        << factorialNumStr
        << ERR_MSG;
    }
}
