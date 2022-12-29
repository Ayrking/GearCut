//
// Created by meltwin on 22/09/22.
//

#include "command.h"

Command getCommand() {
    // Input command
    string in;
    cin >> in;

    // Save in a Command Struct
    Command c;
    c.name = in;

    return c;
}