#include <iostream>
#include <functional>
#include <string>

int main() {
    bool isDoorLocked = true;
    bool isDoorOpen = false;
    std::string ownKey;
    if (!isDoorOpen) {
        if (isDoorLocked) {
                while (isDoorLocked) {
            std::cout << "The door is closed and locked." << std::endl << "Do you have the key?" << std::endl;
            std::cout << "Yes" << std::endl << "No" << std::endl;
            std::cin >> ownKey;
                if (ownKey == "Yes") {
                    std::cout << "Door Unlocked" << std::endl;
                    break;
                } else if (ownKey == "No") {
                    std::cout << "Can't open the door." << std::endl;
                    break;
                } else {
                    std::cout << "Invalid Option" << std::endl;
                }
            }
        } else if (!isDoorLocked) {
            std::cout << "The door is unlocked." << std::endl;
        }
        
    } else if (isDoorOpen) {
        std::cout << "The door is already open." << std::endl;
    }
    
}
