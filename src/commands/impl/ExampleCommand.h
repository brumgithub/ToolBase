#pragma once

#include "../Command.h"

class ExampleCommand : public Command {
    using Command::Command;
    bool Run(const std::vector<std::string>& args) override;
};