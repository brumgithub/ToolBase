#pragma once

#include <iostream>
#include <utility>
#include <vector>

#include "Command.h"

class CommandManager {
public:
    CommandManager(std::vector<Command*> commands, std::vector<std::string> args)
    : commands(std::move(commands)), args(std::move(args)) {}
    ~CommandManager();
    void Run();
    void Help();
private:
    std::vector<Command*> commands;
    std::vector<std::string> args;
};
