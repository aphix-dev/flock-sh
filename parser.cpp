#include "parser.h"

namespace parser {
    void parse_tokens(const std::vector<std::string>& tokens)
    {
        // tokens[0] tells us the module to route to
        auto module = tokens[0];
        // tokens[1] tells us the command we want to call in the module
        auto cmd = tokens[1];
        
    }
};