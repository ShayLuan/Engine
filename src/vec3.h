// vec3.h
#pragma once
#include <cmath>

struct Vec3 {
    float x, y, z;

    // --- Constructors ---
    constexpr Vec3() : x(0), y(0), z(0) {}
    constexpr Vec3(float x, float y, float z) : x(x), y(y), z(z) {}

    // --- Arithmetic operators ---
    Vec3 operator+(const Vec3& other) const { 
        return Vec3(x + other.x, y + other.y, z + other.z);
     }

    Vec3 operator-(const Vec3& other) const { 
        return Vec3(x - other.x, y - other.y, z - other.z);
     }

    Vec3 operator*(float scalar) const      { 
        return Vec3(x * scalar, y * scalar, z * scalar);
     }
    Vec3 operator/(float scalar) const      { 
        if (scalar == 0.0f){
            return Vec3(0, 0, 0);
        }
        return Vec3(x / scalar, y / scalar, z / scalar);
     }

    // --- Compound assignment operators ---
    Vec3& operator+=(const Vec3& other) {  
        x += other.x;
        y += other.y;
        z += other.z;
        return *this;
    }

    Vec3& operator-=(const Vec3& other) { 
        x -= other.x;
        y -= other.y;
        z -= other.z;
        return *this;
    }

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