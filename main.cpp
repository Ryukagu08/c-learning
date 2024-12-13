#include <iostream>
#include <functional>
#include <string>

// Function Prototypes
void infoInput(std::string& name, std::string& firstName, std::string& lastName, std::string& email);
void welcomeCheck(std::string& welcomeChoice, std::string& name, std::string& firstName, std::string& lastName, std::string& email);
void menuChoice(std::string& name, std::string& firstName, std::string& lastName, std::string& email);
void calculator();
void performOperation(const std::string& choice, int firstInput, int secondInput);

// Calculator Function
void calculator() {
    std::cout << "Basic Calculator" << std::endl;
    std::cout << "Choose an operation:" << std::endl;
    std::cout << "1: Add" << std::endl;
    std::cout << "2: Subtract" << std::endl;
    std::cout << "3: Multiply" << std::endl;
    std::cout << "4: Divide" << std::endl;

    std::string choice;
    std::cin >> choice;

    int firstInput = 0, secondInput = 0;
    std::cout << "Enter the first number: ";
    std::cin >> firstInput;
    std::cout << "Enter the second number: ";
    std::cin >> secondInput;

    if (choice == "4" && secondInput == 0) {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
        return;
    }

    performOperation(choice, firstInput, secondInput);
}

void performOperation(const std::string& choice, int firstInput, int secondInput) {
    if (choice == "1") {
        std::cout << "Result: " << firstInput + secondInput << std::endl;
    } else if (choice == "2") {
        std::cout << "Result: " << firstInput - secondInput << std::endl;
    } else if (choice == "3") {
        std::cout << "Result: " << firstInput * secondInput << std::endl;
    } else if (choice == "4") {
        std::cout << "Result: " << firstInput / secondInput << std::endl;
    } else {
        std::cout << "Invalid operation choice." << std::endl;
    }
}

// Information Input Function
void infoInput(std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
    std::cout << "First Name: ";
    std::cin >> firstName;
    std::cout << "Last Name: ";
    std::cin >> lastName;
    name = firstName + " " + lastName;
    std::cout << "Email: ";
    std::cin >> email;
    std::cout << "Welcome, " << name << "!" << std::endl;
}

// Welcome Check Function
void welcomeCheck(std::string& welcomeChoice, std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
    while (true) {
        if (welcomeChoice == "1") {
            std::cout << "Please enter your information:" << std::endl;
            infoInput(name, firstName, lastName, email);
            menuChoice(name, firstName, lastName, email);
            break;
        } else if (welcomeChoice == "2") {
            std::cout << "Goodbye! Have a nice day." << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please enter 1 (Sign In) or 2 (Exit): ";
            std::cin >> welcomeChoice;
        }
    }
}

// Menu Choice Function
void menuChoice(std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
    while (true) {
        std::cout << "<< MENU >>\n1: Calculator\n2: Update Info\n3: Exit" << std::endl;
        std::string menuInput;
        std::cin >> menuInput;

        if (menuInput == "1") {
            calculator();
        } else if (menuInput == "2") {
            infoInput(name, firstName, lastName, email);
        } else if (menuInput == "3") {
            std::cout << "Exiting... Goodbye!" << std::endl;
            break;
        } else {
            std::cout << "Invalid choice. Please try again." << std::endl;
        }
    }
}

// Main Function
int main() {
    std::string name;
    std::string firstName;
    std::string lastName;
    std::string email;
    std::string welcomeChoice;

    std::cout << "Welcome!\n1: Sign In\n2: Exit" << std::endl;
    std::cin >> welcomeChoice;
    welcomeCheck(welcomeChoice, name, firstName, lastName, email);

    return 0;
}
