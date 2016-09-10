#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>

#include <Application.h>

const char* WindowTitle = "New Vulkan Window";

int main() {

    try
    {
        Game::Application app;
        app.InitVulkan();
        app.InitWindow( WindowTitle );
        app.MainLoop();
    }
    catch ( const std::exception& e )
    {
        std::cerr << e.what() << std::endl;
        return EXIT_FAILURE;
    }   
    return EXIT_SUCCESS;
} 

