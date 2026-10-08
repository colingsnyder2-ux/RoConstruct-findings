// from server: 95% by colin
// roc 2007-08 00682a20  unit: CXTPPropertyGridToolBar  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00682a20
//
// 00682a20  56                   push esi
// 00682a21  8bf1                 mov esi, ecx
// 00682a23  83be4401000000       cmp dword ptr [esi + 0x144], 0
// 00682a2a  7516                 jne 0x682a42
// 00682a2c  8b06                 mov eax, dword ptr [esi]
// 00682a2e  8b9040010000         mov edx, dword ptr [eax + 0x140]
// 00682a34  ffd2                 call edx
// 00682a36  898644010000         mov dword ptr [esi + 0x144], eax
// 00682a3c  89b0b0000000         mov dword ptr [eax + 0xb0], esi
// 00682a42  8b8644010000         mov eax, dword ptr [esi + 0x144]
// 00682a48  5e                   pop esi
// 00682a49  c3                   ret 

struct CXTPPropertyGridToolBar {
    int field_0;
    char pad[0x140];
    int field_144;
    int GetSomething();
};

int CXTPPropertyGridToolBar::GetSomething()
{
    if (field_144 == 0)
    {
        int (__thiscall *fn)(CXTPPropertyGridToolBar*);
        fn = *(int (__thiscall **)(CXTPPropertyGridToolBar*))((*(int *)this) + 0x140);
        field_144 = fn(this);
        *(CXTPPropertyGridToolBar **)(field_144 + 0xb0) = this;
    }
    return field_144;
}
