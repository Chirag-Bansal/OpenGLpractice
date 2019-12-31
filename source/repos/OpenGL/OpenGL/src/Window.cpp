//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
//
//void processInput(GLFWwindow* window)
//{
//	if (glfwGetKey(window, GLFW_KEY_ENTER) == GLFW_PRESS) {
//		glBegin(GL_TRIANGLES);
//		glVertex2f(-0.5f, -0.5f);
//		glVertex2f(0.0f, 0.5f);
//		glVertex2f(0.5f, -0.5f);
//		glEnd();
//	}
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) {
//		glfwSetWindowShouldClose(window, true);
//	}
//}
//
//int main(void)
//{
//	GLFWwindow* window;
//
//	if (!glfwInit())
//		return -1;
//
////	glewInit();
//
//	window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
//	if (!window)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	glfwMakeContextCurrent(window);
//	// Here is where we have created a valid OpenGL context thus we can call glewInit after this point only
//	//
//
//	if (glewInit() != GLEW_OK)
//		std::cout << "Error" << std::endl;
//
//	 std::cout << glGetString(GL_VERSION)  << std::endl;
//
//	 glViewport(-1,-1,600,600);
//
//	while (!glfwWindowShouldClose(window))
//	{
//
//		processInput(window);
//
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		glBegin(GL_TRIANGLES);
//		glVertex2f(-0.5f, -0.5f);
//		glVertex2f(0.0f, 0.5f);
//		glVertex2f(0.5f, -0.5f);
//		glEnd();
//
//		glfwSwapBuffers(window);
//
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//	return 0;
//}