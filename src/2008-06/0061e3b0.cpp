// from server: 80% by king_originala
struct State;

struct Vector {
    float x, y, z;
    Vector();
    Vector(const Vector&);
};

inline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f) {}

inline Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

struct Matrix {
    float m[3][3];
    Vector operator*(const Vector&) const;
};

inline Vector Matrix::operator*(const Vector& v) const {
    Vector r;
    r.x = m[0][2] * v.z + m[0][1] * v.y + m[0][0] * v.x;
    r.y = m[1][2] * v.z + m[1][0] * v.x + m[1][1] * v.y;
    r.z = m[2][2] * v.z + m[2][0] * v.x + m[2][1] * v.y;
    return r;
}

struct Transform {
    Matrix rotation() const;
};

extern void* transformTag;
extern void* vectorTag;

extern "C" void* __cdecl checkObject(State*, int, void*);
extern "C" int __cdecl lua_gettop(State*);
extern "C" void __cdecl pushVector(State*, Vector);

int __cdecl transformVectors(State* state) {
    Transform* transform =
        static_cast<Transform*>(checkObject(state, 1, transformTag));
    int count = lua_gettop(state) - 1;

    if (count == 0) {
        static Vector zero;
        pushVector(state, transform->rotation() * zero);
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        Vector* v =
            static_cast<Vector*>(checkObject(state, i + 2, vectorTag));
        pushVector(state, transform->rotation() * *v);
    }

    return count;
}
