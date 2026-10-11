// from server: 32% by colin
extern "C" void* __cdecl malloc(unsigned int size);

struct Obj {
    void construct();
};

struct Creator {
    void init(void* a, void* b);
};

struct FactoryProduct {
    void* __cdecl create(Creator* creator);
};

void* FactoryProduct::create(Creator* creator)
{
    Obj* p = (Obj*)malloc(0x170);
    if (p) {
        p->construct();
    } else {
        p = 0;
    }
    creator->init(p, 0);
    return creator;
}
