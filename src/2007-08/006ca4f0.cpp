// from server: 98% by atomic.potato
struct CXTPToolBar_CControlButtonHide
{
    char pad_0[0x9c];
    int field_9c;
    char pad_a0[0xb8];
    int field_158;

    void __thiscall func(int a, int b);
};

struct SubObj
{
    char pad_0[0xf4];
    int field_f4;
    char pad_f8[4];
    int field_fc;
};

extern "C" int __fastcall sub_0063a580(int);

void __thiscall CXTPToolBar_CControlButtonHide::func(int a, int b)
{
    int eax = this->field_9c;
    if (eax == -1)
    {
        int ecx = this->field_158;
        if (ecx != 0)
        {
            eax = sub_0063a580(ecx);
        }
    }
    if (eax != 0)
    {
        SubObj* p = *(SubObj**)((char*)this + 0xfc);
        if (p->field_f4 == 2 || p->field_fc == 5)
        {
            void** vt = *(void***)this;
            void (__thiscall *fn)(void*) = (void (__thiscall *)(void*))vt[0x98/4];
            fn(this);
        }
    }
}
