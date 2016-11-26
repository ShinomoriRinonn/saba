﻿#ifndef SABA_GL_SHADERUTIL_H_
#define SABA_GL_SHADERUTIL_H_

#include "GLObject.h"

#include <string>
#include <GL/gl3w.h>
#include <glm/vec2.hpp>
#include <glm/vec3.hpp>
#include <glm/vec4.hpp>
#include <glm/mat3x3.hpp>
#include <glm/mat4x4.hpp>

namespace saba
{

	GLProgramObject CreateShaderProgram(const char* vsCode, const char* fsCode);

	void SetUniform(GLint uniform, GLint value);
	void SetUniform(GLint uniform, float value);
	void SetUniform(GLint uniform, const glm::vec2& value);
	void SetUniform(GLint uniform, const glm::vec3& value);
	void SetUniform(GLint uniform, const glm::vec4& value);
	void SetUniform(GLint uniform, const glm::mat3& value);
	void SetUniform(GLint uniform, const glm::mat4& value);
}

#endif // !SABA_GL_SHADERUTIL_H_

