// from server: 86% by colin
struct Primitive {
    char pad0[0x1c];
    int field0x1c;
    char pad1[0x6c - 0x20];
    int field0x6c;
    char field0x70;
    char field0x71;
    void setSomething(bool value);
};

extern "C" void* __cdecl operator_new(unsigned int size);
extern "C" void __cdecl operator_delete(void* p);
extern "C" void __stdcall sub_5a9250(void* p);
extern "C" void __stdcall sub_5a9290(void* p);

void Primitive::setSomething(bool value)
{
    field0x71 = value;
    bool cl = (field0x6c != 0);
    bool al = value;
    if (!al) {
        if (field0x70 != al)
            al = true;
    } else {
        al = true;
    }
    if (al == cl)
        return;
    if (al) {
        int* p = (int*)operator_new(4);
        if (p)
            *p = (int)this;
        else
            p = 0;
        field0x6c = (int)p;
        if (field0x1c != 0)
            sub_5a9250(this);
    } else {
        if (field0x1c != 0)
            sub_5a9290(this);
        if (field0x6c != 0)
            operator_delete((void*)field0x6c);
        field0x6c = 0;
    }
}
