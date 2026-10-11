// from server: 23% by tester
// roc 2008-06 00432790  unit: RBX::VAccoutrement::?$FactoryProduct::Creator  size: 122 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432790

extern "C" void* __cdecl malloc(unsigned int size);

struct Creator {
    void construct(void* p, int flag);
    void init(void* p, int flag);
};

struct FactoryProduct {
    void* field0;
    void* field4;
    void init(void* a, void* b);
};

void Creator::construct(void* p, int flag) {
    if (p) {
        init(p, flag);
    }
}

void FactoryProduct::init(void* a, void* b) {
    field0 = a;
    field4 = b;
}

void* __cdecl FactoryProductCreator_create(FactoryProduct* self, void* arg) {
    void* mem = malloc(0x1d8);
    void* obj = 0;
    if (mem) {
        obj = mem;
        ((Creator*)mem)->construct(mem, 1);
    }
    self->init(obj, arg);
    return self;
}
