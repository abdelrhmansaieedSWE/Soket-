
    #include <iostream>
#include <iterator>
#include <locale>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>
    #include "sock.hpp"

my::sock::sock()
{
    std::cout<<"socket is created \n";
}
        my::sock::~sock()
        {
            std::cout<<"socket is deleted \n";
            close(df);
        }
        int my::sock::  creat_socket()
        {
            
     df = socket(AF_INET, SOCK_STREAM, protocol);
            return df;
        }
       int my::sock::bind_socket(int port)
{
    int opt = 1;

    setsockopt(df, SOL_SOCKET, SO_REUSEADDR, &opt, sizeof(opt));

    my_addr.sin_family = AF_INET;
    my_addr.sin_addr.s_addr = INADDR_ANY;
    my_addr.sin_port = htons(port);

    int stat = bind(
        df,
        (struct sockaddr*)&my_addr,
        sizeof(struct sockaddr_in)
    );

    if (stat < 0)
    {
        perror("bind");
    }

    return stat;
}
        int my::sock:: listin_socket()
        {
            int stat=1;
            stat=listen(df,  128);

            return stat;
        }
        int my::sock:: accept_socket()
        {
            int stat=1;
  

            socklen_t addr_len = sizeof(client_addr);
        afd = accept(df, (struct sockaddr *)&client_addr, &addr_len);
            return afd;
        }
        int  my::sock:: write_socket()
        {
           std:: cout<<"write a massage : \n";
            std::cin>>massage; 
            return write(afd, massage.c_str(), massage.length()) ;        
            
        }
    int my::sock::read_socket(char ref[])
{
    return read(afd, ref, 1023);
}
            