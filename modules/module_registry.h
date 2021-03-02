#pragma once

#include <vector>

class Module;

class ModuleRegistry
{
public:
   std::vector<Module> modules; 

   void AddModule(const Module& M);

   void InitModuleRegistry();
};