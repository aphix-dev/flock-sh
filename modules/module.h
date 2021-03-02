#include <string>
#include <vector>

class Module
{
public:
    std::string prefix;

    void Handle(const std::vector<std::string>& tokens);

    virtual void router(const std::string& cmd);
};