#ifndef __TROLLFACTORY_HPP__
#define __TROLLFACTORY_HPP__

#include "CharacterFactory.hpp"
#include "troll.hpp"
#include "character.hpp"

class TrollFactory : public CharacterFactory {
        private:
                //Weapons* w = createWeapon();
                //Defense* d = createDefense();
        	Weapons* w;
		Defense* d;
	protected:
		Weapons* createWeapon(){
			return new Axe();
		}
		Defense* createDefense(){
			return new IronGauntlet();
		}
	public:
		~TrollFactory(){
                        delete w;
                        delete d;
                }

                Character* createCharacter() {
                        d = createDefense();
                        w = createWeapon();
                        Character* charac = new Troll(w,d);
                        return charac;
                }
		
		Weapons* getWeapon(){
                        return w;
                }

                Defense* getDefense(){
                        return d;
                }
};

#endif