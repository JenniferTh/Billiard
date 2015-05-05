#define GLFW_DLL
#include <c:/MinGW/include/GLFW/glfw3.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <iostream>
#include "vec3.hpp"
#include <iostream>
using namespace std;
static double window_width_ = 1024;
static double window_height_ = 768;

void Preview() {


}
int main() {
  GLFWwindow* window = NULL;

  printf("Here we go!\n");

  if(!glfwInit()){
    return -1;
  }

  window = glfwCreateWindow(window_width_, window_height_,
                            "Ueberragende 3D Animation", NULL, NULL);
  if(!window) {
    glfwTerminate();
    return -1;
  }

  glfwMakeContextCurrent(window);

  while(!glfwWindowShouldClose(window)) {
    // switch on lighting (or you don't see anything)

    // set background color
    glClearColor(0.8, 0.8, 0.8, 1.0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // draw the scene
    Preview();


    // make it appear (before this, it's hidden in the rear buffer)
    glfwSwapBuffers(window);

    glfwPollEvents();
  }
  glPopMatrix();

  glfwTerminate();

  //printf("Goodbye!\n");

  return 0;
}
