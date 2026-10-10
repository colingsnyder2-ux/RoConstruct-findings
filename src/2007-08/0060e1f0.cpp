// from server: 48% by colin
struct Vector3 {
    float x, y, z;
};

struct Ball {
    float data[12];
    void func(const Vector3& a, const Vector3& b, Vector3& out1, Vector3& out2) const;
};

extern float g_7c2f8c;
extern float g_7c2f88;

void Ball::func(const Vector3& a, const Vector3& b, Vector3& out1, Vector3& out2) const {
    out1.x = g_7c2f8c;
    out2.x = g_7c2f88;

    for (int i = 0; i < 4; ++i) {
        float dx = data[i*3+0] - a.x;
        float dy = data[i*3+1] - a.y;
        float dz = data[i*3+2] - a.z;
        float d = dx * b.x + dy * b.y + dz * b.z;
        if (d < out1.x) out1.x = d;
        if (d > out2.x) out2.x = d;
    }
}
