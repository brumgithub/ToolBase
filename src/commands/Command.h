#pragma once

#include <iostream>
#include <vector>
#include <string>

class Command {
public:
    explicit Command(const std::string& cmd, const std::string& usage, const std::string& description);
    std::string GetCmd();
    std::string GetDescription();
    std::string GetUsage();
    virtual bool Run(const std::vector<std::string>& args);
private:
    std::string cmd, usage, description;
};
