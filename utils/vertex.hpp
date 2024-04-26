#pragma once


#include <glm/glm.hpp>

struct Vertex {
	glm::vec3 position;

    explicit Vertex(const glm::vec3 &position) : position(position) {}
};


struct VertexNorm {
	glm::vec3 position;
	glm::vec3 normal;

    VertexNorm(const glm::vec3 &position, const glm::vec3 &normal) : position(position), normal(normal) {}
};

struct VertexColor {
	glm::vec3 position;
	glm::vec3 color;
};


struct VertexTex {
	glm::vec3 position;
	glm::vec2 texCoords;

    VertexTex(const glm::vec3 &position, const glm::vec2 &texCoords) : position(position), texCoords(texCoords) {}
};

struct VertexNormTex {
	glm::vec3 position;
	glm::vec3 normal;
	glm::vec2 texCoords;

    VertexNormTex(const glm::vec3 &position, const glm::vec3 &normal, const glm::vec2 &texCoords) : position(position), normal(normal), texCoords(texCoords) {}
};
