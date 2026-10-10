// from server: 32% by tester
// roc 2008-06 00408ed0  unit: RBX::VDebugSettings::?$FactoryProduct::Creator  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00408ed0

extern "C" void* __cdecl malloc(unsigned int size);

struct CreatorBase {
    void construct(void* p);
};

struct Creator : CreatorBase {
    void __cdecl init(void* p);
};

void Creator::init(void* p)
{
    void* mem = malloc(0x17c);
    if (mem) {
        ((CreatorBase*)mem)->construct(mem);
    } else {
        mem = 0;
    }
    this->construct(mem);
}
