#include "lexer.h"
#include "utils.h"
#include <cstring>
#include <vector>

namespace lexer {
    void parseln(std::string ln) {
        // char* cstr = new char;
        // strcpy(cstr, ln.c_str());
        // auto split = strtok(cstr, " ");

        // std::cout << split << std::endl;

        std::vector<std::string> tokens (1);
        int curToken = 0;

        for(int i = 0; i < (int)ln.length(); i ++)
        {
            char cur = ln[i];
            if(cur == ' ') {
                tokens.push_back("");
                curToken++;
                continue;
            }
            tokens[curToken] += cur;
        }

        Util::print_vector(tokens);

        auto module = tokens[0];
        auto cmd = tokens[1];
    }
}