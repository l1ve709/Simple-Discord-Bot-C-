#include "ban.h"
#include <iostream>

void BanCommand::execute(const std::string& username) {
    std::cout << username << " has been banned." << std::endl;
}
