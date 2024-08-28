#include "warrior.h"  
#include <iostream>  

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    : Player(name, health, damage), weapon(weapon) {}

void Warrior::swingWeapon(Player* target) {
    std::cout << name << " swings " << weapon << " at " << target->getName() << "!" << std::endl;
    target->takeDamage(damage);
}