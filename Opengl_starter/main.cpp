#include "libs.h"
#include "common.h"
#include <stdio.h>

void framebuffer_resize_callback(GLFWwindow *w, int fbw, int fbh)
{
	glViewport(0, 0, fbw, fbh);

}

int main() {

	// INIT GLFW(Graphic library framework)
	glfwInit();

	int frameBufferWidth = 0;
	int frameBufferHeight = 0;

	// set opengl version 4.4
	glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
	glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 4);

	glfwWindowHint(GLFW_RESIZABLE, (windowResizable ? GL_TRUE : GL_FALSE));
	// glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); for macos

	// CREATE WINDOW
	GLFWwindow *window = glfwCreateWindow(WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITLE, NULL, NULL);

	// set with and height of framebuffer to variable
	// glfwGetFramebufferSize(window, &frameBufferWidth, &frameBufferHeight);
	glfwSetFramebufferSizeCallback(window, &framebuffer_resize_callback);

	glViewport(0, 0, frameBufferWidth, frameBufferHeight);

	// set current context to specified window
	glfwMakeContextCurrent(window);

	// INIT GLEW (NEED WINDOW AND OPENGL CONTEXT)
	glewExperimental = GL_TRUE;
	if (glewInit() != GLEW_OK)
	{
		std::cerr << "ERROR in main.cpp: glew init failed." << std::endl;
		glfwTerminate();
		return -1;
	}

	// MAIN LOOP
	while (!glfwWindowShouldClose(window))
	{
		//UPDATE INPUT
		glfwPollEvents();

		//clear
		glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

		//DRAW
		//END DRAW
		glfwSwapBuffers(window);
		glFlush();
	}

	// TERMINATE WINDOW
	glfwTerminate();
}