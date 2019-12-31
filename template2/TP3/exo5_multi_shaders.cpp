#include <glimac/SDLWindowManager.hpp>
#include <glimac/Program.hpp>
#include <glimac/FilePath.hpp>
#include <glimac/Image.hpp>
#include <glimac/common.hpp>
#include <glimac/Sphere.hpp>
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include <cstddef>

using namespace glimac;

struct EarthProgram {
    Program m_Program;

    GLint uMVPMatrix;
    GLint uMVMatrix;
    GLint uNormalMatrix;
    GLint uEarthTexture;
    GLint uCloudTexture;

    EarthProgram(const FilePath& applicationPath):
            m_Program(loadProgram(applicationPath.dirPath() + "shaders/3D.vs.glsl",
                                  applicationPath.dirPath() + "shaders/multiTex3D.fs.glsl")) {
        uMVPMatrix = glGetUniformLocation(m_Program.getGLId(), "uMVPMatrix");
        uMVMatrix = glGetUniformLocation(m_Program.getGLId(), "uMVMatrix");
        uNormalMatrix = glGetUniformLocation(m_Program.getGLId(), "uNormalMatrix");
        uEarthTexture = glGetUniformLocation(m_Program.getGLId(), "uEarthTexture");
        uCloudTexture = glGetUniformLocation(m_Program.getGLId(), "uCloudTexture");
    }
};

struct MoonProgram {
    Program m_Program;

    GLint uMVPMatrix;
    GLint uMVMatrix;
    GLint uNormalMatrix;
    GLint uTexture;

    MoonProgram(const FilePath& applicationPath):
            m_Program(loadProgram(applicationPath.dirPath() + "shaders/3D.vs.glsl",
                                  applicationPath.dirPath() + "shaders/tex3D.fs.glsl")) {
        uMVPMatrix = glGetUniformLocation(m_Program.getGLId(), "uMVPMatrix");
        uMVMatrix = glGetUniformLocation(m_Program.getGLId(), "uMVMatrix");
        uNormalMatrix = glGetUniformLocation(m_Program.getGLId(), "uNormalMatrix");
        uTexture = glGetUniformLocation(m_Program.getGLId(), "uTexture");
    }
};

