#version 330

out vec4 color;

in vec2 passTextureCoords;

uniform sampler2D ourTexture;

uniform float time;

void main()
{
    // RGBA color
    //color = vec4 (1.0, 0.0, 0.0, 1.0);
    color = texture(ourTexture, passTextureCoords) * (sin(3 * time) + 1) / 2;
}
