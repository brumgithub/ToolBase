#include <iostream>
#include <vector>
#include <string>

#include "commands/CommandManager.h"
#include "commands/impl/Commands.h"

int main(int argc, char** argv) {

    // args setup
    std::vector<std::string> args;
    for (int i = 0; i < argc; i++)
    {
        args.emplace_back(argv[i]);
    }
    args.erase(args.begin());

    // commands setup
    std::vector<Command*> cmds = {
            new ExampleCommand("-e", "-e", "Example command."),
    };
    CommandManager commandManager(cmds, args);

    // help command
    if (args.empty() || args.at(0) == "help" || args.at(0) == "-h" || args.at(0) == "?" ||
        args.at(0) == "--help")
    {
        commandManager.Help();
        return 0;
    }

    commandManager.Run();
    return 0;
}
