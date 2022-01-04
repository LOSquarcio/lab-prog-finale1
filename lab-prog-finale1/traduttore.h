#pragma once
#include<exception>
#include <iostream>
#include<vector>
#include<exception>
#include<string>

class traduttore {
    static int traduttoreLetter(char letter);
    static int traduttoreNumber(int number);
    static std::string traduttoreLetterRev(int letter);
    static std::string traduttoreNumberRev(int number);

public:
    static std::vector<int> traduci(std::string inputMovement);
    static std::string traduciReverse(int fromLetter, int fromNumber, int toLetter, int toNumber);
};


