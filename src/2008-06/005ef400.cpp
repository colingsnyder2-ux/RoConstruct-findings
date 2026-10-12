// from server: 89% by king_originala
struct Vector3 {
    float x, y, z;
};

struct Vector4 {
    float x, y, z, w;
};

struct Part {
    void* get();
};

extern "C" void* __cdecl __RTDynamicCast(void*, long, void*, void*, int);
extern char instanceType[];
extern char partType[];
extern const Vector3& __cdecl getVector();
extern void __cdecl submit(void*, int, int, const Vector4*);

struct S {
    char padding[16];
    int value;
    void f(int, int);
};

void S::f(int argument, int)
{
    Part* part = static_cast<Part*>(
        __RTDynamicCast(reinterpret_cast<void**>(this)[-11],
                        0, instanceType, partType, 0));

    if (part) {
        const Vector3& source = getVector();
        int savedArgument = argument;
        int savedValue = value;
        Vector4 vector;
        vector.x = source.x;
        vector.y = source.y;
        vector.z = source.z;
        vector.w = 1.0f;
        submit(part->get(), savedValue, savedArgument, &vector);
    }
}
