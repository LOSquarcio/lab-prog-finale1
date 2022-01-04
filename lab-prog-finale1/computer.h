#pragma once
#include<iostream>
#include<random>
#include<string>
#include"scacchiera.h"

struct computer {
	computer();
	computer(char);

	class NoCorrectInfoConstructor{}; //classe per lanciare eccezioni
	static std::string returnValue(int);
	static void removePiece(std::string);
	int getSize();
	void autoMove(scacchiera &);
private:
	//vettore contenente coordinate dei pezzi
	std::vector <std::string> coordinate{};
	
	
};

//HELPER FUNCTION
std::string randomPosition();

