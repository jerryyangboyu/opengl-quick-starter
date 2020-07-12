# OpenGL Quick Starter
A quick starter template for OpenGL using existing library

## Dependencies
- [GLFW](https://www.glfw.org/): An Open Source, multi-platform library for OpenGL

- [GLEW](http://glew.sourceforge.net/): A cross-platform open-source C/C++ extension loading library.

- [GLM](https://glm.g-truc.net/): A header only C++ mathematics library for graphics software based on the OpenGL Shading Language (GLSL) specifications.

- [SOIL2](https://github.com/SpartanJ/soil2): A tiny C library used primarily for uploading textures into OpenGL.

> You should be awared that SOIL2 has no pre-compiled binary when this template was created, so my conpiled version for windows32 was included.

## File Structure
```
Opengl_starter
    - Linking (Dependencies Folder)
        - GLEW
        - GLFW
        - GLM
        - SOIL2
    - Opengl_starter (Project Folder)
        - header
            - libs.h (Imported Libraries)
            - common.h (Common Settings For Project)
        - source
            - main.cpp (Example starter)
```
You should be awared that in main.cpp, the overall project was implemented, rewrite or refractor is needed. Proper comments has been added to main.cpp.

## Environment
The project was setup in Visual Studio 2017 Community Version using windows sdk version 10.

## Contributor
- [Jerry](https://github.com/jerryyangboyu)