#include "bot.h"
#include <iostream>
#include "commands/command_manager.h"

void Bot::start() {
    std::cout << "Bot is starting." << std::endl;
    CommandManager commandManager;
    
    commandManager.addCommand("/ban", "Ban a user from the server");
    commandManager.addCommand("/kick", "Kick a user from the server");
    commandManager.addCommand("/warn", "Warn a user for a specific reason");
    commandManager.addCommand("/joke", "Tell a joke");
    commandManager.addCommand("/trivia", "Ask a trivia question");
    
    commandManager.executeCommand("/ban user1");
    commandManager.executeCommand("/kick user2");
    commandManager.executeCommand("/warn user3 spam");
    commandManager.executeCommand("/joke");
    commandManager.executeCommand("/trivia");
}
