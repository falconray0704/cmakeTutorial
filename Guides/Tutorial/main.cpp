
#include <iostream>
#include <string>

#include "TutorialConfig.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Usage: " << argv[0] << " number" << std::endl;
        return 1;
    }

    std::cout << "Guides->tutorial->Step 1" << std::endl;
    std::cout << "Tutorial version: " << Tutorial_VERSION_MAJOR << "." << Tutorial_VERSION_MINOR << std::endl;
    return 0;
}

