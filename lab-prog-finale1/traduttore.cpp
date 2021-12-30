#include "traduttore.h"

/*TODO: - controllo precondizioni stringa di inputMovement*/

int traduttore::traduttoreLetter(char letter) {
    int convertedFrom = 0;
    /*il try - catch dovrebbe essere inutile : alla funzione vengono passati soltanto argomenti
      corretti, infatti il controllo viene eseguito dalla funzione traduttore::traduci()*/
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

int traduttore::traduttoreNumber(int number) {
    return 8 - number;
}

std::vector<int> traduttore::traduci(std::string inputMovement) {
    const std::string validLetters = "ABCDEFGHabcdefgh";
    const std::string validNumbers = "12345678";

    int fromLetter = NULL;
    int fromNumber = NULL;
    int toLetter = NULL;
    int toNumber = NULL;

    try {
        if (inputMovement.length() > 5) {
            std::cout << "Exeption: Input string too long: cannot contain valid moves." << std::endl;
            throw std::invalid_argument("");
        }
        if (inputMovement.length() < 5) {
            std::cout << "Exeption: Input string too short: cannot contain moves." << std::endl;
            throw std::invalid_argument("");
        }
        if ((validLetters.find(inputMovement[0]) == std::string::npos) || (validLetters.find(inputMovement[3]) == std::string::npos)) {
            std::cout << "Exeption: Input letters are not valid positions in the board." << std::endl;
            throw std::invalid_argument("");
        }
        if (validNumbers.find(inputMovement[1]) == std::string::npos || validNumbers.find(inputMovement[4]) == std::string::npos) {
            std::cout << "Exeption: Input numbers are not valid positions in the board." << std::endl;
            throw std::invalid_argument("");
        }

        std::cout << inputMovement[3] << std::endl;
        std::cout << validLetters.find(inputMovement[3]) << std::endl;
        fromLetter = traduttore::traduttoreLetter(inputMovement[0]);
        fromNumber = traduttore::traduttoreNumber(inputMovement[1] - '0');
        toLetter = traduttore::traduttoreLetter(inputMovement[3]);
        toNumber = traduttore::traduttoreNumber(inputMovement[4] - '0');
    }
    catch (std::invalid_argument e) {
        std::cout << "Inserire input validi di seguito: " << std::endl;
    }

    std::vector<int> vector{ fromLetter, fromNumber, toLetter, toNumber };
    return vector;
}
