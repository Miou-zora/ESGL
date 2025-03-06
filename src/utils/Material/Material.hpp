#pragma once

// #include <GL/gl3w.h>
// #include <windows.h>
#include <glm/vec3.hpp>

namespace ESGL {
    class Material
    {
        public:
            Material() = default;
            ~Material() = default;

            GLfloat Shiness = 180;
            glm::vec3 Ka = glm::vec3(0.2, 0.2, 0.2);
            glm::vec3 Kd = glm::vec3(1, 0.3, 0.1);
            glm::vec3 Ks = glm::vec3(0.4, 0.4, 0.4);
    };
}