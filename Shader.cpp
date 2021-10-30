#include "Shader.hpp"
#include "GLShader.hpp"

Shader::Shader(const char* vertexPath, const char* fragmentPath) {
    ID = LoadShader(vertexPath, fragmentPath);
}

void Shader::use() {
    glUseProgram(ID);
}

void Shader::setBool(const std::string &name, bool value) const
{         
    glUniform1i(glGetUniformLocation(ID, name.c_str()), (int)value); 
}
void Shader::setInt(const std::string &name, int value) const
{ 
    glUniform1i(glGetUniformLocation(ID, name.c_str()), value); 
}
void Shader::setFloat(const std::string &name, float value) const
{ 
    glUniform1f(glGetUniformLocation(ID, name.c_str()), value); 
}

Shader::~Shader() {
    glDeleteProgram(this->ID);
}