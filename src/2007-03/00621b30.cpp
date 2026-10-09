// roc 2007-03 00621b30  unit: seg_00620000  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00621b30
//
// 00621b30  56                   push esi
// 00621b31  8bf1                 mov esi, ecx
// 00621b33  e8d8ffffff           call 0x621b10
// 00621b38  85c0                 test eax, eax
// 00621b3a  740d                 je 0x621b49
// 00621b3c  8b10                 mov edx, dword ptr [eax]
// 00621b3e  8bc8                 mov ecx, eax
// 00621b40  8b82f8010000         mov eax, dword ptr [edx + 0x1f8]
// 00621b46  5e                   pop esi
// 00621b47  ffe0                 jmp eax
// 00621b49  8b86cc010000         mov eax, dword ptr [esi + 0x1cc]
// 00621b4f  5e                   pop esi
// 00621b50  c3                   ret 
// copied from an identical function in another client (function ?getValue@CPatchedControlComboBox@ns_ROCX000030@@QAEHXZ)

namespace ns_ROCX000030 {
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
}
