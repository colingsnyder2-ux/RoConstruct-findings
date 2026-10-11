// from server: 52% by atomic.potato
extern "C" void* __cdecl sub_7F3860(unsigned int size);

struct VBodyThrustCreator {
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
    VBodyThrustCreator* p;
    this->field0 = 0;
    p = (VBodyThrustCreator*)sub_7F3860(0x14);
    if (p != 0) {
        p->field4 = (void*)1;
        p->field8 = (void*)1;
        p->field0 = (void*)0x9cd190;
        p->fieldC = (void*)a;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
