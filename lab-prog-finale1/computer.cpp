#include"computer.h"
#include"scacchiera.h"
#include"traduttore.h"

//-------------------------------------------------------------------------------
/*TODO: Verifico che nel caso non venga inserito alcuna definizione ('w' or 'b')
        venga lanciata l'eccezione NoInfoConstructor.
        Implemento anche, sistemando il traduttore in modo che dia un boolean 
        in risposta, il move tramite l'uso della scacchiera. 
        Devo far si che dopo che io mangio una pedina la classe computer 
        tolga dal vector le coordinate di quella pedina.Questo viene effettuato 
        tramite la funzione remove. */
//-------------------------------------------------------------------------------

computer::computer(){throw NoCorrectInfoConstructor();}   //costruttore vuoto

computer::computer(char c) {                       //costruttore pedine white o black
    //se bianche
    if (c == 'w')
    {
        computer::coordinate.push_back("A1");
        computer::coordinate.push_back("A2");
        computer::coordinate.push_back("B1");
        computer::coordinate.push_back("B2");
        computer::coordinate.push_back("C1");
        computer::coordinate.push_back("C2");
        computer::coordinate.push_back("D1");
        computer::coordinate.push_back("D2");
        computer::coordinate.push_back("E1");
        computer::coordinate.push_back("E2");
        computer::coordinate.push_back("F1");
        computer::coordinate.push_back("F2");
        computer::coordinate.push_back("G1");
        computer::coordinate.push_back("G2");
        computer::coordinate.push_back("H1");
        computer::coordinate.push_back("H2");
       

    }
    //se nere
    else if (c == 'b')
    {
        computer::coordinate.push_back("A7");
        computer::coordinate.push_back("A8");
        computer::coordinate.push_back("B7");
        computer::coordinate.push_back("B8");
        computer::coordinate.push_back("C7");
        computer::coordinate.push_back("C8");
        computer::coordinate.push_back("D7");
        computer::coordinate.push_back("D8");
        computer::coordinate.push_back("E7");
        computer::coordinate.push_back("E8");
        computer::coordinate.push_back("F7");
        computer::coordinate.push_back("F8");
        computer::coordinate.push_back("G7");
        computer::coordinate.push_back("G8");
        computer::coordinate.push_back("H7");
        computer::coordinate.push_back("H8");
    }
    else
        throw NoCorrectInfoConstructor();
    
    
}

int computer::getSize() {
    int n = computer::coordinate.size();
    return n;
}

//funzione automossa
void computer::autoMove(scacchiera & board1) {
    bool flag = true;
    /*muovo random la pedina con l'uso della scacchiera
      il flag diventa true quando la mossa e' stata effettuata
      correttamente.In caso contrario continua a cercare di muovere fino a che 
      non muove una pedina. */

    int n = computer::coordinate.size(); //dimensione del vector per estrarre random le coordinate
    do
    {
        
        srand((unsigned)time(0));           //scelgo random una pedina dal vector
        int r = std::rand() % (n);
        std::string s1 = computer::coordinate.at(r);
        std::string s2 = randomPosition();  //scelgo random una posizione di destinazione
        std::vector <int> move = traduttore::traduci(s1 + " " + s2);

        //stampa la mossa per DEBUG
        //std::cout << "\nMOVE: " << move.at(0)<<move.at(1)<<move.at(2) <<move.at(3)<< "\n\n";

        if (board1.movePedina(move.at(0), move.at(1), move.at(2), move.at(3))) //muovo la pedina 
        {
            flag = false;
            computer::coordinate[r] = s2; //aggiorno posizione pedina nel vector
        }

    } while (flag);
}

//restituisce una posizione random all'interno della scacchiera
std::string randomPosition() {
    int letter = 0;
    int number = 0;
    std::string position = "";
    srand((unsigned)time(0));
    letter = (std::rand() % 8) +1;
    srand((unsigned)time(0));
    number = (std::rand() % 8) +1;
    //seleziono la lettera
    if (letter == 1)
        position = "A" + (std::to_string(number));
    else if (letter == 2)
        position = "B" + (std::to_string(number));
    else if (letter == 3)
        position = "C" + (std::to_string(number));
    else if (letter == 4)
        position = "D" + (std::to_string(number));
    else if (letter == 5)
        position = "E" + (std::to_string(number));
    else if (letter == 6)
        position = "F" + (std::to_string(number));
    else if (letter == 7)
        position = "G" + (std::to_string(number));
    else if (letter == 8)
        position = "H" + (std::to_string(number));
    //ritorno la stringa che contiene una coordinata RANDOM
    return position;
}