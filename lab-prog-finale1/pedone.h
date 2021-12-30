#pragma once
#include<string>
#include "scacchiera.h"
#include "traduttore.h"

struct pedone {
	static bool movePedoneCapCheck(std::string inputMovement);

	static bool movePedoneLowcaseCheck(std::string inputMovement);
};

