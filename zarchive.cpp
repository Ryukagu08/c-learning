// #include <iostream>

// int main() { 
//   std::cout << "Hello World!\n";
//   std::cout << "Hola \nMundo!\n";
// }

// int main() { 
//   bool isOn = true;
//   bool isGameOver = false;

//   std::cout << isOn << std::endl;
//   std::cout << isGameOver << std::endl;

//   isGameOver = true;
//   std::cout << isGameOver << std::endl;
// }

// int main() {
//   int age = 28;

//   std::cout << age;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   // int age = 28;

//   int health = 0;
//   std::cout << health << std::endl;
//   health = 50;
//   std::cout << health << std::endl;
//   health = -50;
//   std::cout << health << std::endl;

//   uint age = 28;
//   std::cout << age << std::endl;
//   // uint nAge = -28;
//   // std::cout << nAge << std::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   double price = 19.99;
//   std::cout << price << std::endl;
//   double balance = 0;
//   std::cout << balance << std::endl;
//   balance = 100;
//   std::cout << balance << std::endl;
//   balance = -5.95;
//   std::cout << balance << srd::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   char a = 'a';
//   std::cout << a << std::endl;
//   char one = '1';
//   std::cout << one << std::endl;
//   char comma = ',';
//   std::cout << comma << std::endl;
//   int numOne = 1;
//   std::cout << numOne << std::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   char chCapR = 'R';
//   char chO = 'o';
//   char chB = 'b';
//   char chE = 'e';
//   char chR = 'r';
//   char chT = 't';

//   std::cout << chCapR << chO << chB << chE << chR << chT << chO << std::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::string hola = "Hello";
//   std::string mundo = "World";
//   char space = ' ';
//   char exclamation = '!';
//   std::cout << hola << space << mundo << exclamation << std::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::string name = "Roberto";
//   bool isMyName = false;
//   if (name == "Roberto") {
//     isMyName = true;
//     std::cout << name << " is my name" << std::endl;
//     std::cout << isMyName << std::endl;
//   } else {
//     isMyName = false;
//     std::cout << name << " is not my name" << std::endl;
//     std::cout << isMyName << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// int main() {
//   const char cpR = 'R';
//   const char chO = 'o';
//   const char chB = 'b';
//   const char chE = 'e';
//   const char chR = 'r';
//   const char chT = 't';

//   bool printName = true;

//   if (printName == true) {
//     std::cout << "My name is " << cpR << chO << chB << chE << chR << chT << chO << std::endl;
//   } else {
//     std::cout << "My name is not printed" << std::endl;
//   }

// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::cout << "Type your name" << std::endl;
//   std::string name;
//   std::cin >> name;
//   bool isNameCorrect;

//   if (name=="Roberto") {
//     std::cout << name << " is correct" << std::endl;
//     isNameCorrect = true;
//   } else {
//     std::cout << name << " is not correct." << std::endl << "Name should be Roberto" << std::endl;
//     isNameCorrect = false;
//   }
//   if (isNameCorrect == true) {
//     std::cout << "You are " << name << std::endl << "Welcome!" << std::endl;
//   } else {
//     std::cout << "You are not Roberto, you are " << name << std::endl << "You are not welcome!" << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::string username;
//   std::cout << "Enter your name: " << std::endl;
//   std::cin >> username;
//   std::string email;
//   std::cout << "Enter your email: " << std::endl;
//   std::cin >> email;

//   std::string action;
//   std::cout << "What would you like to check?" << std::endl << "1. Email " << std::endl << "2. Name" << std::endl;
//   std::cin >> action;

