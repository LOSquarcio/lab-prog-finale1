#pragma once
#include<iostream>

/*TODO: - aggiungere funzioni di check situazioni speciali
        - aggiungere distruttore*/

class scacchiera {
    char board[8][8];

public:
    scacchiera() : board{
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

    void movePedina(int fromLetter, int fromNumber, int toLetter, int toNumber) {
        board[toNumber][toLetter] = board[fromNumber][fromLetter];
        board[fromNumber][fromLetter] = 0x20;
    }

    void printScacchiera() {
        for (auto i = 0; i < 8; i++) {
            for (auto j = 0; j < 8; j++) {
                std::cout << board[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    char getPiece(int orizz, int vert) {
        return board[vert][orizz];
    }


    
};

