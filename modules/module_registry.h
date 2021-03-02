#include "module.h"
#include <vector>

class ModuleRegistry
{
public:
   std::vector<Module> modules; 
   void InitModuleRegistry();
};