// from server: 52% by colin
struct Creator {
    void* vtable;
    int refcount1;
    int refcount2;
    void* arg;
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct FactoryProduct {
    void* field0;
    FactoryProduct(void* arg, int dummy);
};

FactoryProduct::FactoryProduct(void* arg, int dummy)
{
    field0 = 0;
    Creator* c = (Creator*)operator_new(0x14);
    if (c) {
        c->refcount1 = 1;
        c->refcount2 = 1;
        c->vtable = (void*)0x811c3c;
        c->arg = arg;
    } else {
        c = 0;
    }
    field0 = c;
}
