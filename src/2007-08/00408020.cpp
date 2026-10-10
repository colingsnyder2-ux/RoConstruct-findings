// from server: 35% by colin
struct RBXName;

struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
};

struct Creator : ICreator {
    void construct(RBXName* name);
};

struct FactoryProduct {
    void FactoryProduct_ctor(Creator* creator, RBXName* name);
};

extern "C" void* __cdecl malloc(unsigned int size);

extern "C" void __stdcall sub_53DD40(void* p);

extern "C" void __stdcall sub_407F70(Creator* self, void* a, void* b);

void FactoryProduct::FactoryProduct_ctor(Creator* creator, RBXName* name)
{
    void* mem = malloc(0x118);
    if (mem) {
        sub_53DD40(mem);
    } else {
        mem = 0;
    }
    sub_407F70(creator, mem, name);
}
