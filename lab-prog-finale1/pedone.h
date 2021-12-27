#pragma once
#include<string>
#include "scacchiera.h"
#include "traduttore.h"

/*TODO: - controllare che il pednoe non possa mangiare andando avanti, ma solo di lato.
		  Lanciare eccezione se si vuole muovere avanti in una casella occupata
		- aggiungere possibilita di muoversi di due caselle avanti durante il primo turno*/

struct pedone {
	
	//movimento pedone maiuscolo
	static bool movePedoneCapCheck(std::string inputMovement) {

		//traduzione degli input da "giocatore umano" a indici array 2D
		std::vector<int> input = traduttore::traduci(inputMovement);

		//SIMPLE FORWARD MOVEMENT:
		//controllo condizioni di movimento pedine
		if (input.at(0) == input.at(2) && input.at(3) == input.at(1) + 1) {
			return true;
		}
		//DORWARD EATING MOVEMENT:
		//controllo condizioni di movimento pedine
		else if ((input.at(2) == input.at(0) + 1 || input.at(2) == input.at(0) - 1) && input.at(3) == input.at(1) + 1) {
			return true;
		}
		return false;
	}

	//movimento pedone minuscolo
	static bool movePedoneLowcaseCheck(std::string inputMovement) {
		//controlli precondizioni della stringa di input
		if (inputMovement.length() != 5)
			return false;

		//traduzione degli input da "giocatore umano" a indici array 2D
		std::vector<int> input = traduttore::traduci(inputMovement);

		//SIMPLE FORWARD MOVEMENT:
		//controllo condizioni di movimento pedine
		if (input.at(0) == input.at(2) && input.at(3) == input.at(1) - 1) {
			return true;
		}
		//DORWARD EATING MOVEMENT:
		//controllo condizioni di movimento pedine
		else if ((input.at(2) == input.at(0) + 1 || input.at(2) == input.at(0) - 1) && input.at(3) == input.at(1) - 1) {
			return true;
		}
		return false;
	}

};

