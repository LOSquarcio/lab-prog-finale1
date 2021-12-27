#include <iostream>
#include<array>
#include<vector>
#include "scacchiera.h"
#include "pedone.h"
#include "scacchiera.cpp"

using namespace std;

int main() {
    
    scacchiera board;

    board.printScacchiera();

    cout << "" << endl;

    //traduzione input utente in input array 2D per effettuare il movimento nella scacchiera
    string inputMovement = "A7 A6";
    vector<int> input = traduttore::traduci(inputMovement);

    cout << "Input movement: " << inputMovement << endl;

    cout << input.at(0) << input.at(1) << input.at(2) << input.at(3) << endl;


    //effettuo check precondizioni e, eventualmente, muovo la pedina
    if (pedone::movePedoneCapCheck(inputMovement) == true) {
        cout << pedone::movePedoneCapCheck(inputMovement) << endl;
        board.movePedina(input.at(0), input.at(1), input.at(2), input.at(3));
    }

    board.printScacchiera();
}