//   if (action == "Email") {
//     std::cout << "Your email is: " << email << std::endl;
//   } else if (action == "Name") {
//     std::cout << "Your name is: " << username << std::endl;
//   } else {
//     std::cout << "Invalid option" << std::endl << "Options; " << "1. Email " << "2. Name" << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::string name1;
//   std::string name2;
//   int age;
//   std::cout << "Type your full name:" << std::endl;
//   std::cin >> name1 >> name2;
//   std::cout << "Type your age:" << std::endl;
//   std::cin >> age;
//   std::cout << "Welcome " << name1 << " " << name2 << std::endl;
//   std::cout << "Would you like to change your name or age?" << std::endl << "1: yes" << std::endl << "2: no" << std::endl;
//   std::string answer;
//   std::cin >> answer;
//   std::string answerYes;
//   if (answer == "1") {
//     std::cout << "1: name" << std::endl << "2: age" << std::endl;
//     std::cin >> answerYes;
//   } else {
//     std::cout << "Okay, goodbye" << std::endl;
//   }
//   if (answerYes == "1") {
//     std::cout << "Type your full name:" << std::endl;
//     std::cin >> name1 >> name2;
//   } else if (answerYes == "2") {
//     std::cout << "Type you age:" << std::endl;
//     std::cin >> age;
//   } else {
//     std::cout << "Invalid option" << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// int main() {
//   int age = 16;
//   const int increment = 1;
//   age = age + increment;
//   std::cout << age << std::endl;
//   int modulusAge = (age - increment) % 7;
//   std::cout << modulusAge << std::endl;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   int userInput;
//   std::cout << "Type a number to check if is divisible by five:" << std::endl;
//   std::cin >> userInput;
//   if (userInput % 5 == 0) {
//     std::cout << "Yes, " << userInput << " is divisible by five." << std::endl;
//   } else {
//     std::cout << "No, " << userInput << " is not divisible by five." << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// #include <iostream>
// #include <limits>

// void checkDivisibility(int divisor) {
//   int userInput;
//   std::cout << "Type a number to check if it is divisible by " << divisor << ":" << std::endl;
//   std::cin >> userInput;

//   if (std::cin.fail()) {
//     std::cin.clear();
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "Invalid input! Please enter a valid number." << std::endl;
//     return;
//   }

//   if (userInput % divisor == 0) {
//     std::cout << "Yes, " << userInput << " is divisible by " << divisor << std::endl;
//   } else {
//     std::cout << "No, " << userInput << " is not divisible by " << divisor << std::endl;
//   }
// }

// int main() {
//   int userChoice;
//   std::cout << "Choose what number you want to check its divisor: " << std::endl;
//   std::cout << "- 3" << std::endl << "- 5" << std::endl << "- 7" << std::endl << "- 9" << std::endl << ": ";
//   std::cin >> userChoice;

//   if (std::cin.fail()) {
//     std::cin.clear();
//     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//     std::cout << "Invalid input! Please enter a valid number." << std::endl;
//     return 0;
//   }

//   switch (userChoice) {
//     case 3:
//     case 5:
//     case 7:
//     case 9:
//       checkDivisibility(userChoice);
//       break;
//     default:
//       std::cout << "Invalid option" << std::endl;
//   }

//   return 0;
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::cout << "Type your name and surname:" << std::endl;
//   std::string name;
//   std::string surname;
//   std::cin >> name >> surname;
//   std::cout << "Welcome! Do you want your name or surname to display first?" << std::endl << "1: name" << std::endl << "2: surname" << std::endl;
//   int answer;
//   std::cin >> answer;
//   if (answer == 1) {
//     std::cout << "Your username is: " << name + " " + surname << std::endl;
//   } else if (answer == 2) {
//     std::cout << "Your username is: " << surname + " " + name << std::endl;
//   } else {
//     std::cout << "Invalid option" << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// int main() {
//   std::cout << "Type your name." << std::endl;
//   std::string name;
//   std::cin >> name;
//   std::cout << "Type your surname." << std::endl;
//   std::string surname;
//   std::cin >> surname;
//   name += " " + surname;
//   std::cout << "Welcome!" << name << std::endl;
// }



//________________________________________________________________________________________________________________________



// void result(int firstInput, int secondInput, std::function<int(int, int)> op) {
//   std::cout << "First Input: ";
//   std::cin >> firstInput;
//   std::cout << "Second Input: ";
//   std::cin >> secondInput;
//   std::cout << "Result is: " << op(firstInput, secondInput) << std::endl;
// }

// void operation(std::string choice, int firstInput, int secondInput) {
//   if (choice == "1" || choice == "add") {
//     std::function<int(int, int)> op = std::plus<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "2" || choice == "subtract") {
//     std::function<int(int, int)> op = std::minus<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "3" || choice == "multiply") {
//     std::function<int(int, int)> op = std::multiplies<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "4" || choice == "divide") {
//     std::function<int(int, int)> op = std::divides<int>();
//     result(firstInput, secondInput, op);
//   } else {
//     std::cout << "Invalid Option" << std::endl;
//     operation(choice, firstInput, secondInput);
//   }
// }

// int main() {
//   std::cout << "Basic Calculator" << std::endl;
//   std::cout << "Choose an operation:" << std::endl;
//   std::cout << "1: add" << std::endl
//             << "2: subtract" << std::endl
//             << "3: multiply" << std::endl
//             << "4: divide" << std::endl;
//   std::string choice = "0";
//   int firstInput = 0;
//   int secondInput = 0;
//   std::cin >> choice;
//   operation(choice, firstInput, secondInput);
// }



