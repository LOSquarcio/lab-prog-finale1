#include "re.h"

/*TODO: - */

bool re::moveReCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	//controllo se la mossa fa parte delle azioni possibili
	if (((input.at(0) == input.at(2) + 1) && (input.at(1) == input.at(3) + 1))   ||  //#1
		((input.at(0) == input.at(2))     && (input.at(1) == input.at(3) + 1))   ||  //#2
		((input.at(0) == input.at(2) - 1) && (input.at(1) == input.at(3) + 1))   ||	 //#3
		((input.at(0) == input.at(2) - 1) && (input.at(1) == input.at(3)))       ||	 //#5
		((input.at(0) == input.at(2) - 1) && (input.at(1) == input.at(3) - 1))   ||	 //#6
		((input.at(0) == input.at(2)) && (input.at(1) == input.at(3) - 1))       ||	 //#7
		((input.at(0) == input.at(2) + 1) && (input.at(1) == input.at(3) - 1))   ||	 //#8
		((input.at(0) == input.at(2) + 1) && (input.at(1) == input.at(3)))           //#9
		)
	
		return true;
	

	return false;
}
