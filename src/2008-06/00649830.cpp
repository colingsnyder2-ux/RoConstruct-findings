// from server: 95% by king_originala
struct Vector3 {
    float x, y, z;
};

struct DoubleVector3 {
    double x, y, z;
};

struct Ball {
    Vector3 vertices[4];
    bool contains(const Vector3& point, float tolerance);
};

bool Ball::contains(const Vector3& point, float tolerance) {
    double limit = -tolerance;
    for (int i = 0; i < 4; ++i) {
        const Vector3& a = vertices[i];
        const Vector3& b = vertices[(i + 1) % 4];

        DoubleVector3 displacement;
        displacement.x = point.x - a.x;
        displacement.y = point.y - a.y;
        displacement.z = point.z - a.z;

        DoubleVector3 edge;
        edge.x = b.x - a.x;
        edge.y = b.y - a.y;
        edge.z = b.z - a.z;

        if (displacement.x * displacement.y + edge.x * edge.y +
            displacement.z * edge.z < limit)
            return false;
    }
    return true;
}
