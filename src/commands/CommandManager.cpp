#include "CommandManager.h"

void CommandManager::Run()
{
    bool cmdFound = false;
    // finds correct command
    for (auto cmd : commands)
    {
        if (cmd->GetCmd() == args.at(0))
        {
            cmdFound = true;
            if (!cmd->Run(std::vector<std::string>(args.begin() + 1, args.end())))
            {
                std::cout << "Usage: ToolBase.exe " << cmd->GetUsage() << std::endl;
            }
            break;
        }
    }

    if (!cmdFound)
        this->Help();
}

void CommandManager::Help()
{
    std::cout << "Prefix:\t\tDescription:\n";
    for (auto cmd : commands)
    {
        std::cout << cmd->GetCmd() << "\t\t" << cmd->GetDescription() << std::endl;
    }
    std::cout << std::endl << "https://github.com/brumgithub/ToolBase" << std::endl;
}

CommandManager::~CommandManager()
{
    for (auto cmd : commands)
    {
        delete cmd;
    }
}
