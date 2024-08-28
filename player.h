#ifndef PLAYER_H  
#define PLAYER_H  

#include <string>  

class Player {
protected:
    std::string name;
    int health;
    int damage; 

public:
    Player(std::string name, int health, int damage);
    virtual ~Player() {}

    std::string getName() const { return name; }
    int getHealth() const { return health; }
    virtual void takeDamage(int amount) { health -= amount; }

   
    virtual void attack(Player* opponent) = 0;
};

#endif