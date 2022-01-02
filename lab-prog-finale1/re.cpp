#include "re.h"

/*TODO: - */

bool re::moveReCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	if (((input.at(0) == input.at(2) + 1) && (input.at(1) == (input.at(3) + 1))) ||
		((input.at(0) == input.at(2)) && (input.at(1) == input.at(3) + 1)))

		return true;
	

	return false;
}
