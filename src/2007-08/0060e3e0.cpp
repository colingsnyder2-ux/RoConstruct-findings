// from server: 15% by colin
struct Vec3 { float x, y, z; };

struct Ball {
    char pad0[0xc];
    Vec3 size;
    char pad18[0xc];
    Vec3 pos;
    char pad30[0x14];
    void sub_60e1f0(const Vec3& a, const Vec3& b, float* out1, float* out2);
    void func(Vec3* out, const Ball* other);
};

void Ball::sub_60e1f0(const Vec3& a, const Vec3& b, float* out1, float* out2) {
    float dx = a.x - b.x;
    float dy = a.y - b.y;
    float dz = a.z - b.z;
    float len = dx*dy + dx*dy + dz*dz;
    float inv = 1.0f / len;
    out1[0] = dx * inv;
    out1[1] = dy * inv;
    out1[2] = dz * inv;
    out2[0] = dx;
    out2[1] = dy;
    out2[2] = dz;
}
