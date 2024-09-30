#ifndef FUN_H
#define FUN_H

class JokeCommand {
public:
    void tellJoke();
};

class TriviaCommand {
public:
    void askQuestion();
};

class MemeCommand {
public:
    void sendMeme();
};

class GameCommand {
public:
    void startGame();
};

class PollCommand {
public:
    void createPoll(const std::string& question);
    void vote(const std::string& option);
};

#endif
