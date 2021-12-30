#include "torre.h"

/*TODO: - controllare che le caselle in mezzo a dove la pedina vuole muoversi non siano gia occupate*/

/*NB: il movimento delle pedine maiuscole o minuscole non cambia, perché la torre può muoversi
		  sia verticalmente che orizzontalmente senza costrizioni*/
bool torre::moveTorreCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	//movimento verticale o orizzontale
	if ((input.at(0) == input.at(2) && input.at(1) != input.at(3)) || (input.at(1) == input.at(3) && input.at(0) != input.at(2)))
		return true;

	return false;
}
