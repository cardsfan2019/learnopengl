#version 330 core
out vec4 FragColor;
  
in vec2 TexCoord;
in vec4 color;

uniform vec2 u_resolution;
uniform sampler2D ourTexture;

void main()
{
    //vec2 mult = gl_FragCoord.xy / u_resolution;
    FragColor = texture(ourTexture, TexCoord) * color; //vec4(mult.x, mult.y, 0.0, 1.0);
}