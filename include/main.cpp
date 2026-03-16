#include <iostream>
#include "../src/vec3.h"

int main() {
    Vec3 a(1, 0, 0);
    Vec3 b(0, 1, 0);

    // Should print: (1, 1, 0)
    Vec3 sum = a + b;
    std::cout << "a + b = (" << sum.x << ", " << sum.y << ", " << sum.z << ")\n";

    // Should print: 0  (perpendicular vectors)
    std::cout << "dot(a, b) = " << a.dot(b) << "\n";

    // Should print: (0, 0, 1)  (Z axis — right hand rule)
    Vec3 c = a.cross(b);
    std::cout << "cross(a, b) = (" << c.x << ", " << c.y << ", " << c.z << ")\n";

    // Should print: 1  (a is already length 1)
    std::cout << "length(a) = " << a.length() << "\n";

    // Should print: (0, 1, 0)  (already normalized)
    Vec3 n = b.normalize();
    std::cout << "normalize(b) = (" << n.x << ", " << n.y << ", " << n.z << ")\n";

    return 0;
}