int main(int argc, char** argv) {
    // Initialize glfw
    if (!glfwInit())
    {
        std::cerr << "Failed in initialization GLFW" << std::endl;
        return -1;
    }

    //Hint the GL version to use
    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);

    //Create the window
    GLFWwindow* windowManager = glfwCreateWindow(800, 800, "GLImac", NULL, NULL);
    if (!windowManager)
    {
        std::cerr << "Failed in create Windows" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(windowManager);

    // Initialize glew for OpenGL3+ support
    glewExperimental = GL_TRUE;
    GLenum glewInitError = glewInit();
    if(GLEW_OK != glewInitError) {
        std::cerr << glewGetErrorString(glewInitError) << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "OpenGL Version : " << glGetString(GL_VERSION) << std::endl;
    std::cout << "GLEW Version : " << glewGetString(GLEW_VERSION) << std::endl;

    FilePath applicationPath(argv[0]);
    EarthProgram earthProgram(applicationPath);
    MoonProgram moonProgram(applicationPath);

    std::unique_ptr<Image> earth_image = loadImage("/Users/mhudelot/Documents/Synthese/GLImac-Template/TP3/asset/textures/EarthMap.jpg");
    if(earth_image == NULL) {
        std::cerr << "Failed to load Image" << std::endl;
        return EXIT_FAILURE;
    }

    std::unique_ptr<Image> moon_image = loadImage("/Users/mhudelot/Documents/Synthese/GLImac-Template/TP3/asset/textures/MoonMap.jpg");
    if(moon_image == NULL) {
        std::cerr << "Failed to load Image" << std::endl;
        return EXIT_FAILURE;
    }

    std::unique_ptr<Image> cloud_image = loadImage("/Users/mhudelot/Documents/Synthese/GLImac-Template/TP3/asset/textures/CloudMap.jpg");
    if(cloud_image == NULL) {
        std::cerr << "Failed to load Image" << std::endl;
        return EXIT_FAILURE;
    }

    glEnable(GL_DEPTH_TEST);

    /*std::unique_ptr<Image> image = loadImage("/Users/mhudelot/Documents/Synthese/GLImac-Template/TP3/asset/textures/triforce.png");
    if(image == NULL) {
        std::cerr << "Failed to load Image" << std::endl;
        return EXIT_FAILURE;
    }*/


    /*********************************
     * HERE SHOULD COME THE INITIALIZATION CODE
     *********************************/

    GLuint textures_earth[2];
    GLuint textures_moon;

    glGenTextures(2, textures_earth);

    glBindTexture(GL_TEXTURE_2D, textures_earth[0]);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, earth_image->getWidth(), earth_image->getHeight(), 0, GL_RGBA, GL_FLOAT, earth_image->getPixels());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glBindTexture(GL_TEXTURE_2D, textures_earth[1]);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, cloud_image->getWidth(), cloud_image->getHeight(), 0, GL_RGBA, GL_FLOAT, cloud_image->getPixels());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glBindTexture(GL_TEXTURE_2D, 0);

    glGenTextures(1, &textures_moon);

    glBindTexture(GL_TEXTURE_2D, textures_moon);

    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, moon_image->getWidth(), moon_image->getHeight(), 0, GL_RGBA, GL_FLOAT, moon_image->getPixels());
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);

    glBindTexture(GL_TEXTURE_2D, 0);

    Sphere sphere(1, 32 , 16);

    GLuint vbo, vao;

    glGenBuffers(1, &vbo);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);

    glBufferData(GL_ARRAY_BUFFER, sphere.getVertexCount() * sizeof(ShapeVertex), sphere.getDataPointer(), GL_STATIC_DRAW);

    // Debinding d'un VBO sur la cible GL_ARRAY_BUFFER:
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    glGenVertexArrays(1, &vao);

    // Binding de l'unique VAO:
    glBindVertexArray(vao);

    const GLuint VERTEX_ATTR_POSITION = 0;
    const GLuint VERTEX_ATTR_NORMAL = 1;
    const GLuint VERTEX_ATTR_TEXTURE = 2;
    glEnableVertexAttribArray(VERTEX_ATTR_POSITION);
    glEnableVertexAttribArray(VERTEX_ATTR_NORMAL);
    glEnableVertexAttribArray(VERTEX_ATTR_TEXTURE);

    // Re-binding du VBO sur la cible GL_ARRAY_BUFFER pour glVertexAttribPointer:
    glBindBuffer(GL_ARRAY_BUFFER, vbo);

    // Specification des attributs de position :
    glVertexAttribPointer(VERTEX_ATTR_POSITION, 3, GL_FLOAT, GL_FALSE, sizeof(ShapeVertex), (const GLvoid *) offsetof(ShapeVertex, position));
    glVertexAttribPointer(VERTEX_ATTR_NORMAL, 3, GL_FLOAT, GL_FALSE, sizeof(ShapeVertex), (const GLvoid *) offsetof(ShapeVertex, normal));
    glVertexAttribPointer(VERTEX_ATTR_TEXTURE, 2, GL_FLOAT, GL_FALSE, sizeof(ShapeVertex), (const GLvoid *) offsetof(ShapeVertex, texCoords));

    // Debinding d'un VBO sur la cible GL_ARRAY_BUFFER:
    glBindBuffer(GL_ARRAY_BUFFER, 0);

    // Debinding de l'unique VAO:
    glBindVertexArray(0);

    glm::mat4 ProjMatrix, MVMatrix, NormalMatrix;

    ProjMatrix = glm::perspective(glm::radians(70.f), 1.f, 0.1f, 100.f);
    MVMatrix = glm::translate(glm::mat4(1.f), glm::vec3(0.,0.,-5.));
    NormalMatrix = glm::transpose(glm::inverse(MVMatrix));

    std::vector<glm::vec3> loons_trans;
    std::vector<glm::vec3> loons_axis;
    for(int i = 0; i < 32; i++){
        loons_trans.push_back(glm::sphericalRand(1.f));
        loons_axis.push_back(glm::sphericalRand(2.f));
    }

    // Application loop:
    while (!glfwWindowShouldClose(windowManager)) {
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBindVertexArray(vao);

        earthProgram.m_Program.use();

        glUniform1i(earthProgram.uEarthTexture, 0);
        glUniform1i(earthProgram.uCloudTexture, 1);

        glm::mat4 globalMVMatrix = glm::translate(glm::mat4(1.f), glm::vec3(0, 0, -5));

        float time = glfwGetTime();

        glm::mat4 earthMVMatrix = glm::rotate(globalMVMatrix, time, glm::vec3(0, 1, 0));
        glUniformMatrix4fv(earthProgram.uMVMatrix, 1, GL_FALSE,
                           glm::value_ptr(earthMVMatrix));
        glUniformMatrix4fv(earthProgram.uNormalMatrix, 1, GL_FALSE,
                           glm::value_ptr(glm::transpose(glm::inverse(earthMVMatrix))));
        glUniformMatrix4fv(earthProgram.uMVPMatrix, 1, GL_FALSE,
                           glm::value_ptr(ProjMatrix * earthMVMatrix));

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, textures_earth[0]);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, textures_earth[1]);

        glDrawArrays(GL_TRIANGLES, 0, sphere.getVertexCount());

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, 0);
        glActiveTexture(GL_TEXTURE1);
        glBindTexture(GL_TEXTURE_2D, 0);

        glActiveTexture(GL_TEXTURE0);
        glUniform1i(moonProgram.uTexture, 0);
        glBindTexture(GL_TEXTURE_2D, textures_moon);

        moonProgram.m_Program.use();
        for(uint32_t i = 0; i < loons_axis.size(); i++) {

            glm::mat4 moonMVMatrix = glm::rotate(globalMVMatrix, time, loons_axis[i]); // Translation * Rotation
            moonMVMatrix = glm::translate(moonMVMatrix, loons_trans[i] * 2.f); // Translation * Rotation * Translation
            moonMVMatrix = glm::scale(moonMVMatrix, glm::vec3(0.2, 0.2, 0.2)); // Translation * Rotation * Translation * Scale

            glm::mat4 moonMVPMatrix = ProjMatrix * moonMVMatrix;

            glUniformMatrix4fv(moonProgram.uMVPMatrix, 1, GL_FALSE, glm::value_ptr(moonMVPMatrix));
            glUniformMatrix4fv(moonProgram.uMVMatrix, 1, GL_FALSE, glm::value_ptr(moonMVMatrix));
            glUniformMatrix4fv(earthProgram.uNormalMatrix, 1, GL_FALSE,
                               glm::value_ptr(glm::transpose(glm::inverse(moonMVMatrix))));



            glDrawArrays(GL_TRIANGLES, 0, sphere.getVertexCount());

        }

        glBindVertexArray(0);
        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, 0);

        glfwSwapBuffers(windowManager);
        glfwPollEvents();
    }
    glDeleteBuffers(1, &vbo);
    glDeleteVertexArrays(1, &vao);
    glDeleteTextures(2, textures_earth);
    glDeleteTextures(1, &textures_moon);

    glfwDestroyWindow(windowManager);
    glfwTerminate();

    return EXIT_SUCCESS;
}