// from server: 100% by colin
// roc 2007-08 006b22d0  unit: CXTPRibbonTheme  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b22d0
//
// 006b22d0  8b442404             mov eax, dword ptr [esp + 4]
// 006b22d4  83b8fc00000005       cmp dword ptr [eax + 0xfc], 5
// 006b22db  7509                 jne 0x6b22e6
// 006b22dd  89442404             mov dword ptr [esp + 4], eax
// 006b22e1  e98afeffff           jmp 0x6b2170
// 006b22e6  c20400               ret 4

struct Obj {
    unsigned char pad[0xfc];
    int field;
};

void __stdcall sub_6b2170(Obj* p);

void __stdcall sub_6b22d0(Obj* p)
{
    if (p->field == 5)
        sub_6b2170(p);
}
