#include <iostream>
#include "vec3.h"
#include "mat4.h"

int main() {

    std::ios::sync_with_stdio(true);  
    std::cout.flush();

    Vec3 a(1, 0, 0);
    Vec3 b(0, 1, 0);

    // Should print: (1, 1, 0)
    Vec3 sum = a + b;
    std::cout << "a + b = (" << sum.x << ", " << sum.y << ", " << sum.z << ")" << std::endl;

    // Should print: 0  (perpendicular vectors)
    std::cout << "dot(a, b) = " << a.dot(b) << std::endl;

    // Should print: (0, 0, 1)  (Z axis — right hand rule)
    Vec3 c = a.cross(b);
    std::cout << "cross(a, b) = (" << c.x << ", " << c.y << ", " << c.z << ")" << std::endl;

    // Should print: 1  (a is already length 1)
    std::cout << "length(a) = " << a.length() << std::endl;

    // Should print: (0, 1, 0)  (already normalized)
    Vec3 n = b.normalize();
    std::cout << "normalize(b) = (" << n.x << ", " << n.y << ", " << n.z << ")" << std::endl;

    std::cout << "==============================" << std::endl;
    std::cout << "======== MAT4 TESTING ========" << std::endl;
    std::cout << "==============================" << std::endl;

        // Identity × any vec should return the same vec
    Mat4 I = Mat4::identity();
    Vec3 v(1, 2, 3);
    Vec3 result = I * v;
    std::cout << "Identity * (1,2,3) = ("
              << result.x << ", " << result.y << ", " << result.z << ")\n";
    // Expected: (1, 2, 3)

    // Translation by (1, 0, 0) should shift X
    Mat4 T = Mat4::translation(1, 0, 0);
    Vec3 moved = T * v;
    std::cout << "Translate(1,0,0) * (1,2,3) = ("
              << moved.x << ", " << moved.y << ", " << moved.z << ")\n";
    // Expected: (2, 2, 3)

    // Scale by 2 should double everything
    Mat4 S = Mat4::scale(2, 2, 2);
    Vec3 scaled = S * v;
    std::cout << "Scale(2,2,2) * (1,2,3) = ("
              << scaled.x << ", " << scaled.y << ", " << scaled.z << ")\n";
    // Expected: (2, 4, 6)

    // Chain: translate then scale
    Mat4 TS = S * T;
    Vec3 chained = TS * v;
    std::cout << "Scale * Translate * (1,2,3) = ("
              << chained.x << ", " << chained.y << ", " << chained.z << ")\n";
    // Expected: (4, 4, 6)  — think about why!

    std::cin.get();
    return 0;
}