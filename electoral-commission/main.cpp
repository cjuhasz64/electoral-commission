//
//  main.cpp
//  electoral-commission
//
//  Created by Cameron Juhasz on 28/9/22.
//  Copyright © 2022 Cameron Juhasz. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    bool active = true;
    
    std::string selection;
    
    while (active)
    {
        std::cout << "P - Print numbers for a particular candidate " << std::endl;
        std::cout << "A - Add number of votes to a candidate" << std::endl;
        std::cout << "S - Display the smallest number of votes candidate" << std::endl;
        std::cout << "L - Display the largest number of votes candidate" << std::endl;
        std::cout << "Q - Quit" << std::endl;
        
        std::cout << "Please make a selection: ";
        
        std::cin >> selection;
        
        std::transform(selection.begin(), selection.end(), selection.begin(),
        [](unsigned char c){ return std::tolower(c); });
        
        if (selection == "p")
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "P" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
        else if(selection == "a")
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "A" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
        else if(selection == "l")
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "L" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
        else if(selection == "s")
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "S" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
        else if(selection == "q")
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "Goodbye" << std::endl;
            std::cout << "========================================\n" << std::endl;
            active = false;
        }
        else
        {
            std::cout << "\n========================================" << std::endl;
            std::cout << "Unknown selection, please try again" << std::endl;
            std::cout << "========================================\n" << std::endl;
        }
    }
    return 0;
}
