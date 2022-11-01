// Copyright (c) 2022 Zaida Hammel All rights reserved.
//
// Created by: Zaida Hammel
// Created on: Oct 2022
// This program determines if you're eligible to date.

#include <iostream>
#include <string>

int main() {
    // this function uses compound boolean statements
    std::string integerAsString;
    int ageNumber;

    // input
    std::cout << "Enter your age: ";
    std::cin >> integerAsString;

    ageNumber = atoi(integerAsString.c_str());
    // process & output
    try {
        ageNumber = std::stoi(integerAsString);
        if (ageNumber >= 25 && ageNumber <= 40) {
            std::cout << "You are an acceptable age.";
        } else {
            std::cout << "You aren't acceptable age.";
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid age. ";
        std::cout << std::endl;
    }

    std::cout << std::endl;

    std::cout << "\nDone." << std::endl;
}