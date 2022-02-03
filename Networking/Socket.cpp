#include "Socket.hpp"

// Default constructor

spp::Socket::Socket(int domain, 
int service, 
int protocol, 
char* port,
u_long interface,
)
{
    // Define address structure
    address.sin_family = domain;
    address.sin_port = port;
    address.sin_addr.s_addr = htonl(interface);
    // Establish socket
    sock = socket(domain,service,protocol);
    test_connection(sock);
    // Establish Connection
    connection = connect_to_network(sock, address);
    test_connection(connect_to_network);
}

// Test Connection virtual function

void spp::Socket::test_connection(int item_to_test)
{
    // Comfirm that the socket or connection has bin properly established
    if (item_to_test < 0)
    {
        perror("Failed To Connect...");
        exit(EXIT_FAILURE);
    }
}

// Getter functions

struct sockaddr_in spp::Socket::get_address()
{
    return address;
}

int spp::Socket::get_sock()
{
    return sock;
}

int spp::Socket::get_connection()
{
    return connection;
}

// Setter functions
void spp::Socket::set_connection(int connection_)
{
    connection = connection_;
}