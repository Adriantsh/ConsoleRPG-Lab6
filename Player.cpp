#include "Player.h"
#include <iostream>

Player::Player() {
    name = "Hero";
    health = 100;
    maxHealth = 100;
    attackPower = 10;
}

Player::Player(std::string name, int health, int attackPower) {
    this->name = name;
    this->health = health;
    this->attackPower = attackPower;
    maxHealth = health;
}

Player::~Player() {
    std::cout << "The object for Player " << name << " has been destroyed.\n";
}

void Player::takeDamage(int damage) {
    if ( damage > 0 ) {
        if ( damage <= health ) {
            health -= damage;
        }
        else {
            health = 0;
            std::cout << name << " falls to the ground, defeated.\n";
        }
    }
}

void Player::displayStatus() const {
    std::cout << name << " - HP: " << health << "/" << maxHealth << std::endl;
}