//________________________________________________________________________________________________________________________



// void fullNameFunc(std::string fullName, std::string name, std::string surname, std::string displayChoice) {
//   if (displayChoice == "1" || displayChoice == "name") {
//     fullName = name + " " + surname;
//     std::cout << "Welcome! " + fullName << std::endl;
//   } else if (displayChoice == "2" || displayChoice == "surname") {
//     fullName = surname + " " + name;
//     std::cout << "Welcome! " + fullName << std::endl;
//   } else {
//     std::cout << "Invalid option. Please choose again:" << std::endl
//               << "1: name" << std::endl
//               << "2: surname" << std::endl;
//     std::cin >> displayChoice;
//     fullNameFunc(fullName, name, surname, displayChoice);
//   }
// }

// int main() {
//   std::string name;
//   std::string surname;
//   std::string displayChoice;
//   std::string fullName;

//   std::cout << "Welcome, please type your name and surname." << std::endl;
//   std::cout << "Name: ";
//   std::cin >> name;
//   std::cout << "Surname: ";
//   std::cin >> surname;
//   std::cout << "What should display first?: " << std::endl
//             << "1: name" << std::endl
//             << "2: surname" << std::endl;
//   std::cin >> displayChoice;
//   fullNameFunc(fullName, name, surname, displayChoice);
// }



//________________________________________________________________________________________________________________________


// #include <iostream>
// #include <string>

// // Forward Declaration
// void checkPersonalInfoFunc(std::string &exit, std::string &username,
//                            std::string &email, std::string &age,
//                            std::string &choice);
// void choiceFunc(std::string &choice, std::string &username, std::string &email,
//                 std::string &age, std::string &exit);
// void exitFunc(std::string &exit, std::string &choice, std::string &username,
//               std::string &email, std::string &age);
// void optionsFunc(std::string &choice, std::string &username, std::string &email,
//                  std::string &age, std::string &exit);
// void updatePersonalInfoFunc(std::string &exit, std::string &username, std::string &email, std::string &age, std::string &choice);
// // Forward Declaration

// void choiceFunc(std::string &choice, std::string &username, std::string &email,
//                 std::string &age, std::string &exit) {
//   std::cout << "1: Check personal information" << std::endl;
//   std::cout << "2: Update personal information" << std::endl;
//   std::cin >> choice;
//   if (choice == "1") {
//     checkPersonalInfoFunc(exit, username, email, age, choice);
//   } else if (choice== "2") {
//     updatePersonalInfoFunc(exit, username, email, age, choice);
//   }
// }

// void checkPersonalInfoFunc(std::string &exit, std::string &username,
//                            std::string &email, std::string &age,
//                            std::string &choice) {
//   std::cout << "Username: " << username << std::endl;
//   std::cout << "Email: " << email << std::endl;
//   std::cout << "Age: " << age << std::endl;
//   std::cout << "1: Exit" << std::endl;
//   std::cin >> exit;
//   exitFunc(exit, choice, username, email, age);
// }

// void updatePersonalInfoFunc(std::string &exit, std::string &username, std::string &email, std::string &age, std::string &choice) {
//   std::cout << "Username: ";
//   std::getline(std::cin >> std::ws, username);
//   std::cout << "Email: ";
//   std::getline(std::cin >> std::ws, email);
//   std::cout << "Age: ";
//   while (!(std::cin >> age) || age.empty()) {
//     std::cin.clear();
//     std::cin.ignore(1000, '\n');
//     std::cout << "Invalid input. Please enter your age again: ";
//   }
//   std::cout << "Personal information updated." << std::endl;
//   std::cout << "1: Exit" << std::endl;
//   std::cin >> exit;
//   exitFunc(exit, choice, username, email, age);
// }

// void exitFunc(std::string &exit, std::string &choice, std::string &username,
//               std::string &email, std::string &age) {
//   while (exit != "1" && exit != "exit") {
//     std::cout << "Invalid option, to exit type \"1\" or \"exit\"" << std::endl;
//     std::cin >> exit;
//   }
//   if (exit == "1" || exit == "exit") {
//     choiceFunc(choice, username, email, age, exit);
//   }
// }

// void optionsFunc(std::string &choice, std::string &username, std::string &email,
//                  std::string &age, std::string &exit) {
//   if (choice == "1") {
//     checkPersonalInfoFunc(exit, username, email, age, choice);
//   }
// }

