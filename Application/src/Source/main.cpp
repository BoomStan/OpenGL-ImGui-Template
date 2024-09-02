#include "../Headers/ApplicationLoop.h"
#include "../Headers/BackendGLFW.h"
#include "../Headers/BackendImGui.h"
// Callback function to adjust viewport when the window size changes
Application app;
BackendGLFW backendglfw;
GLFWwindow* window;

int main() 
{
	app.Start();

	app.Update();

	app.Stop();
	return 0;
}