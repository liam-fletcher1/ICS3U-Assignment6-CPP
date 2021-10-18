// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Oct 2021
// This program asks the user for the radius and height
// to calculate and output the volume of a cone


#include <iostream>
#include <cmath>


float VolumeCone(int radius, int height) {
    // calculate volume
    float volume;

    // process
    volume = round(M_PI * radius * radius * height * 1/3);

    return volume;
}

int main() {
    // this function calls the function
    std::string userRadius;
    std::string userHeight;
    int userRadiusInt;
    int userHeightInt;
    float CalculateVolume;

    // input & output
    std::cout << "Enter the radius of your cone (mm): ";
    std::cin >> userRadius;
    std::cout << "Enter the height of your cone (mm): ";
    std::cin >> userHeight;

    try {
        userRadiusInt = std::stoi(userRadius);
        userHeightInt = std::stoi(userHeight);
        if (userRadiusInt < 0) {
            std::cout << "" << std::endl;
            std::cout << "That is an invalid number.";
        if (userHeightInt < 0) {
            std::cout << "" << std::endl;
            std::cout << "That is an invalid number.";
        }
        } else {
        // call function
        CalculateVolume = VolumeCone(userRadiusInt, userHeightInt);
        std::cout << "" << std::endl;
        std::cout << "The volume of your cone is "
        << CalculateVolume << " mm³";
        }
    } catch (std::invalid_argument) {
        std::cout << "" << std::endl;
        std::cout << "That is an invalid number.";
    }
        std::cout << "" << std::endl;
        std::cout << "\nDone." << std::endl;
}
