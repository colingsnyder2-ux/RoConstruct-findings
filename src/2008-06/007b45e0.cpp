// from server: 86% by king_originala




struct Vector3 {
    float x, y, z;
};

struct Vector4 {
    float x, y, z, w;
    void set(const Vector3& v);
};

inline void Vector4::set(const Vector3& v) {
    x = v.x;
    y = v.y;
    z = v.z;
    w = 0.0f;
}

extern Vector3* __cdecl randomVector(Vector3* result);
extern "C" int (__cdecl *rand)();
extern const float randomScale;
extern const double sizeOffset;

struct VectorArray {
    Vector4* data;
    int count;
    int capacity;
    void resize(int count, bool preserve);
};

struct FloatArray {
    float* data;
    int count;
    int capacity;
    void resize(int count, bool preserve);
};

struct Sky {
    unsigned char padding[0x38];
    VectorArray vectors;
    FloatArray sizes;
    void setCount(int count);
};

void Sky::setCount(int count) {
    if (count == vectors.count)
        return;

    vectors.resize(count, true);
    sizes.resize(vectors.count, true);

    for (int i = vectors.count - 1; i >= 0; --i) {
        Vector3 temporary;
        vectors.data[i].set(*randomVector(&temporary));
        double r = rand() * randomScale;
        sizes.data[i] = r * r + sizeOffset;
    }
}
