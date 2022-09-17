cmake_minimum_required(VERSION 3.23)
project(ToolBase)

set(CMAKE_CXX_STANDARD 14)

add_executable(
        ToolBase
        src/main.cpp
        src/commands/Command.cpp
        src/commands/Command.h
        src/commands/CommandManager.cpp
        src/commands/CommandManager.h
        src/commands/impl/Commands.h src/commands/impl/ExampleCommand.cpp src/commands/impl/ExampleCommand.h)
