//INCLUDES
#include <iostream>
#include <cstdlib>
#include <chrono>
#include <thread>

int main() {
    int choice;
    std::string websiteURL;

    while (true) {
        std::cout << "Choose A Method:" << std::endl;
        std::cout << "1. NUMBER-TRACK" << std::endl;
        std::cout << "2. BRUTEFORCE" << std::endl;
        std::cout << "3. IP LOGGER" << std::endl;
        std::cout << "4. PC RAT" << std::endl;
        std::cout << "5. OISNT" << std::endl;
        std::cout << "6. Exit BloodyLock" << std::endl;
        std::cout << "" << std::endl;
        std::cout << "Select Method:" << std::endl;
        std::cin >> choice;

        // OPTIONS & EXIT
        switch (choice) {
        case 1:
            websiteURL = "https://github.com/sundowndev/phoneinfoga";
            system("cls");
            break;
        case 2:
            websiteURL = "https://github.com/hashcat/hashcat/";
            system("cls");
            break;
        case 3:
            websiteURL = "https://github.com/Raz-js/Discord-IP-Logger";
            system("cls");
            break;
        case 4:
            websiteURL = "https://github.com/Smug246/Luna-Grabber";
            system("cls");
            break;
        case 5:
            websiteURL = "https://github.com/Lucksi/Mr.Holmes";
            system("cls");
            break;
        case 6:
            exit(0);
        default:
            std::cout << "Invalid Choice. Try Again!" << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(2)); //WAIT 2 SECONDS
            system("cls");
            continue;
        }

        // SYSTEM TO OPEN URL
        std::string openCommand = "start " + websiteURL;
        system(openCommand.c_str());
    }

    return 0;
}
