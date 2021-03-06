#ifndef __ELF_HPP__
#define __ELF_HPP__

#include "character.hpp"
#include "BowAndArrow.hpp"
#include "magic_ruby.hpp"

class Elf: public Character{
    public:
    	Elf(): Character(){
            weapon = new BowAndArrow();
            defense = new MagicRuby();
	    attack = nullptr;
    	}

	Elf(Weapons* w, Defense* d) : Character() {
		weapon = w;
            	defense = d;
            	attack = nullptr;
	}

	~Elf(){}
};

#endif //__ELFF_HPP__
