#pragma once
#include<exception>
#include <iostream>
#include<vector>

//TODO: controllo precondizioni stringa di inputMovement

class traduttore {
    static int traduttoreLetter(char letter) {
        int convertedFrom = 0;
        try {
            if (letter == 'a' || letter == 'A')
                convertedFrom = 0;
            else if (letter == 'b' || letter == 'B')
                convertedFrom = 1;
            else if (letter == 'c' || letter == 'C')
                convertedFrom = 2;
            else if (letter == 'd' || letter == 'D')
                convertedFrom = 3;
            else if (letter == 'e' || letter == 'E')
                convertedFrom = 4;
            else if (letter == 'f' || letter == 'F')
                convertedFrom = 5;
            else if (letter == 'g' || letter == 'G')
                convertedFrom = 6;
            else if (letter == 'h' || letter == 'H')
                convertedFrom = 7;
        }
        catch (std::exception&) {
            std::cout << "Exeption: sono stati inseriti dei valori di movimento non validi." << std::endl;
        }

        return convertedFrom;
    }

    static int traduttoreNumber(int number) {
        return 8 - number;
    }

public:
    static std::vector<int> traduci(std::string inputMovement) {
        int fromLetter = traduttore::traduttoreLetter(inputMovement[0]);
        int fromNumber = traduttore::traduttoreNumber(inputMovement[1] - '0');
        int toLetter = traduttore::traduttoreLetter(inputMovement[3]);
        int toNumber = traduttore::traduttoreNumber(inputMovement[4] - '0');

        std::vector<int> vector { fromLetter, fromNumber, toLetter, toNumber };
        return vector;
    }
};

