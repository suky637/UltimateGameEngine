#ifndef ConnectingSocket_hpp
#define ConnectingSocket_hpp

#include <stdio.h>

#include "Socket.hpp"

namespace spp{
    class ConnectingSocket: Socket
    {
        public:
        ConnectingSocket
            (int domain, 
            int service, 
            int protocol, 
            int port, 
            u_long interface);
        int connect_to_network(int sock, struc sockaddr_in address);
    }
}

#endif