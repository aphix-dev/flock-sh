#include "module.h"


void Module::Handle(const std::string& cmd)
{
    router(cmd);
}

void Module::router(const std::string& cmd)
{
    return;
}