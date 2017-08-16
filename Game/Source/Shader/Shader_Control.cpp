#include "Shader_Control.h"
#include "Shader_Loader.h"

namespace Shader
{
    Shader_Control::Shader_Control(const std::string& vertexShaderFile, const std::string& fragmentShaderFile)
    :   m_programID (loadShader(vertexShaderFile, fragmentShaderFile))
    {

    }

    Shader_Control::~Shader_Control()
    {
        glDeleteProgram(m_programID);
    }

    void Shader_Control::bind()
    {
        glUseProgram(m_programID);
    }

    void Shader_Control::unbind()
    {
        glUseProgram(0);
    }

    void Shader_Control::loadFloat(GLuint location, float value)
    {
        glUniform1f(location, value);
    }

    GLuint Shader_Control::getID() const
    {
        return m_programID;
    }
}
