#include "module_registry.h"
#include "custom/fsh.h"

void ModuleRegistry::InitModuleRegistry()
{
    AddModule( FSH() ); 
}

void ModuleRegistry::AddModule(const Module& M)
{
    modules.push_back(M);
}