#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <Application.h>
#include <iostream>

using namespace std;
using namespace Game;

Application::Application()
{
}

Application::~Application()
{
}

void Application::InitVulkan( void ) 
{
	cout << "Init Vulkan" << endl;
}

void Application::InitWindow( const char* windowTitle ) 
{
	cout << "Init Window" << endl;
	if (!glfwInit()) {
		cout << "glfw init failed" << endl;
		return;
	}
	glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
	glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);

	window = glfwCreateWindow(WIN_WIDTH, WIN_HEIGHT, windowTitle, nullptr, nullptr);
}

void Application::MainLoop( void ) 
{
	cout << "Main Loop" << endl;

	while (!glfwWindowShouldClose(window))
	{
		glfwPollEvents();
	}
}

