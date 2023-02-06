#include "database.h"
#include "http_server.h"
#include <iostream>

int main()
{
    std::cout << "Number of Maps: " << getNumberOfMaps() << std::endl;
    startListening(8080);
    return 0;
}