// int main() {
//   std::string username;
//   std::string email;
//   std::string age;
//   std::string choice;
//   std::string exit;

//   std::cout << "Welcome, please fill in your information: " << std::endl;
//   std::cout << "Username: ";
//   std::getline(std::cin >> std::ws, username);
//   std::cout << "Email: ";
//   std::getline(std::cin >> std::ws, email);
//   std::cout << "Age: ";
//   while (!(std::cin >> age) || age.empty()) {
//     std::cin.clear();
//     std::cin.ignore(1000, '\n');
//     std::cout << "Invalid input. Please enter your age again: ";
//   }
//   std::cout << "Thank you for signing in!" << std::endl;

//   choiceFunc(choice, username, email, age, exit);
// }



//________________________________________________________________________________________________________________________



// int main() {
//   int ageInput;
//   int usernameInput;
//   int emailInput;
//   std::cout << "Welcome, before singing in please enter your age: ";
//   std::cin >> ageInput;
//   if (ageInput >= 18) {
//     std::cout << "Welcome, please type your username: " << std::endl;
//     std::cin >> usernameInput;
//     std::cout << "Please type your email: " << std::endl;
//     std::cin >> emailInput;
//     std::cout << "Thank you for signing in!" << std::endl;
//   } else if (ageInput < 18) {
//     std::cout << "Sorry, you are not old enough to sign in." << std::endl;
//   }
// }



//________________________________________________________________________________________________________________________



// #include <iostream>
// #include <string>
// #include <functional>

// void result(int firstInput, int secondInput, std::function<int(int, int)> op) {
//   std::cout << "First Input: ";
//   std::cin >> firstInput;
//   std::cout << "Second Input: ";
//   std::cin >> secondInput;
//   std::cout << "Result is: " << op(firstInput, secondInput) << std::endl;
// }

// void operation(std::string choice, int firstInput, int secondInput, std::function<int(int, int)> op) {
//   if (choice == "1" || choice == "add") {
//     std::function<int(int, int)> op = std::plus<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "2" || choice == "subtract") {
//     std::function<int(int, int)> op = std::minus<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "3" || choice == "multiply") {
//     std::function<int(int, int)> op = std::multiplies<int>();
//     result(firstInput, secondInput, op);
//   } else if (choice == "4" || choice == "divide") {
//     std::function<int(int, int)>op = std::divides<int>();
//   } else {
//     std::cout << "Invalid Option" << std::endl;
//     operation(choice, firstInput, secondInput, op);
//   }
// }

// int main() {
//   std::cout << "Basic Calculator" << std::endl;
//   std::cout << "Choose an operation:" << std::endl;
//   std::cout << "1: add" << std::endl;
//   std::cout << "2: subtract" << std::endl;
//   std::cout << "3: multiply" << std::endl;
//   std::cout << "4: divide" << std::endl;
//   std::function<int(int, int)>op;
//   std::string choice = "0";
//   int firstInput = 0;
//   int secondInput = 0;
//   std::cin >> choice;
//   operation(choice, firstInput, secondInput, op);
// }



//________________________________________________________________________________________________________________________


// #include <iostream>
// #include <cstdlib>
// #include <ctime>

// void randomCheck(int randomNum, int lives) {
//     int guess;
//     while (lives > 0) {
//         std::cin >> guess;
        
//         if (std::cin.fail()) {
//             std::cin.clear();
//             std::cin.ignore(10000, '\n');
//             std::cout << "Invalid input, please enter a number between 0 and 10." << std::endl;
//             continue;
//         }

//         if (guess == randomNum) {
//             std::cout << "Congrats! You guessed the number: " << randomNum << std::endl;
//             break;
//         } else if (guess >= 0 && guess <= 10) {
//             lives--;
//             if (lives > 0) {
//                 std::cout << "Wrong Answer! " << lives << " lives left" << std::endl;
//             } else {
//                 std::cout << "Out of lives, game over! The correct number was " << randomNum << "." << std::endl;
//             }
//         } else {
//             std::cout << "Invalid input, please enter a number between 0 and 10." << std::endl;
//         }
//     }
// }

// int main() {
//     srand(time(0));
//     int randomNum = rand() % 11; // Random number (0 to 10)
//     // std::cout << "Random number: " << randomNum << std::endl;

//     int lives = 5;
//     std::cout << "Guess a number between 0 and 10. You have " << lives << " lives left." << std::endl;
//     randomCheck(randomNum, lives);
// }



