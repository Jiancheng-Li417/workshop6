#include "wizard.h"  
#include <iostream>  

Wizard::Wizard(std::string name, int health, int damage, int mana)
    : Player(name, health, damage), mana(mana) {}

void Wizard::castSpell(Player* target) {
    if (mana > 0) {
        std::cout << name << " casts a spell on " << target->getName() << "!" << std::endl;
        target->takeDamage(damage);
        mana -= 10; 
        std::cout << name << " has no mana to cast a spell!" << std::endl;
    }
}