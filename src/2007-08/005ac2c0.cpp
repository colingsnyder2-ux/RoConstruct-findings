// from server: 31% by colin
struct Vector3 {
    float x, y, z;
};

struct World {
    float field0;
    float field4;
    float field8;
    float fieldC;
    float field10;
    float field14;
    float field18;
    void func(const Vector3* a, const Vector3* b, Vector3* out);
};

void World::func(const Vector3* a, const Vector3* b, Vector3* out) {
    float ax = a->x;
    float ay = a->y;
    float az = a->z;
    float bx = b->x;
    float by = b->y;
    float bz = b->z;

    float dx = bx - ax;
    float dy = by - ay;
    float dz = bz - az;

    float dot = dx * dx + dy * dy + dz * dz;

    if (dot >= 1.0f) {
        out->x = ax;
        out->y = ay;
        out->z = az;
    } else {
        float inv = 1.0f - dot;
        float s = 1.0f / inv;
        out->x = ax + dx * s;
        out->y = ay + dy * s;
        out->z = az + dz * s;
    }
}
