#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

int genRandomNun(int num = 351) {
    return rand() % num;
}



int playGame()
{
    int max = 351;
    int randomNUM = genRandomNun(max);
    int guesses = 0;
    std::vector<int> vecGuesses;
    std::cout << "guess the number!\n";
    do {
        std::cout << "\nguess: ";
        std::cin >> guesses;
        // makes so you can only guess the same number once so once you say 10 you cant say it again
        for (int i = 0; i < vecGuesses.size(); i++) {
            if (guesses == vecGuesses[i]){
            std::cout << "you have already said that :|\n";
            continue; 
            }
        }
        // compares the guesses with the answer
        if (guesses > (max-1)) {
            std::cout << "bit too high the max number is " << max-1 << std::endl;
            continue;
        }
        if (guesses > randomNUM) std::cout << "your a bit high there!\n";
        else std::cout << "bit low aren't we?\n";
        // adds the guess to the vector
        vecGuesses.push_back(guesses);
    } while(guesses != randomNUM);
    // prints the score to the console when done
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


