#pragma once

#include <string>
#include <vector>

class Module
{
public:
    std::string prefix;

    void Handle(const std::string& cmd);

    virtual void router(const std::string& cmd);
};