#ifndef MODEL_H_INCLUDED
#define MODEL_H_INCLUDED

#include <GL/glew.h>
#include <vector>

class Model
{
    public:
        // Constructor
        Model(const std::vector<GLfloat>& vertexPositions,
              const std::vector<GLfloat>& textureCoords,
              const std::vector<GLuint>& indices);
        // Destructor
        ~Model();

        void bind();
        void unbind();

        // Getter method for indicesCount
        GLuint getIndicesCount() const;

    private:
        // Adds vertex buffer object for this model
        void addVBO(int dim, const std::vector<GLfloat>& data);
        // Adds element buffer object for this model
        void addEBO(const std::vector<GLuint>& indices);
        std::vector<GLuint> m_buffers;
        GLuint m_vao = 0;

        // Holds amount of vertex buffers used by object at any time
        GLuint m_vboCount = 0;
        // Number of indices making up the model
        GLuint m_indicesCount = 0;
};

#endif // MODEL_H_INCLUDED
