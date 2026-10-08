// from server: 100% by colin
// roc 2007-08 00637320  unit: CPatchedControlComboBox  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00637320
//
// 00637320  56                   push esi
// 00637321  8bf1                 mov esi, ecx
// 00637323  e8d8ffffff           call 0x637300
// 00637328  85c0                 test eax, eax
// 0063732a  740d                 je 0x637339
// 0063732c  8b10                 mov edx, dword ptr [eax]
// 0063732e  8bc8                 mov ecx, eax
// 00637330  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 00637336  5e                   pop esi
// 00637337  ffe0                 jmp eax
// 00637339  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 0063733f  5e                   pop esi
// 00637340  c3                   ret 

struct CPatchedControlComboBox {
    char pad[0x1cc];
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
        return (*(int (__thiscall**)(Inner*))((*(int*)p) + 0x1f8))(p);
    return this->field_1cc;
}
