// from server: 32% by colin
struct ICreator {
    virtual void v0();
    virtual void v1();
};

struct Creator : ICreator {
    void __cdecl construct(void* a, void* b);
};

struct FactoryProduct {
    Creator* creator;
    void FactoryProduct_ctor(Creator* c);
};

extern "C" void* __cdecl malloc(unsigned int size);
extern "C" void __stdcall sub_48F6B0(void* p);

void Creator::construct(void* a, void* b) {
    void* mem = malloc(0x168);
    if (mem) {
        sub_48F6B0(mem);
    } else {
        mem = 0;
    }
    FactoryProduct* self = (FactoryProduct*)this;
    self->FactoryProduct_ctor((Creator*)mem);
}
