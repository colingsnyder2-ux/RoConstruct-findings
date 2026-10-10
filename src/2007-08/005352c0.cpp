// from server: 74% by colin
// roc 2007-08 005352c0  unit: std::logic_error  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005352c0

extern "C" void* __stdcall sub_5BF240(void* a, int b, void* c);
extern "C" void __stdcall sub_5BDD60(void* a, int b);

struct Vec3 {
    float x;
    float y;
    float z;
};

struct S {
    int f(void* a);
};

int S::f(void* a)
{
    void* p1;
    void* p2;
    int eq;

    p1 = sub_5BF240(*(void**)0x8ABE78, 2, a);
    p2 = sub_5BF240(*(void**)0x8ABE78, 1, a);

    eq = 0;
    if (((Vec3*)p1)->x == ((Vec3*)p2)->x) {
        if (((Vec3*)p1)->y == ((Vec3*)p2)->y) {
            if (((Vec3*)p1)->z == ((Vec3*)p2)->z) {
                eq = 1;
            }
        }
    }

    sub_5BDD60(a, eq);
    return 1;
}
