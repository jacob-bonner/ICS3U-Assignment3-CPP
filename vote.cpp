// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: October 2019
// This program tells the user if they are old enough to vote in an election

#include <iostream>

int main() {
    // This function allows the user to try and guess the number

    // variables
    int userAge;

    // Input
    std::cout << "Enter your age here:" << std::endl;
    std::cin >> userAge;
    std::cout << "" << std::endl;

    // Process
    if (userAge >= 18) {
        std::cout << "You are old enough to vote!" << std::endl;
    } else {
          std::cout << "Sorry, you are not old enough to vote." << std::endl;
    }
}
