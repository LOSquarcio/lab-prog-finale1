#pragma once
#include<string>
#include "scacchiera.h"
#include "traduttore.h"

class cavallo {
	static bool moveCavalloCheck(std::string inputMovement) {
		//traduzione degli input da "giocatore umano" a indici array 2D
		std::vector<int> input = traduttore::traduci(inputMovement);

		/*if (((input.at(2) == input.at(0) - 1) || (input.at(2) == input.at(0) + 1)) && (input.at(3) == input.at(0) - 2) || (input.at(3) == input.at(0) + 2))) ||
			 (input.at(2) == input.at(0) - 2) || (input.at(2) == input.at(0) + 2)) && (input.at(3) == input.at(0) - 1) || (input.at(3) == input.at(0) + 1)))
			return true;*/

		return false;
	}
};

