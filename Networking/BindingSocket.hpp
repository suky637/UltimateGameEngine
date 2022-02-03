#ifndef BindingSocket_hpp
#define BindingSocket_hpp
#include <stdio.h>
#include "Socket.hpp"

namespace spp
{
    class BindingSocket: public Socket
    {
        public:
            // Contructor
            BindingSocket
            (int domain, 
            int service, 
            int protocol, 
            int port, 
            u_long interface);

            // Virtual funtion from parent
            int connect_to_network(int sock, struc sockaddr_in address);
    }
}

#endif