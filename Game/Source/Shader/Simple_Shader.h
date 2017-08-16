#ifndef SIMPLE_SHADER_H_INCLUDED
#define SIMPLE_SHADER_H_INCLUDED

#include "Shader_Control.h"

namespace Shader
{
    class Simple_Shader : public Shader_Control
    {
    public:
        Simple_Shader();

        void setTime(float time);

    private:
        void  getUniformLocations() override;

        // Location of the time variable used for animating quad
        GLuint m_locationTime = 0;
    };
}

#endif // SIMPLE_SHADER_H_INCLUDED
