#include <iostream>
#include <functional>
#include <string>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <random>

void spanishVer() {
    std::cout << "Ordena!" << std::endl;
    std::vector<std::string> words = {"suelo", "cabeza", "dientes", "nevera", "torre", "zapato", "pizarra"};
    
    std::random_device rd;
    std::mt19937 g(rd());
    
    int randomIndex = g() % words.size();
    std::string selectedWord = words[randomIndex];
    
    std::shuffle(selectedWord.begin(), selectedWord.end(), g);
    
    std::cout << "Reordena esta palabra: " << selectedWord << std::endl;

    std::string guess;
    std::cin >> guess;

    if (guess == words[randomIndex]) {
        std::cout << "Felicidades! Has ordenado la palabra correctamente." << std::endl;
    } else {
        std::cout << "Incorrecto! La palabra era " + words[randomIndex] << std::endl;
    }
}

void englishVer() {
    std::cout << "Unscramble!" << std::endl;
    std::vector<std::string> words = {"floor", "head", "teeth", "fridge", "tower", "shoe", "board"};
    
    std::random_device rd;
    std::mt19937 g(rd());
    
    int randomIndex = g() % words.size();
    std::string selectedWord = words[randomIndex];
    
    std::shuffle(selectedWord.begin(), selectedWord.end(), g);
    
    std::cout << "Unscramble this word: " << selectedWord << std::endl;

    std::string guess;
    std::cin >> guess;

    if (guess == words[randomIndex]) {
        std::cout << "Congrats! You unscrambled the word." << std::endl;
    } else {
        std::cout << "Incorrect! The word was " + words[randomIndex] << std::endl;
    }
}

int main() {
    std::cout << "Please choose a language: " << std::endl << "1 - English" << std::endl << "2 - Español" << std::endl;
    std::string languageChoice;
    std::cin >> languageChoice;
    
    if (languageChoice == "1" || languageChoice == "English") {
        englishVer();
    } else if (languageChoice == "2" || languageChoice == "Español") {
        spanishVer();
    }
}
