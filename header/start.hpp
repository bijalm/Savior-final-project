#ifndef __START_HPP__
#define __START_HPP__

#include "CharacterFactory.hpp"
#include "FairyFactory.hpp"
#include "KnightFactory.hpp"
#include "TrollFactory.hpp"
#include "ElfFactory.hpp"

#include "character.hpp"
#include "knight.hpp"
#include "fairy.hpp"
#include "elf.hpp"
#include "troll.hpp"

void displayCharacters(){
        cout << "Choose a character" << endl;
        cout << "1 : Fairy" <<endl;
        cout << "2: Elf" << endl;
        cout << "3: Knight" << endl;
}

int getChoice(){
        int choice;
        cin >> choice;
        while (choice < 0 || choice > 3){
		cout << "Select characters 1-3" << endl;
                cin >> choice;
        }
        return choice;
}

Character * selectCharacter(int choice){
        if (choice == 1){
		CharacterFactory* fairyTFact = new FairyFactory();
		Character* fairy = fairyFact->createCharacter();
		cout << "You chose fairy!" << endl;
                return fairy;
		
        }else if (choice == 2){
                CharacterFactory* elfTFact = new ElfFactory();
		Character* elf = elfFact->createCharacter();
		cout << "You chose elf!" << endl;
                return elf;
        }else if (choice == 3){
                CharacterFactory* knightTFact = new KnightFactory();
		Character* knight = knightFact->createCharacter();
		cout << "You chose knight!" << endl;
                return knight;
        }else{
		cout << "No character chosen." << endl;
                return nullptr;
        }
}

void start(){
    Character * userChar = nullptr;
	  displayCharacters();
	  int choice = getChoice();
	  userChar = selectCharacter(choice);
	  if (userChar != nullptr){
      cout << "created character << choice << " successsfully" << endl;
    }
}
#endif //__START_HPP__
