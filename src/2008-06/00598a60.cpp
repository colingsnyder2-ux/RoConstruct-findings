// from server: 79% by king_originala
struct Vec3 {
    float x, y, z;
};

struct Velocity {
    Vec3 linear;
    Vec3 angular;
};

struct S {
    char padding[0x24];
    Vec3 position;
    Vec3 linear;
    Vec3 angular;

    Velocity f(const Vec3& point);
};

Velocity S::f(const Vec3& point)
{
    double dx = (double)point.x - position.x;
    double dy = (double)point.y - position.y;
    double dz = (double)point.z - position.z;

    double cx = angular.y * dz - angular.z * dy;
    double cy = angular.z * dx - angular.x * dz;
    double cz = angular.x * dy - angular.y * dx;

    double vx = cx + linear.x;
    double vy = cy + linear.y;
    double vz = cz + linear.z;

    Velocity result;
    result.linear.x = (float)vx;
    result.linear.y = (float)vy;
    result.linear.z = (float)vz;
    result.angular.x = angular.x;
    result.angular.y = angular.y;
    result.angular.z = angular.z;
    return result;
}
