#include "VAO.hpp"  
#include <glad/glad.h>
	
VAO::VAO() {
    glGenVertexArrays(1, &ID);
}

void VAO::bind() {
    glBindVertexArray(ID);
}

void VAO::unbind() {
    glBindVertexArray(0);
}

void VAO::set(unsigned int index, unsigned int size, unsigned int type, unsigned int stride) {
    glVertexAttribPointer(index, size, type, GL_FALSE, stride, (void*)0);
}
	
VAO::~VAO() {
	glDeleteVertexArrays(1, &ID);
}