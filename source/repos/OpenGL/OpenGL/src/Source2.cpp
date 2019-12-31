//#include <GL/glew.h>
//#include <GLFW/glfw3.h>
//#include <iostream>
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
//int main(void) {
//
//	GLFWwindow* window2;
//
//	if (!glfwInit())
//		return -1;
//
//	//	glewInit();
//
//	window2 = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
//	if (!window2)
//	{
//		glfwTerminate();
//		return -1;
//	}
//
//	glfwMakeContextCurrent(window2);
//	// Here is where we have created a valid OpenGL context thus we can call glewInit after this point only
//
//	if (glewInit() != GLEW_OK)
//		std::cout << "Error" << std::endl;
//
//	float positions[6] = {
//		-0.5f,-0.5f,
//		0.0f, 0.5f,
//		0.5f, -0.5f
//	};
//
//	unsigned int buffer;
//	glGenBuffers(1, &buffer);
//	glBindBuffer(GL_ARRAY_BUFFER, buffer);
//	glBufferData(GL_ARRAY_BUFFER, 6 * sizeof(float), positions, GL_STATIC_DRAW);
//
//	glEnableVertexAttribArray(0);
//	glVertexAttribPointer(0, 2, GL_FLOAT, GL_FALSE, sizeof(float) * 2, 0);
//
//
//	std::string vertexShader =
//		"#version 330 core\n"
//		"\n"
//		"layout(location = 0) in vec4 position;"
//		"\n"
//		"void main()\n"
//		"{\n"
//		" gl_Position = position;\n "
//		"}\n";
//
//	std::string fragmentShader =
//		"#version 330 core\n"
//		"\n"
//		"layout(location = 0) out vec4 color;"
//		"\n"
//		"void main()\n"
//		"{\n"
//		" color = vec4(1.0, 0.0, 0.0, 1.0);\n "
//		"}\n";
//
//	unsigned int shader = CreateShader(vertexShader, fragmentShader);
//	glUseProgram(shader);
//
//	//std::cout << glGetString(GL_VERSION) << std::endl;
//	glViewport(-1,-1,200,200);
//
//	while (!glfwWindowShouldClose(window2))
//	{
//		glClear(GL_COLOR_BUFFER_BIT);
//
//		glDrawArrays(GL_TRIANGLES, 0, 3);
//
//		glfwSwapBuffers(window2);
//
//		glfwPollEvents();
//	}
//
//	glfwTerminate();
//	return 0;
//}