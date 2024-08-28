#ifndef WARRIOR_H  
#define WARRIOR_H  

#include "player.h"  

class Warrior : public Player {
private:
    std::string weapon;

public:
    Warrior(std::string name, int health, int damage, std::string weapon);

    void attack(Player* target) override {
        swingWeapon(target);  
    }

    void swingWeapon(Player* target);
};

#endif