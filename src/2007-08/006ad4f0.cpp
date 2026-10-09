// from server: 81% by colin
// roc 2007-08 006ad4f0  unit: CXTPRibbonTheme  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ad4f0
//
// 006ad4f0  8b542418             mov edx, dword ptr [esp + 0x18]
// 006ad4f4  85d2                 test edx, edx
// 006ad4f6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006ad4fa  7529                 jne 0x6ad525
// 006ad4fc  837c240400           cmp dword ptr [esp + 4], 0
// 006ad501  753a                 jne 0x6ad53d
// 006ad503  85c0                 test eax, eax
// 006ad505  7436                 je 0x6ad53d
// 006ad507  837c240800           cmp dword ptr [esp + 8], 0
// 006ad50c  752f                 jne 0x6ad53d
// 006ad50e  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ad513  7528                 jne 0x6ad53d
// 006ad515  837c241400           cmp dword ptr [esp + 0x14], 0
// 006ad51a  7521                 jne 0x6ad53d
// 006ad51c  8b81d8050000         mov eax, dword ptr [ecx + 0x5d8]
// 006ad522  c21c00               ret 0x1c
// 006ad525  83fa02               cmp edx, 2
// 006ad528  7513                 jne 0x6ad53d
// 006ad52a  f7d8                 neg eax
// 006ad52c  1bc0                 sbb eax, eax
// 006ad52e  83e009               and eax, 9
// 006ad531  83c023               add eax, 0x23
// 006ad534  50                   push eax
// 006ad535  e836f8f8ff           call 0x63cd70
// 006ad53a  c21c00               ret 0x1c
// 006ad53d  f7d8                 neg eax
// 006ad53f  1bc0                 sbb eax, eax
// 006ad541  83e0f2               and eax, 0xfffffff2
// 006ad544  83c03c               add eax, 0x3c
// 006ad547  50                   push eax
// 006ad548  e823f8f8ff           call 0x63cd70
// 006ad54d  c21c00               ret 0x1c

struct CXTPRibbonTheme {
    int GetColor(int, int, int, int, int, int);
    char pad[0x5d8];
    int field_5d8;
};

extern "C" int __stdcall sub_63cd70(int);

int CXTPRibbonTheme::GetColor(int a1, int a2, int a3, int a4, int a5, int a6)
{
    if (a6 == 0) {
        if (a1 != 0)
            goto other;
        if (a2 == 0)
            goto other;
        if (a3 != 0)
            goto other;
        if (a4 != 0)
            goto other;
        if (a5 != 0)
            goto other;
        return field_5d8;
    }
    if (a6 == 2) {
        int v = (a2 != 0) ? 0x23 : 0x2c;
        sub_63cd70(v);
        return 0;
    }
other:
    {
        int v = (a2 != 0) ? 0x3c : 0x2e;
        sub_63cd70(v);
        return 0;
    }
}
