// Copyright (c) 2023 Noah Smith All rights reserved.
//
// Created by: Noah Smith
// Date: Nov. 15th, 2023
// This program asks the user to guess a number between 0 and 9
// and tells the user if they got it correct, with random numbers,
// with a while loop
#include <iostream>
#include <random>

int main() {
    // Declare variables
    int userGuessInt;
    std::string userGuessString;

    // Providing a seed value.
    srand((unsigned)time(NULL));

    // Get a random number between 0 and 9
    int correctGuess = rand() % 10;

    while (true) {
        // Get the user's guess
        std::cout << "Guess a number between 0 and 9: ";
        std::cin >> userGuessString;

        try {
            // convert the user's guess to an int
            userGuessInt = std::stoi(userGuessString);

            // Check if the user's guess is negative
            if (userGuessInt < 0) {
                std::cout << userGuessInt;
                std::cout << " is not a positive integer.";
                std::cout << " Guess again." << std::endl;
            } else {
                // Check if user's guess is correct
                if (userGuessInt == correctGuess) {
                    break;
                } else {
                    std::cout << userGuessInt;
                    std::cout << " is incorrect. Guess again." << std::endl;
                }
            }
        } catch (std::exception) {
            // The user did not enter an integer
            std::cout << userGuessString;
            std::cout << " is not an integer. Guess again." << std::endl;
        }
    }
    // Tell the user they got it right
    std::cout << "You are correct!" << std::endl;
}
