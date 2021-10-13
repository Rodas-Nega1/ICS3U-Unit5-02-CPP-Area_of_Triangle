// Copyright (c) 2021 Rodas Nega All rights reserved
//
// Created by: Rodas Nega
// Created on: Oct 2021
// This program asks the user for height and base for area of triangle


#include <iostream>


void AreaOfTriangle(int height, int base) {
    // calculate area of triangle

    int area;

    area = height * base / 2;
    std::cout << "" << std::endl;
    std::cout << "The area of the triangle is " << area << " cm²." << std::endl;
}

int main() {
    // this function calls the precedent function
    std::string heightGiven;
    int heightGivenInt;
    std::string baseGiven;
    int baseGivenInt;

    // input
    std::cout << "Enter your height (cm): ";
    std::cin >> heightGiven;

    std::cout << "Enter your base (cm): ";
    std::cin >> baseGiven;

    try {
        heightGivenInt = std::stoi(heightGiven);
        baseGivenInt = std::stoi(baseGiven);
        AreaOfTriangle(heightGivenInt, baseGivenInt);
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid integer.";
    }
    std::cout << "\nDone." << std::endl;
}
