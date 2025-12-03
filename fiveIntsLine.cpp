// Copyright (c) 2025 Brandon All rights reserved.
// Created By: Brandon
// Date: December 1, 2025
// This program displays the years from 1000 to 2000, five per line.

#include <iostream>

int main() {
    // display years from 1000 to 2000, five per line
    for (int year = 1000; year <= 2000; year++) {
        std::cout << year << " ";
        // print a new line after every five years
        if (year % 5 == 0 && year != 1000) {
            std::cout << std::endl;
        }
    }
}
