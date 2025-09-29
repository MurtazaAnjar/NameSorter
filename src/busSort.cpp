#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include "busSort.h"

int busSort() {
    std::string busName;
    std::vector<std::string> busNames;
    std::string response;

    std::cout << "Welcome to the Business Sorting Program!" << std::endl;

    do{
        std::cout << "Please enter the name of a business: " << std::endl;
        std::getline(std::cin, busName);
        busNames.push_back(busName);
        std::sort(busNames.begin(), busNames.end());

        //prints current businesses
        std::cout << "Your Businesses are:\n" << std::endl;
        long len = busNames.size();
        for (int i = 0; i < len; i++) {
            std::cout << "\t" << busNames[i] << std::endl;
        }
        std::cout << std::endl;

        //Another business prompt
        std::cout << "Another business?" << std::endl;
        std::getline(std::cin,response);
        for (int i = 0; i < response.length(); i++) {
            response[i] = static_cast<char>(tolower(response[i]));
        }
    }while (response == "y" || response == "yes");

    //bad response
    if (response != "n" && response != "no") {
        std::cerr << "ERROR! Invalid Response.\nExiting Program...\nGoodbye"<<std::endl;
        return 0;
    }
    std::cout << "Thank you for using the Business Sorting Program!" << std::endl;
    return 0;
}