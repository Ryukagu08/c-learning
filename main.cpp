#include <iostream>
#include <cstdlib>
#include <ctime>

void randomCheck(int randomNum, int lives) {
    int guess;
    while (lives > 0) {
        std::cin >> guess;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(10000, '\n');
            std::cout << "Invalid input, please enter a number between 0 and 10." << std::endl;
            continue;
        }

        if (guess == randomNum) {
            std::cout << "Congrats! You guessed the number: " << randomNum << std::endl;
            break;
        } else if (guess >= 0 && guess <= 10) {
            lives--;
            if (lives > 0) {
                std::cout << "Wrong Answer! " << lives << " lives left" << std::endl;
            } else {
                std::cout << "Out of lives, game over! The correct number was " << randomNum << "." << std::endl;
            }
        } else {
            std::cout << "Invalid input, please enter a number between 0 and 10." << std::endl;
        }
    }
}

int main() {
    srand(time(0));
    int randomNum = rand() % 11; // Random number (0 to 10)
    // std::cout << "Random number: " << randomNum << std::endl;

    int lives = 5;
    std::cout << "Guess a number between 0 and 10. You have " << lives << " lives left." << std::endl;
    randomCheck(randomNum, lives);
}
