#include <iostream>
#include <cstdlib>
#include <ctime>

void infoInput(std::string name, std::string firstName, std::string lastName, std::string email, std::string welcomeChoice) {
    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
    name = firstName + " " + lastName;
    std::cout << "Email: ";
    std::cin >> email;

    std::cout << "Welcome! " + name + "." << std::endl;
}

void welcomeCheck(std::string welcomeChoice, std::string name, std::string firstName, std::string lastName, std::string email) {
    while (true) {
        if (welcomeChoice == "1" || welcomeChoice == "Sign In")  {
            std::cout << "Please enter your information:" << std::endl;
            infoInput(name, firstName, lastName, email, welcomeChoice);
            break;
        } else if (welcomeChoice == "2" || welcomeChoice == "Exit") {
            std::cout << "Have a nice day!" << std::endl;
            break;
        } else {
            std::cout << "Invalid Input" << std::endl;
            std::cout << "Please enter a valid option (1/Sign In or 2/Exit): " << std::endl;
            std::cin >> welcomeChoice;
        }
    }
} 


int main() {
    std::string name;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string welcomeChoice;
    std::cout << "Welcome!" << std::endl << "1: Sign In" << std::endl << "2: Exit" << std::endl;
    std::cin >> welcomeChoice;

    welcomeCheck(welcomeChoice, name, firstName, lastName, email);
}