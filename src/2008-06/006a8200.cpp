// from server: 100% by tester
// roc 2008-06 006a8200  unit: CPatchedControlComboBox  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a8200
//
// 006a8200  56                   push esi
// 006a8201  8bf1                 mov esi, ecx
// 006a8203  e8d8ffffff           call 0x6a81e0
// 006a8208  85c0                 test eax, eax
// 006a820a  740d                 je 0x6a8219
// 006a820c  8b10                 mov edx, dword ptr [eax]
// 006a820e  8bc8                 mov ecx, eax
// 006a8210  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 006a8216  5e                   pop esi
// 006a8217  ffe0                 jmp eax
// 006a8219  8b86d8010000         mov eax, dword ptr [esi + 0x1d8]
// 006a821f  5e                   pop esi
// 006a8220  c3                   ret 

struct CPatchedControlComboBox {
    char pad[0x1d8];
    int field_1cc;
    int getValue();
};

struct Inner {
    virtual int method1f8();
};

extern "C" Inner* __fastcall sub_637300(CPatchedControlComboBox* self);

int CPatchedControlComboBox::getValue()
{
    Inner* p = sub_637300(this);
    if (p != 0)
        return (*(int (__thiscall**)(Inner*))((*(int*)p) + 0x210))(p);
    return this->field_1cc;
}
