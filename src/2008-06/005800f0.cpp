// from server: 47% by colin
struct ICreator {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
};

struct Creator : ICreator {
    int field0;
    int field4;
    int field8;
    int fieldC;
};

struct FactoryProduct {
    Creator* creator;
    FactoryProduct(int arg0, int arg1);
};

extern "C" void* __cdecl operator_new(unsigned int size);

FactoryProduct::FactoryProduct(int arg0, int arg1)
{
    creator = 0;
    Creator* c = (Creator*)operator_new(0x14);
    if (c != 0) {
        c->field4 = 1;
        c->field8 = 1;
        c->field0 = 0x830b40;
        c->fieldC = arg0;
    } else {
        c = 0;
    }
    creator = c;
}
