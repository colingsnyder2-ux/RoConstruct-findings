// from server: 49% by colin
// roc 2007-08 006838b0  unit: CXTPPropertyGrid  size: 84 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006838b0
//
// 006838b0  53                   push ebx
// 006838b1  55                   push ebp
// 006838b2  56                   push esi
// 006838b3  8bf1                 mov esi, ecx
// 006838b5  83be40010000ff       cmp dword ptr [esi + 0x140], -1
// 006838bc  57                   push edi
// 006838bd  7437                 je 0x6838f6
// 006838bf  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006838c3  8b06                 mov eax, dword ptr [esi]
// 006838c5  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 006838c9  8b9054010000         mov edx, dword ptr [eax + 0x154]
// 006838cf  8bbe40010000         mov edi, dword ptr [esi + 0x140]
// 006838d5  53                   push ebx
// 006838d6  55                   push ebp
// 006838d7  ffd2                 call edx
// 006838d9  83e803               sub eax, 3
// 006838dc  3bf8                 cmp edi, eax
// 006838de  7516                 jne 0x6838f6
// 006838e0  8b06                 mov eax, dword ptr [esi]
// 006838e2  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006838e8  53                   push ebx
// 006838e9  55                   push ebp
// 006838ea  57                   push edi
// 006838eb  8bce                 mov ecx, esi
// 006838ed  ffd2                 call edx
// 006838ef  5f                   pop edi
// 006838f0  5e                   pop esi
// 006838f1  5d                   pop ebp
// 006838f2  5b                   pop ebx
// 006838f3  c20c00               ret 0xc
// 006838f6  8bce                 mov ecx, esi
// 006838f8  e841c9faff           call 0x63023e
// 006838fd  5f                   pop edi
// 006838fe  5e                   pop esi
// 006838ff  5d                   pop ebp
// 00683900  5b                   pop ebx
// 00683901  c20c00               ret 0xc

struct CXTPPropertyGrid {
    int field_0x140;
    void sub_63023e();
    int sub_6838b0(int, int, int);
};

int CXTPPropertyGrid::sub_6838b0(int a, int b, int c) {
    if (field_0x140 != -1) {
        int v = ((int (__thiscall *)(CXTPPropertyGrid*, int, int))((*(void***)this)[0x154 / 4]))(this, b, c);
        if (field_0x140 == v - 3) {
            ((void (__thiscall *)(CXTPPropertyGrid*, int, int, int))((*(void***)this)[0x144 / 4]))(this, field_0x140, b, c);
            return 0;
        }
    }
    sub_63023e();
    return 0;
}
