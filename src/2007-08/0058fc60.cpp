// from server: 22% by colin
// roc 2007-08 0058fc60  unit: RBX::VBodyVelocity::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0058fc60

extern "C" void* __stdcall malloc(unsigned int size);

struct Creator {
    void construct(void* p);
    void* create();
};

struct FactoryProduct {
    void* creator;
    void* create();
};

void* FactoryProduct::create()
{
    void* mem = malloc(0x144);
    void* obj = 0;
    if (mem) {
        Creator* c = (Creator*)mem;
        c->construct(mem);
        obj = mem;
    }
    return obj;
}
