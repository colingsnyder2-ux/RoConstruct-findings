// from server: 76% by king_originala
#pragma float_control(precise, off)

struct Vector {
    float x, y, z;
    Vector();
    Vector(float a, float b, float c);
    Vector(const Vector& v);
};

__forceinline Vector::Vector() : x(0.0f), y(0.0f), z(0.0f) {}
__forceinline Vector::Vector(float a, float b, float c) : x(a), y(b), z(c) {}
__forceinline Vector::Vector(const Vector& v) : x(v.x), y(v.y), z(v.z) {}

struct Frame {
    float r[9];
    Vector position;
    Vector transform(const Vector& v) const;
};

extern const char* frameType;
extern const char* vectorType;

extern "C" void* __cdecl checkArgument(void*, int, const char*);
extern "C" int __cdecl getTop(void*);
extern "C" void __cdecl pushVector(void*, Vector);

int transformArguments(void* state)
{
    Frame* frame = static_cast<Frame*>(checkArgument(state, 1, frameType));
    int count = getTop(state) - 1;

    if (count == 0) {
        static const Vector zero;
        pushVector(state, frame->transform(zero));
        return 1;
    }

    for (int i = 0; i < count; ++i) {
        const Vector* v = static_cast<const Vector*>(
            checkArgument(state, i + 2, vectorType));

        float x = v->x - frame->position.x;
        float y = v->y - frame->position.y;
        float z = v->z - frame->position.z;

        pushVector(state, Vector(
            frame->r[0] * x + frame->r[3] * y + frame->r[6] * z,
            frame->r[1] * x + frame->r[4] * y + frame->r[7] * z,
            frame->r[2] * x + frame->r[5] * y + frame->r[8] * z));
    }

    return count;
}
