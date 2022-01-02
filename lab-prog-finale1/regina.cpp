#include "regina.h"

/*TODO: - controllo tramite getPiece che le posizioni della scacchiera tra la posizione d'inizio e di arrivo siano vuoti*/

bool regina::moveReginaCheck(std::string inputMovement) {
	//traduzione degli input da "giocatore umano" a indici array 2D
	std::vector<int> input = traduttore::traduci(inputMovement);

	//il movimento della regina è composto da quello dell'alfiere o quello della torre - ma non entrambi contemporaneamente
	if ((std::abs(input.at(2) - input.at(0)) == std::abs(input.at(3) - input.at(1))) ||
		(input.at(0) == input.at(2) && input.at(1) != input.at(3)) || (input.at(1) == input.at(3) && input.at(0) != input.at(2)))

		//controllo che le posizioni della scacchiera tra quella di partenza e quella di arrivo siano vuote
		//caso 1: lettera di partenza uguale a quella di arrivo: movimento in verticale
		//if (input.at(0) == input.at(2)) {
		//	for (auto i = input.at(1); i <= input.at(3); i++) {
		//		//lab-prog-finale1::      TOLGO
		//		char temp = getPiece(input.at(0), input.at(i));
		//			if (temp != 0x20)
		//				return false;
		//		
		//}
	//caso 2: numero di partenza uguale a quello di arrivo: movimento in orizzontale
	/*if (input.at(1) == input.at(3)) {
		for (auto i = input.at(0); i <= input.at(2); i++) {
			if (scacchiera::getPiece(input.at(1), input.at(i)) != 0x20)
				return false;
		}
	}*/
	//caso 3: numero di spostamenti nella direzione verticale è uguale a quello in orizzontale: movimento obliquo
	/*if (std::abs(input.at(2) - input.at(0)) == std::abs(input.at(3) - input.at(1))) {
		for (auto i = input.at(0); i <= input.at(2); i++) {
			for (auto j = input.at(1); j <= input.at(3); j++) {

			}
		}
	}*/
	return false; /*se entra all'interno del primo if ma poi non rispetta le condizioni indicate
					nei seguenti vuol dire che la mossa non è possibile perché ci sono delle caselle
					della scaccheira occupate nel mezzo che non si possono saltare.
					Per tale motivo in questo caso la funzione deve ritornare come valore false.*/

	return false;
}

