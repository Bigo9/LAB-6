#include <iostream>
#include "Player.h"

int main()

{

         Player hero;
          Player wizard("Gandalf", 120, 15);     

 std::cout << std::endl;

    std::cout << " ---- Initial Status ---- " << std::endl;
    hero.displayStatus();
    wizard.displayStatus();

    std::cout << std::endl;

    std::cout << "--- Hero takes damage! ---" << std::endl;
    hero.takeDamage(25);
    hero.displayStatus();

    std::cout << std::endl;

    std::cout << " ---- Wizard takes damage! ---- " << std::endl;
    wizard.takeDamage(150);
    wizard.displayStatus();

    std::cout << std::endl;
        
    return 0;
}
