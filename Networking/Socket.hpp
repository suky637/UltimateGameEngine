#ifndef Socket_hpp
#define Socket_hpp

#include <stdio.h>
#include <WinSock2.h>
#include <winsock.h>
#include <iostream>

namespace spp
{
    class Socket {
        private:
            struct sockaddr_in address;        
            int sock;
            int connection;
        public:
            // Constructor
            Socket(int domain, int service, int protocol, char* port, u_long interface);
            // Virtual function to confirm to connect to the network
            virtual int connect_to_network(int sock, struct sockaddr_in address) = 0;
            // Function to test sockets and connection
            void test_connection(int);
            // Getter function
            struct sockaddr_in get_address();
            int get_sock();
            int get_connection();

            // Setter function
            void set_connection(int connection_);
    };
}

#endif