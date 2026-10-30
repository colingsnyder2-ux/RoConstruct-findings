// roc 2009-12 007faa20  unit: CPatchedControlComboBox  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007faa20
//
// 007faa20  56                   push esi
// 007faa21  8bf1                 mov esi, ecx
// 007faa23  e8d8ffffff           call 0x7faa00
// 007faa28  85c0                 test eax, eax
// 007faa2a  740d                 je 0x7faa39
// 007faa2c  8b10                 mov edx, dword ptr [eax]
// 007faa2e  8bc8                 mov ecx, eax
// 007faa30  8b8210020000         mov eax, dword ptr [edx + 0x210]
// 007faa36  5e                   pop esi
// 007faa37  ffe0                 jmp eax
// 007faa39  8b86d8010000         mov eax, dword ptr [esi + 0x1d8]
// 007faa3f  5e                   pop esi
// 007faa40  c3                   ret 
// copied from an identical function in another client (function ?getValue@CPatchedControlComboBox@@QAEHXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// from server: 100% by tester
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