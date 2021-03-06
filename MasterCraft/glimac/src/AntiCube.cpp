//
// Created by Matthias Hudelot on 08/02/2020.
//

#include "glimac/AntiCube.hpp"

void AntiCube::build() {
  generateFrontFace();
  m_nVertexCount += 6;
  generateLeftFace();
  m_nVertexCount += 6;
  generateBackFace();
  m_nVertexCount += 6;
  generateRightFace();
  m_nVertexCount += 6;
  generateTopFace();
  m_nVertexCount += 6;
  generateBottomFace();
  m_nVertexCount += 6;
}

void AntiCube::generateFrontFace() {
  // FACE 1 (FRONT) (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)

  // Triangle 1
  ShapeVertex vertex;
  // TOP LEFT CORNER

  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = glm::vec3(-1.f, 1.f, 1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = vec3(1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = vec3(-1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // Triangle 2
  // TOP RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = vec3(1.f, 1.f, 1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = vec3(1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 1.f;

  vertex.position = glm::vec3(-1.f, 1.f, 1.f);

  m_Vertices.push_back(vertex);
}

void AntiCube::generateLeftFace() {
  // FACE LEFT (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)
  // Triangle 1
  // TOP LEFT CORNER
  ShapeVertex vertex;

  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(-1.f, 1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // Triangle 2
  // TOP RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, 1.f, 1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = -1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(-1.f, 1.f, -1.f);

  m_Vertices.push_back(vertex);
}

void AntiCube::generateBackFace() {
  // FACE 1 (FRONT) (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)
  ShapeVertex vertex;

  // Triangle 1

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = vec3(1.f, 1.f, -1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = vec3(-1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = vec3(1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // Triangle 2

  // TOP RIGHT CORNER

  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = glm::vec3(-1.f, 1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = vec3(-1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = -1.f;

  vertex.position = vec3(1.f, 1.f, -1.f);
  m_Vertices.push_back(vertex);
}

void AntiCube::generateRightFace() {
  // FACE LEFT (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)
  // Triangle 1

  ShapeVertex vertex;

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, 1.f, 1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, 1.f);

  m_Vertices.push_back(vertex);

  // Triangle 2
  // TOP RIGHT CORNER

  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(1.f, 1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, -1.f);

  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 1.f;
  vertex.normal.y = 0.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, 1.f, 1.f);
  m_Vertices.push_back(vertex);
}

void AntiCube::generateTopFace() {
  // FACE 1 (FRONT) (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)

  // Triangle 1
  ShapeVertex vertex;
  // TOP LEFT CORNER

  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(-1.f, 1.f, -1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, 1.f, 1.f);

  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, 1.f, 1.f);

  m_Vertices.push_back(vertex);

  // Triangle 2
  // TOP RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, 1.f, -1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, 1.f, 1.f);

  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = 1.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(-1.f, 1.f, -1.f);
  m_Vertices.push_back(vertex);
}

void AntiCube::generateBottomFace() {
  // FACE 1 (FRONT) (4 vertices (SQUARE) --> 6 vertices (2 TRIANGLES)
  // Triangle 1
  ShapeVertex vertex;

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, -1.f, 1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, -1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM LEFT CORNER

  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = glm::vec3(-1.f, -1.f, -1.f);
  m_Vertices.push_back(vertex);

  // Triangle 2

  // TOP RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, 1.f);
  m_Vertices.push_back(vertex);

  // BOTTOM RIGHT CORNER
  vertex.texCoords.x = 1.f;
  vertex.texCoords.y = 1.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(1.f, -1.f, -1.f);
  m_Vertices.push_back(vertex);

  // TOP LEFT CORNER
  vertex.texCoords.x = 0.f;
  vertex.texCoords.y = 0.f;

  vertex.normal.x = 0.f;
  vertex.normal.y = -1.f;
  vertex.normal.z = 0.f;

  vertex.position = vec3(-1.f, -1.f, 1.f);
  m_Vertices.push_back(vertex);
}

GLsizei AntiCube::getVertexCount() const { return m_nVertexCount; }

const glimac::ShapeVertex *AntiCube::getDataPointer() const {
  return &m_Vertices[0];
}