// from server: 42% by colin
struct Vector3 {
    float x, y, z;
};

struct Ball {
    char pad0[0xc];
    float sizeX;
    float sizeY;
    float sizeZ;
    char pad1[0x10];
    float otherX;
    float otherY;
    float otherZ;
    void getSurfaceNormalInBody(int surfaceId, Vector3* out) const;
};

void Ball::getSurfaceNormalInBody(int surfaceId, Vector3* out) const {
    Vector3 tmp;
    if (surfaceId == 0) {
        float dx = sizeX - otherX;
        float dy = sizeY - otherY;
        float dz = sizeZ - otherZ;
        float len = dx*dx + dy*dy + dz*dz;
        float inv = 1.0f / len;
        tmp.x = dx * inv;
        tmp.y = dy * inv;
        tmp.z = dz * inv;
    } else {
        float dx = otherX - sizeX;
        float dy = otherY - sizeY;
        float dz = otherZ - sizeZ;
        float len = dx*dx + dy*dy + dz*dz;
        float inv = 1.0f / len;
        tmp.x = dx * inv;
        tmp.y = dy * inv;
        tmp.z = dz * inv;
    }
    out->x = tmp.x;
    out->y = tmp.y;
    out->z = tmp.z;
}
