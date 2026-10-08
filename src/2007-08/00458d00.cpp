// from server: 63% by colin
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
    char pad[0x74];
    void* field_74;
    void sub_00458c00();
    void sub_0063023e();
    void sub_00463af0(int);
    void func_00458d00(int);
};

void CRobloxWnd::func_00458d00(int arg)
{
    sub_00458c00();
    sub_0063023e();
    if (field_74 != 0) {
        sub_00463af0(0);
    }
}
