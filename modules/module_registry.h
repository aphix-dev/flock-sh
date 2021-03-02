#pragma once

#include "module.h"
#include <vector>

class ModuleRegistry
{
public:
   std::vector<Module> modules; 

   void AddModule(const Module& M);

   void InitModuleRegistry();
};