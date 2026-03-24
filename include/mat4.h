// mat4.h
#pragma once
#include <cmath>
#include "vec3.h"

struct Mat4 {
    // 4x4 matrix stored as [row][col]
    float m[4][4];

    // --- Constructors ---

    // Default: zero matrix
    Mat4() {
        for (int i = 0; i < 4; i++)
            for (int j = 0; j < 4; j++)
                m[i][j] = 0.0f;
    }

    // Identity matrix — the "do nothing" transform
    // Hint: 1s on the diagonal (where row == col), 0s everywhere else
    static Mat4 identity() { /* TODO */ }

    // --- Matrix × Matrix multiplication ---
    // Hint: result[i][j] = dot product of row i of *this with col j of other
    Mat4 operator*(const Mat4& other) const { /* TODO */ }

    // --- Matrix × Vec3 ---
    // Treat the Vec3 as (x, y, z, 1) — a position
    // Hint: multiply each row by the vec4, return a Vec3 (drop w)
    Vec3 operator*(const Vec3& v) const { /* TODO */ }

    // --- Transform factories ---
    // These are static methods that return a ready-made transform matrix

    // Move by (tx, ty, tz)
    static Mat4 translation(float tx, float ty, float tz) { /* TODO */ }

    // Scale by (sx, sy, sz)
    static Mat4 scale(float sx, float sy, float sz) { /* TODO */ }

    // Rotate around X axis by angle (in radians)
    // Hint: use std::cos and std::sin
    static Mat4 rotationX(float angle) { /* TODO */ }

    // Rotate around Y axis by angle (in radians)
    static Mat4 rotationY(float angle) { /* TODO */ }

    // Rotate around Z axis by angle (in radians)
    static Mat4 rotationZ(float angle) { /* TODO */ }
};