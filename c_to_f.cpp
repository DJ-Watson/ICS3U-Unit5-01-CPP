// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: DJ Watson
// Created on: November 2019
// this program converts celcius to fahrenheit


#include <iostream>
#include <string>

void convert() {
    // variables
    std::string numcheck;
    int numinput;
    int answer;

    // input
    std::cout << "enter temperature (°C): ";
    std::cin >> numcheck;
    std::cout << std::endl;

    // process and output
    try {
        numinput = std::stoi(numcheck);
        answer = numinput * 1.8 + 32;
        std::cout << answer << "°F";
    } catch (std::invalid_argument) {
        std::cout << "invalid input";
    }
}

int main() {
    convert();
}
