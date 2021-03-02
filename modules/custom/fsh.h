#pragma once

#include "../module.h"

class FSH : public Module
{
public:
    virtual void router(const std::string& cmd) override;
};