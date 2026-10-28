// from server: 0% by atomic.potato
extern "C" void* __cdecl sub_98211a(unsigned int size);

struct VBodyAngularVelocity {
    void* vtable;
    void* field_4;
    void* field_8;
    void* field_c;
};

struct Creator {
    void* field_0;
    VBodyAngularVelocity* __thiscall create(int a, int b);
};

VBodyAngularVelocity* __thiscall Creator::create(int a, int b)
{
    VBodyAngularVelocity* p;
    this->field_0 = 0;
    p = (VBodyAngularVelocity*)sub_98211a(0x14);
    if (p != 0) {
        p->field_4 = (void*)1;
        p->field_8 = (void*)1;
        p->field_c = (void*)a;
        p->vtable = (void*)0xbafd04;
    } else {
        p = 0;
    }
    this->field_0 = p;
    return p;
}
