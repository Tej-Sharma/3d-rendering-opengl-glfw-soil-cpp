#include "Display.h"
#include <iostream>

using namespace std;

// Initialize GLFW before creating the window
Display::Display()
{
	glfwInit();
}


Display::~Display()
{
}

// Using GLFW, create a window that will serve as a context (render screen) for OPENGL
void Display::createWindow()
{
	// Use GLFW  version 3, not resizable and OpenGL
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);

	// Create an 800 by 600 window titled 
	this->window = glfwCreateWindow(800, 600, "OpenGL Demo Rendering Window", nullptr, nullptr);

	if (window == nullptr)
	{
		cout << "Window was unable to be created. Fatal error" << endl;
	}

	// Don't display the cursor in game (like FPS games)
	glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

	// Make the current window the current context for rendering
	glfwMakeContextCurrent(window);
}

GLFWwindow * Display::getWindow()
{
	return this->window;
}
