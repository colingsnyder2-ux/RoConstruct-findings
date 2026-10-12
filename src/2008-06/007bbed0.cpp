// from server: 94% by king_originala
#pragma float_control(precise, off)

extern const unsigned char table[];

struct Vector3 {
    float x, y, z;
};

struct S {
    const void* volatile tag;
    float v[24];

    S(const Vector3& a, const Vector3& b);
};

S::S(const Vector3& a, const Vector3& b) : tag(table) {
    v[0] = 0.0f;
    v[1] = 0.0f;
    v[2] = 0.0f;
    v[3] = 0.0f;
    v[4] = 0.0f;
    v[5] = 0.0f;
    v[6] = 0.0f;
    v[7] = 0.0f;
    v[8] = 0.0f;
    v[9] = 0.0f;
    v[10] = 0.0f;
    v[11] = 0.0f;
    v[12] = 0.0f;
    v[13] = 0.0f;
    v[14] = 0.0f;
    v[15] = 0.0f;
    v[16] = 0.0f;
    v[17] = 0.0f;
    v[18] = 0.0f;
    v[19] = 0.0f;
    v[20] = 0.0f;
    v[21] = 0.0f;
    v[22] = 0.0f;
    v[23] = 0.0f;

    v[0] = v[3] = v[6] = v[9] = b.x;
    v[12] = v[15] = v[18] = v[21] = a.x;
    v[1] = v[4] = v[13] = v[16] = b.y;
    v[7] = v[10] = v[19] = v[22] = a.y;
    v[2] = v[8] = v[14] = v[20] = b.z;
    v[5] = v[11] = v[17] = v[23] = a.z;
}
