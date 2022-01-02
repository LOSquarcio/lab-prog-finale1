#pragma once
#include<iostream>
#include<exception>


class scacchiera {
    char board[8][8];

public:
    scacchiera();

    void movePedina(int fromLetter, int fromNumber, int toLetter, int toNumber);

    void printScacchiera();

    char getPiece(int orizz, int vert);
};


