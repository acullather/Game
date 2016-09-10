#include <vulkan/vulkan.h>

#include <iostream>
#include <stdexcept>

void initVulkan( void );
void mainLoop( void );

int main() {

    try
    {
        initVulkan();
        mainLoop();
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }   

    std::cout << "Test" << std::endl;
    return EXIT_SUCCESS;
} 

void initVulkan() {

}

void mainLoop() {

}