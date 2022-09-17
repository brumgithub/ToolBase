#include "ExampleCommand.h"

bool ExampleCommand::Run(const std::vector<std::string>& args)
{
    if (!args.empty()) return false;

    std::cout << "Example Command" << std::endl;
    return true;
}
