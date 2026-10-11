// from server: 52% by colin
struct ICreator {
    void* vtable;
};

struct Creator : ICreator {
    void* field4;
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct(int arg);
};

extern "C" void* __cdecl operator_new(unsigned int size);

FactoryProduct::FactoryProduct(int arg) {
    this->creator = 0;
    Creator* c = (Creator*)operator_new(0x10);
    if (c) {
        c->vtable = (void*)0x822674;
        c->field4 = (void*)1;
        *(int*)((char*)c + 8) = 1;
        *(int*)((char*)c + 0xc) = arg;
    } else {
        c = 0;
    }
    this->creator = c;
}