//________________________________________________________________________________________________________________________



// // Function Prototypes
// void infoInput(std::string& name, std::string& firstName, std::string& lastName, std::string& email);
// void welcomeCheck(std::string& welcomeChoice, std::string& name, std::string& firstName, std::string& lastName, std::string& email);
// void menuChoice(std::string& name, std::string& firstName, std::string& lastName, std::string& email);
// void calculator();
// void performOperation(const std::string& choice, int firstInput, int secondInput);

// // Calculator Function
// void calculator() {
//     std::cout << "Basic Calculator" << std::endl;
//     std::cout << "Choose an operation:" << std::endl;
//     std::cout << "1: Add" << std::endl;
//     std::cout << "2: Subtract" << std::endl;
//     std::cout << "3: Multiply" << std::endl;
//     std::cout << "4: Divide" << std::endl;

//     std::string choice;
//     std::cin >> choice;

//     int firstInput = 0, secondInput = 0;
//     std::cout << "Enter the first number: ";
//     std::cin >> firstInput;
//     std::cout << "Enter the second number: ";
//     std::cin >> secondInput;

//     if (choice == "4" && secondInput == 0) {
//         std::cout << "Error: Division by zero is not allowed." << std::endl;
//         return;
//     }

//     performOperation(choice, firstInput, secondInput);
// }

// void performOperation(const std::string& choice, int firstInput, int secondInput) {
//     if (choice == "1") {
//         std::cout << "Result: " << firstInput + secondInput << std::endl;
//     } else if (choice == "2") {
//         std::cout << "Result: " << firstInput - secondInput << std::endl;
//     } else if (choice == "3") {
//         std::cout << "Result: " << firstInput * secondInput << std::endl;
//     } else if (choice == "4") {
//         std::cout << "Result: " << firstInput / secondInput << std::endl;
//     } else {
//         std::cout << "Invalid operation choice." << std::endl;
//     }
// }

// // Information Input Function
// void infoInput(std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
//     std::cout << "First Name: ";
//     std::cin >> firstName;
//     std::cout << "Last Name: ";
//     std::cin >> lastName;
//     name = firstName + " " + lastName;
//     std::cout << "Email: ";
//     std::cin >> email;
//     std::cout << "Welcome, " << name << "!" << std::endl;
// }

// // Welcome Check Function
// void welcomeCheck(std::string& welcomeChoice, std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
//     while (true) {
//         if (welcomeChoice == "1") {
//             std::cout << "Please enter your information:" << std::endl;
//             infoInput(name, firstName, lastName, email);
//             menuChoice(name, firstName, lastName, email);
//             break;
//         } else if (welcomeChoice == "2") {
//             std::cout << "Goodbye! Have a nice day." << std::endl;
//             break;
//         } else {
//             std::cout << "Invalid choice. Please enter 1 (Sign In) or 2 (Exit): ";
//             std::cin >> welcomeChoice;
//         }
//     }
// }

// // Menu Choice Function
// void menuChoice(std::string& name, std::string& firstName, std::string& lastName, std::string& email) {
//     while (true) {
//         std::cout << "<< MENU >>\n1: Calculator\n2: Update Info\n3: Exit" << std::endl;
//         std::string menuInput;
//         std::cin >> menuInput;

//         if (menuInput == "1") {
//             calculator();
//         } else if (menuInput == "2") {
//             infoInput(name, firstName, lastName, email);
//         } else if (menuInput == "3") {
//             std::cout << "Exiting... Goodbye!" << std::endl;
//             break;
//         } else {
//             std::cout << "Invalid choice. Please try again." << std::endl;
//         }
//     }
// }

// // Main Function
// int main() {
//     std::string name;
//     std::string firstName;
//     std::string lastName;
//     std::string email;
//     std::string welcomeChoice;

//     std::cout << "Welcome!\n1: Sign In\n2: Exit" << std::endl;
//     std::cin >> welcomeChoice;
//     welcomeCheck(welcomeChoice, name, firstName, lastName, email);

//     return 0;
// }



//________________________________________________________________________________________________________________________



// bool isDoorLocked = true;
// bool isDoorOpen = false;
// std::string ownKey;
// if (!isDoorOpen) {
//     if (isDoorLocked) {
//             while (isDoorLocked) {
//         std::cout << "The door is closed and locked." << std::endl << "Do you have the key?" << std::endl;
//         std::cout << "Yes" << std::endl << "No" << std::endl;
//         std::cin >> ownKey;
//             if (ownKey == "Yes") {
//                 std::cout << "Door Unlocked" << std::endl;
//                 break;
//             } else if (ownKey == "No") {
//                 std::cout << "Can't open the door." << std::endl;
//                 break;
//             } else {
//                 std::cout << "Invalid Option" << std::endl;
//             }
//         }
//     } else if (!isDoorLocked) {
//         std::cout << "The door is unlocked." << std::endl;
//     }
        
