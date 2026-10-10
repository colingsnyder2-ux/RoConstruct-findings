// from server: 96% by colin
struct PVInstance {
    char pad[0x24];
    float x;
    float y;
    float z;
};

struct Helper {
    char pad[0x64];
    void* ptr;
};

struct Sub1 {
    void f();
};

struct Sub2 {
    void g(void*);
};

extern "C" void __stdcall sub_530100(void* p);
extern "C" void __stdcall sub_5095d0(void* dst, void* src);

struct PartInstance {
    PVInstance* getPV(PVInstance* dst);
};

PVInstance* PartInstance::getPV(PVInstance* dst) {
    Helper* h = *(Helper**)((char*)this - 0xb4);
    Sub1* s1 = (Sub1*)h->ptr;
    s1->f();
    Sub2* s2 = (Sub2*)((char*)s1 + 0x84);
    s2->g(dst);
    dst->x = *(float*)((char*)s2 + 0x24);
    dst->y = *(float*)((char*)s2 + 0x28);
    dst->z = *(float*)((char*)s2 + 0x2c);
    return dst;
}
