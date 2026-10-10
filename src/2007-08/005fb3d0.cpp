// from server: 54% by colin
struct Instance {
    static Instance* fastDynamicCast(Instance*);
};

struct PartInstance;

struct Vector3 {
    float x, y, z;
};

struct CoordinateFrame {
    Vector3 translation;
    float r00, r01, r02;
    float r10, r11, r12;
    float r20, r21, r22;
};

struct PartPrimitive {
    void getExtentsLocal(Vector3* out) const;
};

struct PartInstance : Instance {
    PartPrimitive* getPartPrimitive();
    CoordinateFrame getCoordinateFrame() const;
};

struct Frustum {
    bool containsAABB(const Vector3& extents, const CoordinateFrame& cframe) const;
};

struct ModelInstance {
    void render3dAdorn(int adorn);
};

extern "C" int __cdecl sub_630D36(int);
extern "C" int __stdcall sub_5BB2E0(int, int, int, int);
extern "C" int __stdcall sub_573F80(int);
extern "C" void __stdcall sub_530320(int, int, int, int);

void ModelInstance::render3dAdorn(int adorn)
{
    int* p = (int*)&adorn;
    int v = *p;
    int a = sub_5BB2E0(v, 0, 0x898fc0, 0x88c6b8);
    int b = sub_630D36(a);
    if (b) {
        int idx = *(int*)((char*)&adorn + 4);
        int c = sub_573F80(v);
        int q = idx / 3;
        int r = idx - q * 3;
        float f0 = ((float*)c)[r];
        float f1 = ((float*)c)[r + 3];
        float f2 = ((float*)c)[r + 6];
        float t = (float)(1 - q * 2);
        float o0 = f0 * t;
        float o1 = f1 * t;
        float o2 = f2 * t;
        sub_530320(b, (int)&o0, (int)&o1, (int)&o2);
    }
}