// } else if (isDoorOpen) {
//     std::cout << "The door is already open." << std::endl;
// }



//________________________________________________________________________________________________________________________



// #include <iostream>
// #include <functional>
// #include <string>
// #include <vector>
// #include <algorithm>
// #include <unordered_set>
// #include <random>

// void spanishVer() {
//     std::cout << "Ordena!" << std::endl;
//     std::vector<std::string> words = {"suelo", "cabeza", "dientes", "nevera", "torre", "zapato", "pizarra"};
    
//     std::random_device rd;
//     std::mt19937 g(rd());
    
//     int randomIndex = g() % words.size();
//     std::string selectedWord = words[randomIndex];
    
//     std::shuffle(selectedWord.begin(), selectedWord.end(), g);
    
//     std::cout << "Reordena esta palabra: " << selectedWord << std::endl;

//     std::string guess;
//     std::cin >> guess;

//     if (guess == words[randomIndex]) {
//         std::cout << "Felicidades! Has ordenado la palabra correctamente." << std::endl;
//     } else {
//         std::cout << "Incorrecto! La palabra era " + words[randomIndex] << std::endl;
//     }
// }

// void englishVer() {
//     std::cout << "Unscramble!" << std::endl;
//     std::vector<std::string> words = {"floor", "head", "teeth", "fridge", "tower", "shoe", "board"};
    
//     std::random_device rd;
//     std::mt19937 g(rd());
    
//     int randomIndex = g() % words.size();
//     std::string selectedWord = words[randomIndex];
    
//     std::shuffle(selectedWord.begin(), selectedWord.end(), g);
    
//     std::cout << "Unscramble this word: " << selectedWord << std::endl;

//     std::string guess;
//     std::cin >> guess;

//     if (guess == words[randomIndex]) {
//         std::cout << "Congrats! You unscrambled the word." << std::endl;
//     } else {
//         std::cout << "Incorrect! The word was " + words[randomIndex] << std::endl;
//     }
// }

// int main() {
//     std::cout << "Please choose a language: " << std::endl << "1 - English" << std::endl << "2 - Español" << std::endl;
//     std::string languageChoice;
//     std::cin >> languageChoice;
    
//     if (languageChoice == "1" || languageChoice == "English") {
//         englishVer();
//     } else if (languageChoice == "2" || languageChoice == "Español") {
//         spanishVer();
//     }
// }



//________________________________________________________________________________________________________________________



// void codeCheck(int code, int &codeInput, bool &isRight, std::string &message) {
//     std::cin >> codeInput;
//     if (codeInput == code) {isRight = true;}
//     message = isRight ? "Welcome in!" : "Unable to access";
//     std::cout << message << std::endl;
//     while (!isRight) {
//         std::cout << "Try again:" << std::endl;
//         codeCheck(code, codeInput, isRight, message);
//     }
// }

// int main() {
//     int code = 1234;
//     int codeInput;
//     bool isRight;
//     std::string message;
//     std::cout << "Type your PIN to access:" << std::endl;
//     codeCheck(code, codeInput, isRight, message);
// }



//________________________________________________________________________________________________________________________



// void setPIN(int &code) {
//     std::cin >> code;
//     while (code < 1000 || code > 9999) {std::cout << "Invalid input. Please enter a 4-digit number: "; std::cin >> code;}
//     std::cout << "PIN set." << std::endl;
// }

// void codeCheck(int code, int &codeInput, bool &isRight, std::string &message) {
//     std::cin >> codeInput;
//     if (codeInput == code) {isRight = true;}
//     message = isRight ? "Welcome in!" : "Unable to access";
//     std::cout << message << std::endl;
//     while (!isRight) {std::cout << "Try again:" << std::endl; codeCheck(code, codeInput, isRight, message);}
// }

// int main() {
//     int code = 1234;
//     int codeInput;
//     bool isRight;
//     std::string message;
//     std::cout << "Welcome, please set a 4 digit PIN:";
//     setPIN(code);
//     std::cout << "Type your PIN to access:" << std::endl;
//     codeCheck(code, codeInput, isRight, message);
// }



//________________________________________________________________________________________________________________________



