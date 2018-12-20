#ifndef PROJECT_COMMAND_H
#define PROJECT_COMMAND_H

#include "../vars/stable.h"
#include <vector>

class command {

public:
    virtual double doCommand(SymbolTable vars) = 0;
};

#endif //PROJECT_COMMAND_H
