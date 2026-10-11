// from server: 51% by tester
struct ICreator {
    void* vtable;
    ICreator();
};

struct FactoryProduct {
    ICreator* creator;
    FactoryProduct(int a, int b);
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct CreatorImpl {
    void* vtable;
    int refcount1;
    int refcount2;
    int arg;
};

struct FactoryProductCreator {
    ICreator* creator;
    FactoryProductCreator(int arg);
};

FactoryProductCreator::FactoryProductCreator(int arg)
{
    this->creator = 0;
    CreatorImpl* p = (CreatorImpl*)operator_new(0x14);
    if (p) {
        p->refcount1 = 1;
        p->refcount2 = 1;
        p->vtable = (void*)0x838850;
        p->arg = arg;
    } else {
        p = 0;
    }
    this->creator = (ICreator*)p;
}
