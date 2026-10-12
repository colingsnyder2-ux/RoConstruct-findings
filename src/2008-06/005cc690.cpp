// from server: 95% by king_originala
#pragma float_control(precise, off)

struct Vector3 {
    float x, y, z;
    Vector3 operator*(float s) const;
    void set(float a, float b, float c);
};

inline Vector3 Vector3::operator*(float s) const {
    Vector3 r = { x * s, y * s, z * s };
    return r;
}

inline void Vector3::set(float a, float b, float c) {
    x = a;
    y = b;
    z = c;
}

struct Matrix3 {
    float elements[9];
    Vector3 column(int index) const;
};

struct Frame {
    Matrix3 rotation;
    Vector3 translation;
};

extern "C" void __cdecl setRotation(Matrix3*, float, float);
extern const float scale;

struct S {
    char padding[0x174];
    Frame current;
    Frame original;
    char padding2[0x10];
    unsigned char changed;
    void update(float a, float b, float distance);
};

void S::update(float a, float b, float distance) {
    setRotation(&current.rotation, a, b);
    original.rotation = current.rotation;
    Vector3 offset = (current.rotation.column(2) * scale) * distance;
    current.translation.set(
        original.translation.x - offset.x,
        original.translation.y - offset.y,
        original.translation.z - offset.z);
    changed = 1;
}
