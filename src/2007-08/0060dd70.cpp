// from server: 65% by colin
struct Vector3 {
    float x, y, z;
};

struct Ball {
    bool overlapsSomething(const Vector3* other, float radius) const;
};

bool Ball::overlapsSomething(const Vector3* other, float radius) const {
    const Vector3* self = (const Vector3*)((const char*)this + 8);
    float r2 = radius * radius;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            float dx = self[i].x - other[j].x;
            float dy = self[i].y - other[j].y;
            float dz = self[i].z - other[j].z;
            float d2 = dx * dx + dy * dy + dz * dz;
            if (d2 < r2) {
                return true;
            }
        }
    }
    return false;
}
