#include <iostream>

int main(int argc , char **argv)
{
    int j;
    int i;

    char c;
    j = 1;
    if (argc < 2)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while(argv[j])
        {
            i = 0;
            while(argv[j][i])
            {
                c = toupper(argv[j][i]);
                std::cout << c;
                i++;
            }
            i = 0;
            if (!(j == argc - 1))
                std::cout << " ";
            j++;
        }
    }
}