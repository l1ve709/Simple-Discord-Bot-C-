#include "logger.h"
#include <iostream>
#include <fstream>
#include <ctime>

void Logger::log(const std::string& message) {
    std::ofstream logFile("bot.log", std::ios_base::app);
    if (logFile.is_open()) {
        std::time_t now = std::time(nullptr);
        logFile << std::ctime(&now) << ": " << message << std::endl;
        logFile.close();
    }
    std::cout << "[LOG] " << message << std::endl;
}
