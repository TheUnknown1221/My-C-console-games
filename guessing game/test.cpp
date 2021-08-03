#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

int genRandomNun(int num = 351) {
    return rand() % num;
}



int playGame()
{
    int randomNUM = genRandomNun();
    int guesses = 0;
    std::vector<int> vecGuesses;
    std::cout << "guess the number!\n";
    do {
        std::cout << "\nguess: ";
        std::cin >> guesses;
        for (int i = 0; i < vecGuesses.size(); i++) {
            if (guesses == vecGuesses[i]){
            std::cout << "you have already said that :|\n";
            continue;
            }
        }
        if (guesses > randomNUM) std::cout << "your a bit high there!\n";
        else std::cout << "bit low aren't we?\n";
        vecGuesses.push_back(guesses);
    } while(guesses != randomNUM);
    std::cout << "score: " << vecGuesses.size();
    return (int)vecGuesses.size();
    
}

int main()
{
    bool running = true;
    int menu, x, highScore = 0;
    
    // menu for the game
    while(running)
    {
        // text menu
        std::cout << "\n1. Play Game\n2. High Score\n0. Quit\n\nMenu: ";
        std::cin >> menu;
        switch(menu) {
            case 1:
            // guessing game
                x = playGame();
                if (highScore == 0) highScore = x;
                else if (x < highScore) highScore = x;
                break;

            case 2:
            // view high score
                std::cout << "\nHigh Score: " << highScore << std::endl;
                break;

            default:
            // quit the game
                running = false;
                break;
        }
    }
}