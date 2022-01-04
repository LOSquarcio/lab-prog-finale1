#include <iostream>
#include<vector>
#include "scacchiera.h"
#include "pedone.h"
#include "alfiere.h"
#include "regina.h"
#include "re.h"
#include "cavallo.h"
#include "torre.h"
#include"middlePieces.h"
#include"computer.h"



using namespace std;

int main() {
    int cont = 0;
    scacchiera board;
    computer white('w');
    cout << "\n\n------------------\n\n";
    board.printScacchiera();
    cout << "\n------------------\n";
    //DEBUG RANDOM
    /*while(cont<6) {
        cout << "\n------------------\n";
        white.autoMove(board);
        board.printScacchiera();
        cout << "\n------------------\n";
        cont++;
    }*/
    //DEBUG UTENTE
    board.movePedina(4, 6, 4, 5);
    board.movePedina(4, 7, 4, 6);
    board.movePedina(4, 6, 5, 5);
    board.movePedina(5, 5, 4, 5);
    board.printScacchiera();

    cout << "\n\n------------------\n\n\n";

}
