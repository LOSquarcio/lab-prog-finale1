#include "scacchiera.h"


/*TODO: - aggiungere funzioni di check situazioni speciali
        - aggiungere distruttore*/


scacchiera::scacchiera() : board{
    {'T', 'C', 'A', 'D', 'R', 'A', 'C', 'T'},
    { 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P' },
    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
    { 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20 },
    { 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p' },
    { 't', 'c', 'a', 'd', 'r', 'a', 'c', 't' },
} {
}

void scacchiera::movePedina(int fromLetter, int fromNumber, int toLetter, int toNumber) {
    board[toNumber][toLetter] = board[fromNumber][fromLetter];
    board[fromNumber][fromLetter] = 0x20;
}

void scacchiera::printScacchiera() {
    for (auto i = 0; i < 8; i++) {
        for (auto j = 0; j < 8; j++) {
            std::cout << board[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

char scacchiera::getPiece(int orizz, int vert) {
    return board[vert][orizz];
}






