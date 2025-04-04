// Copyright 2025 Joanna Keza All rights reserved
//
// Created by: Joanna Keza
// Data: March 3, 2025
// This program casts a string to an integer, and
// lets the user know if the year they wrote was
// a leap year or not a leap year

#include <iostream>
#include <string>

int main() {
    // declare variables
    std::string leapString;
    int leapInteger;

    // get the user's input
    std::cout << "Enter the year: ";
    std::cin >> leapString;

    // CAST the string into an integer
    try {
        // casts the user's age to an integer
        leapInteger = std::stoi(leapString);

        // check if user's year is a leap year or not
        if (leapInteger % 4 == 0) {
            if (leapInteger % 100 == 0) {
                if (leapInteger % 400 == 0) {
                    std::cout << leapInteger << " is a leap year !";
                } else {
                    std::cout << leapInteger << " is not a leap year !";
                }
            } else {
            std::cout << leapInteger << " is a leap year !";
        }
        } else {
            std::cout << leapInteger << " is not a leap year !";
        }
        // This will catch any input errors
    } catch (std::invalid_argument) {
        std::cout << leapString << " is not a valid year.\n";
    }
}
