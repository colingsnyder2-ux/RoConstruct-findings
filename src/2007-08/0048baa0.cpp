// from server: 32% by colin
struct RBXName;

struct ICreator {
    virtual void unknown0();
    virtual void unknown1();
    virtual void unknown2();
};

struct Creator : ICreator {
    Creator();
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct();
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall sub_5A2880(void* p);
extern "C" void __stdcall sub_48B9F0(void* p, void* a, void* b);

FactoryProduct::FactoryProduct()
{
    creator = 0;
    void* mem = malloc(0x108);
    if (mem != 0) {
        sub_5A2880(mem);
    } else {
        mem = 0;
    }
    sub_48B9F0(this, mem, creator);
}
