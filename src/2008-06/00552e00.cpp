// from server: 35% by colin
struct Agg {
    void f(void*);
};

struct Vec3 {
    float x, y, z;
};

struct Chunk {
    char pad[0x24];
    Vec3 pos;
};

struct Base {
    virtual void getPos(Vec3* out);
};

extern "C" void __fastcall sub_45ac40(Vec3* out, Vec3* a, Vec3* b);
extern "C" void __fastcall sub_552e40(Chunk* c);

void Agg::f(void* p) {
    Vec3 tmp;
    Base* b = (Base*)p;
    Vec3* src;
    b->getPos(&tmp);
    src = (Vec3*)((char*)b + 0x24);
    sub_45ac40(&tmp, src, &tmp);
    sub_552e40((Chunk*)&tmp);
}
