// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_7A79A0(unsigned int size);

struct FactoryProduct {
    void* field0;
    void* field4;
    void* field8;
    void* fieldC;
    void* field10;
};

struct Creator {
    void* field0;
    Creator* __thiscall init(void* arg, void* arg2);
};

Creator* __thiscall Creator::init(void* arg, void* arg2)
{
    FactoryProduct* p = (FactoryProduct*)sub_7A79A0(0x14);
    if (p != 0) {
        p->field4 = (void*)1;
        p->field8 = (void*)1;
        p->field0 = (void*)0xA2B330;
        p->fieldC = arg;
    } else {
        p = 0;
    }
    this->field0 = p;
    return this;
}
