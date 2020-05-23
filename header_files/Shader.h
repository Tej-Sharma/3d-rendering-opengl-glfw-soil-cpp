#pragma once

#include <GL/glew.h>
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

// Header class for the Shader class
class Shader {

public:
	GLuint Program;
	Shader(const GLchar* vertexPath, const GLchar* fragmentPath);
	void Use();
};

