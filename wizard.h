#ifndef WIZARD_H  
#define WIZARD_H  
  
#include "player.h"  
  
class Wizard : public Player {  
private:  
    int mana;  
  
public:  
    Wizard(std::string name, int health, int damage, int mana);  

    void attack(Player* target) override {
        castSpell(target);   
    }
  
    void castSpell(Player* target);  
};  
  
#endif