//
// Created by meltwin on 22/09/22.
//
#include "main.h"

/**
 * @brief Execute main loop iteration
 * @return
 */
bool loop() {
    // Get command
    Command c = getCommand();

    if (c.name == "exit")
        return true;

    return false;
}


int main() {
    // Starting Messages
    std::cout << NAME << " - " << VERSION << " (by " << AUTHOR << ")" << std::endl;
    std::cout << "You can enter your commands below. Type the command help to have a list of the available commands." << std::endl;
    std::cout << "Please go at https://github.com/Ayrking/GearCut/wiki for more information." << std::endl;

    // Launching Client
    bool exit = false;
    while (!exit) {
        std::cout << ">> ";
        exit = loop();
    }
    return 0;
}