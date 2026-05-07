#pragma once
#include <string>

class Player {
private:
    std::string name;
    int health;
    int maxHealth;
    int attackPower;
public:
    Player();
    Player(std::string, int, int);
    ~Player();
    void takeDamage(int);

    std::string getName() const 
        { return name; }
    int getHealth() const 
        { return health; }
    int getMaxHealth() const
        { return maxHealth; }
    int getAttackPower() const
        { return attackPower; }

    void displayStatus() const;
};