#include <iostream>
#include <string>
using namespace std;

class GameCharacter {
private:
    string name;
    int health;
    int maxHealth;

public:
    // Constructor: health starts at maxHealth
    GameCharacter(string name, int maxHealth) {
        this->name = name;
        this->maxHealth = maxHealth;
        this->health = maxHealth;
    }

    // Getters
    string getName() const {
        return name;
    }

    int getHealth() const {
        return health;
    }

    // Setter: subtract damage, clamp to 0
    void takeDamage(int damage) {
        health -= damage;
        if (health < 0) {
            health = 0;
            cout << "Character has fainted." << endl;
        }
    }

    // Setter: add health, clamp to maxHealth
    void heal(int amount) {
        health += amount;
        if (health > maxHealth) {
            health = maxHealth;
        }
    }
};

int main() {
    GameCharacter hero("Arthur", 100);
    hero.takeDamage(120);
    hero.heal(50);
    hero.heal(200);
    cout << "Final Health: " << hero.getHealth() << endl;

    return 0;
}
