//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//
//#include <iostream>
//
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 600;
//
//const char* vertexShaderSource = "#version 330 core\n"
//"layout (location = 0) in vec3 aPos;\n"
//"layout (location = 1) in vec3 aColor;\n"
//"out vec3 ourColor;\n"
//"void main()\n"
//"{\n"
//"   gl_Position = vec4(aPos, 1.0);\n"
//"   ourColor = aColor;\n"
//"}\0";
//
//const char* fragmentShaderSource = "#version 330 core\n"
//"out vec4 FragColor;\n"
//"in vec3 ourColor;\n"
//"void main()\n"
//"{\n"
//"   FragColor = vec4(ourColor, 1.0f);\n"
//"}\n\0";
//
//void processInput(GLFWwindow* window)
//{
//	if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//		glfwSetWindowShouldClose(window, true);
//}
//void framebuffer_size_callback(GLFWwindow* window, int width, int height)
//{
//	glViewport(0, 0, width, height);
//}
//
//static unsigned int CompileShader(const std::string& source, unsigned int type) {
//	unsigned int id = glCreateShader(type);
//	const char* src = source.c_str();
//	glShaderSource(id, 1, &src, nullptr);
//	glCompileShader(id);
//
//	int result;
//	glGetShaderiv(id, GL_COMPILE_STATUS, &result);
//	if (result == GL_FALSE) {
//		int length;
//		glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
//		char* message = (char*)alloca(length * sizeof(char));
//		glGetShaderInfoLog(id, length, &length, message);
//		std::cout << "ERROR in " << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") << std::endl;
//		std::cout << message << std::endl;
//		glDeleteShader(id);
//		return 0;
//	}
//
//
//	return id;
//}
//
//static unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader) {
//
//	unsigned int program = glCreateProgram();
//	unsigned int vs = CompileShader(vertexShader, GL_VERTEX_SHADER);
//	unsigned int fs = CompileShader(fragmentShader, GL_FRAGMENT_SHADER);
//
//	glAttachShader(program, vs);
//	glAttachShader(program, fs);
//
//	glLinkProgram(program);
//	glValidateProgram(program);
//
//	return program;
//}
//
//int main()
//{
//	glfwInit();
//
//	GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
//	glfwMakeContextCurrent(window);
//	glewInit();
//	
//	unsigned int shader = CreateShader(vertexShaderSource, fragmentShaderSource);
//	glUseProgram(shader);
//	
//	float vertices[] = {
//		 0.5f, -0.5f, 0.0f,  1.0f, 0.0f, 0.0f,  
//		-0.5f, -0.5f, 0.0f,  0.0f, 1.0f, 0.0f,  
//		 0.0f,  0.5f, 0.0f,  0.0f, 0.0f, 1.0f    
//
//	};
//
//	unsigned int VBO, VAO;
//	glGenVertexArrays(1, &VAO);
//	glGenBuffers(1, &VBO);
//	glBindVertexArray(VAO);
//
//	glBindBuffer(GL_ARRAY_BUFFER, VBO);
//	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
//
//	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
//	glEnableVertexAttribArray(1);
//
//	
//	glUseProgram(shader);
//
//	
//	while (!glfwWindowShouldClose(window))
//	{
//		
//		processInput(window);
//
//		
//		glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		glBindVertexArray(VAO);
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window);
//		glfwPollEvents();
//	}
//
//	glDeleteVertexArrays(1, &VAO);
//	glDeleteBuffers(1, &VBO);
//	glfwTerminate();
//	return 0;
//}
//
//
