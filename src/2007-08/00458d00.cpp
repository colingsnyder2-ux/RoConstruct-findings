// from server: 71% by colin
// roc 2007-08 00458d00  unit: CRobloxWnd  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00458d00
//
// 00458d00  56                   push esi
// 00458d01  8bf1                 mov esi, ecx
// 00458d03  e8f8feffff           call 0x458c00
// 00458d08  8bce                 mov ecx, esi
// 00458d0a  e82f751d00           call 0x63023e
// 00458d0f  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 00458d12  85c9                 test ecx, ecx
// 00458d14  5e                   pop esi
// 00458d15  740d                 je 0x458d24
// 00458d17  c744240400000000     mov dword ptr [esp + 4], 0
// 00458d1f  e9ccad0000           jmp 0x463af0
// 00458d24  c20400               ret 4

struct CRobloxWnd {
    void sub_458C00();
    void sub_63023E();
    void sub_463AF0();
    char pad[0x74];
    void* field_74;
    void func(int);
};

void CRobloxWnd::func(int) {
    sub_458C00();
    sub_63023E();
    if (field_74 != 0) {
        field_74 = 0;
        sub_463AF0();
    }
}
