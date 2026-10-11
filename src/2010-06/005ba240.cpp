// from server: 44% by atomic.potato
extern "C" void* __cdecl sub_7A79A0(unsigned int size);

struct VVirtualUser {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
};

struct FactoryProductCreator {
    void* field0;
    void* __thiscall create(unsigned int a, unsigned int b);
};

void* __thiscall FactoryProductCreator::create(unsigned int a, unsigned int b)
{
    VVirtualUser* p = (VVirtualUser*)sub_7A79A0(0x14);
    if (p != 0) {
        p->field4 = (void*)1;
        p->field8 = (void*)1;
        p->field0 = (void*)0xA2B1A8;
        p->fieldC = (void*)a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
