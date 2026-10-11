// from server: 48% by colin
struct ICreator {
    void* vtable;
};

struct Creator {
    void* field0;
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct FactoryProductCreator : public ICreator {
    int field4;
    int field8;
    int fieldC;
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct(int arg0, int arg1);
};

FactoryProduct::FactoryProduct(int arg0, int arg1) {
    creator = 0;
    void* mem = operator_new(0x14);
    if (mem) {
        FactoryProductCreator* c = (FactoryProductCreator*)mem;
        c->field4 = 1;
        c->field8 = 1;
        c->fieldC = arg0;
        c->vtable = (void*)0x824bbc;
        creator = (Creator*)c;
    } else {
        creator = 0;
    }
}
