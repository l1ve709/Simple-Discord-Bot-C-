#include "command_manager.h"
#include <iostream>
#include <sstream>
#include "moderation/ban.h"
#include "moderation/kick.h"
#include "moderation/warn.h"
#include "fun/joke.h"
#include "fun/trivia.h"
#include "fun/meme.h"
#include "fun/poll.h"

void CommandManager::executeCommand(const std::string& command) {
    std::istringstream iss(command);
    std::string cmd;
    iss >> cmd;

    if (cmd == "/ban") {
        std::string username;
        iss >> username;
        BanCommand banCommand;
        banCommand.execute(username);
    } else if (cmd == "/kick") {
        std::string username;
        iss >> username;
        KickCommand kickCommand;
        kickCommand.execute(username);
    } else if (cmd == "/warn") {
        std::string username, reason;
        iss >> username >> reason;
        WarnCommand warnCommand;
        warnCommand.execute(username, reason);
    } else if (cmd == "/joke") {
        JokeCommand jokeCommand;
        jokeCommand.tellJoke();
    } else if (cmd == "/trivia") {
        TriviaCommand triviaCommand;
        triviaCommand.askQuestion();
    } else if (cmd == "/meme") {
        MemeCommand memeCommand;
        memeCommand.sendMeme();
    } else if (cmd == "/poll") {
        std::string pollQuestion;
        std::getline(iss, pollQuestion);
        PollCommand pollCommand;
        pollCommand.createPoll(pollQuestion);
    } else {
        std::cout << "Unknown command: " << command << std::endl;
    }
}

void CommandManager::addCommand(const std::string& command, const std::string& description) {
    commands[command] = description;
    std::cout << "Command added: " << command << " - " << description << std::endl;
}
