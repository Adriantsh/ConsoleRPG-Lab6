#include "Player.h"

int main()  {
    Player hero;
    Player wizard("Frog", 120, 15);

    hero.displayStatus();
    wizard.displayStatus();

    hero.takeDamage(25);
    hero.displayStatus();

    wizard.takeDamage(150);
    wizard.displayStatus();

    return 0;
}