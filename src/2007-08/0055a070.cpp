// from server: 51% by colin
struct ICreator {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};

struct CreatorImpl {
    int* field0;
};

struct FactoryProductCreator {
    int* field0;
    int field4;
    int field8;
    int fieldC;
};

extern "C" void* __cdecl operator_new(unsigned int size);

struct S {
    int* field0;
    S(int* a, int* b);
};

S::S(int* a, int* b) {
    field0 = 0;
    FactoryProductCreator* p = (FactoryProductCreator*)operator_new(0x14);
    if (p) {
        p->field4 = 1;
        p->field8 = 1;
        p->field0 = (int*)0x7a8a40;
        p->fieldC = (int)b;
    } else {
        p = 0;
    }
    field0 = (int*)p;
}
