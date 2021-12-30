#include "regina.h"

/*TODO: - controllo tramite getPiece che le posizioni della scacchiera tra la posizione d'inizio e di arrivo siano vuoti*/

bool regina::moveReginaCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	//il movimento della regina è composto da quello dell'alfiere o quello della torre - ma non entrambi contemporaneamente
	if ((std::abs(input.at(2) - input.at(0)) == std::abs(input.at(3) - input.at(1))) ||
		(input.at(0) == input.at(2) && input.at(1) != input.at(3)) || (input.at(1) == input.at(3) && input.at(0) != input.at(2)))
		return true;

	return false;
}

