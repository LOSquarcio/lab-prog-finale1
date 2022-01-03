#include "cavallo.h"

bool cavallo::moveCavalloCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	//controllo se la mossa fa parte delle azioni possibili
	if (((input.at(0) == input.at(2) + 2) && (input.at(1) == input.at(3) + 1)) ||  //#1
		((input.at(0) == input.at(2) + 1) && (input.at(1) == input.at(3) + 2)) ||  //#2 
		((input.at(0) == input.at(2) - 1) && (input.at(1) == input.at(3) + 2)) ||  //#3
		((input.at(0) == input.at(2) - 2) && (input.at(1) == input.at(3) + 1)) ||  //#4
		((input.at(0) == input.at(2) - 2) && (input.at(1) == input.at(3) - 1)) ||  //#5
		((input.at(0) == input.at(2) - 1) && (input.at(1) == input.at(3) - 2)) ||  //#6
		((input.at(0) == input.at(2) + 1) && (input.at(1) == input.at(3) - 2)) ||  //#7
		((input.at(0) == input.at(2) + 2) && (input.at(1) == input.at(3) - 1))     //#8
		)
		
		return true;

	return false;
}
