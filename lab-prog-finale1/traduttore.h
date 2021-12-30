#pragma once
#include<exception>
#include <iostream>
#include<vector>
#include<exception>
#include<string>

class traduttore {
    static int traduttoreLetter(char letter);

    static int traduttoreNumber(int number);

public:
    static std::vector<int> traduci(std::string inputMovement);
};

