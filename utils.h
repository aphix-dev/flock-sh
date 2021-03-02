#include <vector>
#include <iostream>

class Util
{
public:
    template<typename T>
    static void print_vector(const std::vector<T>& vector)
    {
        for(int i = 0; i < vector.size(); i ++)
        {
            std::cout << vector[i] << " ";
        }

        std::cout << std::endl;
    }
};