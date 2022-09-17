#include "Command.h"

Command::Command(const std::string &cmd, const std::string &usage, const std::string &description)
{
    this->cmd = cmd;
    this->usage = usage;
    this->description = description;
}

std::string Command::GetCmd()
{
    return this->cmd;
}

std::string Command::GetUsage()
{
    return this->usage;
}

std::string Command::GetDescription()
{
    return this->description;
}

bool Command::Run(const std::vector<std::string>& args)
{
    std::cout << "not implemented" << std::endl;
    return false;
}
