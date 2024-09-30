#include "trivia.h"
#include <iostream>
#include <vector>
#include <cstdlib>

void TriviaCommand::askQuestion() {
    std::vector<std::pair<std::string, std::string>> questions = {
        {"What is the capital of France?", "Paris"},
        {"What is 2 + 2?", "4"},
        {"What is the largest planet in our solar system?", "Jupiter"}
    };

    int index = rand() % questions.size();
    std::cout << "Trivia: " << questions[index].first << std::endl;
}
