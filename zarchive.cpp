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

// int main() {
//   char chCapR = 'R';
//   char chO = 'o';
//   char chB = 'b';
//   char chE = 'e';
//   char chR = 'r';
//   char chT = 't';

//   std::cout << chCapR << chO << chB << chE << chR << chT << chO << std::endl;
// }

// int main() {
//   std::string hola = "Hello";
//   std::string mundo = "World";
//   char space = ' ';
//   char exclamation = '!';
//   std::cout << hola << space << mundo << exclamation << std::endl;
// }

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

// int main() {
//   int age = 16;
//   const int increment = 1;
//   age = age + increment;
//   std::cout << age << std::endl;
//   int modulusAge = (age - increment) % 7;
//   std::cout << modulusAge << std::endl;
// }

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


