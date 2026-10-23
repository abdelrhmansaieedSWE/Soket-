#ifndef SOCK_H
#define SOCK_H
#include <cstdlib>
#include<sys/types.h>
#include<sys/socket.h>
#include <sys/un.h>
#include <stdlib.h>
#include<arpa/inet.h>
#include<netinet/in.h>
#include <unistd.h>
#include <string>
 namespace my {
    class sock
    {
        public:
        sock();
        ~sock();
        int creat_socket();
        int bind_socket(int port);
        int listin_socket();
        int accept_socket();
        int write_socket();
        int read_socket(char ref[]);
       


        std::string massage;

        private:
    int df = -1;
    int afd = -1;
    int protocol = 0;
    int lis = -1;
    struct sockaddr_in my_addr{};
    struct sockaddr_in client_addr{};
    };
 
 }


#endif // 
