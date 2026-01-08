#include <iostream>
#include <cctype>

int main(int argc, char **argv)
{
    if (argc == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return 0;
    }
    for (int i = 1; i < argc; i++)
    {
        for (int j = 0; argv[i][j]; j++)
        {
            unsigned char uc = static_cast<unsigned char>(argv[i][j]);
            int upper_int = std::toupper(uc);
            char upper_char = static_cast<char>(upper_int);
            std::cout << upper_char;
        }

        if (i < argc -1)
            std::cout << ' ';
    }
        std::cout << std::endl;
    return (0);
}