// from server: 46% by colin
struct Vector3 { float x, y, z; };

struct Source {
    char reserved[0x90];
    unsigned int version;
    const void* get();
};

struct Primitive {
    char pad[0xa0];
    void* body;
    const Vector3& getValue();
};

extern "C" double __cdecl fabs(double);
extern "C" int __cdecl func_00645f60(Primitive*, int, Primitive*, const Vector3*);
extern "C" int __cdecl func_00646f60(Primitive*, int, Primitive*, const Vector3*);
extern "C" int __cdecl func_00669d30(Primitive*, int, Primitive*, const Vector3*);
extern "C" int __cdecl func_00669e20(Primitive*, int, Primitive*, const Vector3*);
extern "C" int __cdecl func_0060f750(const void*, const void*, float);

extern float g_0064d410;

struct SimJobStage {
    int __cdecl check(Source* a, Source* b);
};

int SimJobStage::check(Source* a, Source* b)
{
    const void* pa = a->get();
    const void* pb = b->get();
    if (func_0060f750(pa, pb, g_0064d410))
        return 0;

    Primitive* va = (Primitive*)a->get();
    Primitive* vb = (Primitive*)b->get();

    for (int i = 0; i < 6; ++i) {
        int r = i % 3;
        int q = i / 3;

        const Vector3& va0 = va->getValue();
        const Vector3& vb0 = vb->getValue();

        float ax = (&va0.x)[r];
        float ay = (&va0.x)[r + 3];
        float az = (&va0.x)[r + 6];

        float bx = (&vb0.x)[r];
        float by = (&vb0.x)[r + 3];
        float bz = (&vb0.x)[r + 6];

        float t = (float)q;
        Vector3 v;
        v.x = -(ax * t);
        v.y = -(ay * t);
        v.z = -(az * t);

        if (func_00645f60(va, i, vb, &v))
            break;
        if (func_00669e20(va, i, vb, &v))
            break;
        if (func_00669d30(va, i, vb, &v))
            break;
        if (func_00646f60(va, i, vb, &v))
            break;
    }

    return 0;
}
