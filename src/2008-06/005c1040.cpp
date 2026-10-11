// from server: 29% by colin
// roc 2008-06 005c1040  unit: RBX::VExplosion::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c1040

extern "C" void* __cdecl malloc(unsigned int size);

struct Creator {
    void* field0;
    void construct(void* p);
    void* create();
};

void* Creator::create()
{
    void* mem = malloc(0x41c);
    void* obj = 0;
    if (mem) {
        obj = (void*)((char*)mem);
        ((Creator*)mem)->construct((void*)1);
    }
    this->construct(obj);
    return this;
}
