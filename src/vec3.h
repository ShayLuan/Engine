// vec3.h
#pragma once
#include <cmath>

struct Vec3 {
    float x, y, z;

    // --- Constructors ---
    constexpr Vec3() : x(0), y(0), z(0) {}
    constexpr Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

    // --- Arithmetic operators ---
    // Hint: return a NEW Vec3, don't modify this one
    Vec3 operator+(const Vec3& other) const { /* TODO */ }
    Vec3 operator-(const Vec3& other) const { /* TODO */ }
    Vec3 operator*(float scalar) const      { /* TODO */ }
    Vec3 operator/(float scalar) const      { /* TODO */ }

    // --- Compound assignment operators ---
    // Hint: modify in place, return *this
    Vec3& operator+=(const Vec3& other) { /* TODO */ }
    Vec3& operator-=(const Vec3& other) { /* TODO */ }

    // --- Vector math ---
    float dot(const Vec3& other) const   { /* TODO */ }
    Vec3  cross(const Vec3& other) const { /* TODO */ }

    float length() const                 { /* TODO */ }  // hint: std::sqrt
    Vec3  normalize() const              { /* TODO */ }  // hint: *this / length()

    // --- Utility ---
    // Negate the vector (flip direction)
    Vec3 operator-() const { /* TODO */ }
};

// Allows writing: 2.0f * v  (scalar on the left)
inline Vec3 operator*(float scalar, const Vec3& v) { return v * scalar; }