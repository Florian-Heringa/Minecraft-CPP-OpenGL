#ifndef SHADER_CONTROL_H_INCLUDED
#define SHADER_CONTROL_H_INCLUDED

#include <GL/glew.h>
#include <string>

namespace Shader
{
    class Shader_Control
    {
        public:
            Shader_Control(const std::string& vertexShaderFile, const std::string& fragmentShaderFile);
            ~Shader_Control();

            void bind();
            void unbind();

        protected:
            virtual void getUniformLocations() = 0;

            GLuint getID() const;

            void loadFloat(GLuint location, float value);

        private:
            GLuint m_programID;
    };
}

#endif // SHADER_CONTROL_H_INCLUDED
