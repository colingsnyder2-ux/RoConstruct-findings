// from server: 20% by colin
// roc 2008-06 0054aed0  unit: RBX::RenderBase::Mesh  size: 410 bytes

struct Vec3 { float x, y, z; };

struct Mesh {
    int f(int a, int b);
};

extern "C" void* __cdecl sub_401670(unsigned int size, void* src);

struct Helper {
    char __thiscall sub_501ee0(int idx);
    void __thiscall sub_5025c0(int a, int b);
    Vec3* __thiscall sub_514be0(const Vec3* src);
};

int Mesh::f(int a, int b)
{
    Helper* h = (Helper*)this;
    if (h->sub_501ee0(a) || h->sub_501ee0(b)) {
        Vec3 va, vb;
        h->sub_514be0((const Vec3*)&a);
        h->sub_514be0((const Vec3*)&b);
        return this->f((int)&va, (int)&vb);
    }
    int* p = (int*)this;
    if (p[1] + 1 < p[2]) {
        Vec3* dst1 = (Vec3*)sub_401670(0xc, (char*)p[0] + p[1] * 0xc);
        Vec3* r1 = dst1 ? h->sub_514be0((const Vec3*)&a) : 0;
        Vec3* dst2 = (Vec3*)sub_401670(0xc, (char*)p[0] + p[1] * 0xc + 0xc);
        Vec3* r2 = dst2 ? h->sub_514be0((const Vec3*)&b) : 0;
        p[1] += 2;
        (void)r1; (void)r2;
    } else {
        h->sub_5025c0(p[1] + 2, 0);
        h->sub_514be0((const Vec3*)((char*)p[0] + (p[1] - 2) * 0xc));
        h->sub_514be0((const Vec3*)((char*)p[0] + (p[1] - 1) * 0xc));
    }
    return 0;
}
