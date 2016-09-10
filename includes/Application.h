#include <GLFW/glfw3.h>

namespace Game
{
	class Application
	{
	public:
		const int WIN_WIDTH = 800;
		const int WIN_HEIGHT = 600;

		Application();
		~Application();
		void InitWindow( const char* );
		void InitVulkan( void );
		void MainLoop( void );
	private:
		GLFWwindow* window;
	};
}


