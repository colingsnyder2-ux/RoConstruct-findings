// from server: 100% by colin
// roc 2007-08 006b9ef0  unit: XTPPaintThemes::CXTPDefaultTheme  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006b9ef0
//
// 006b9ef0  8b442408             mov eax, dword ptr [esp + 8]
// 006b9ef4  83b8f400000002       cmp dword ptr [eax + 0xf4], 2
// 006b9efb  7517                 jne 0x6b9f14
// 006b9efd  8b442404             mov eax, dword ptr [esp + 4]
// 006b9f01  b903000000           mov ecx, 3
// 006b9f06  8908                 mov dword ptr [eax], ecx
// 006b9f08  894804               mov dword ptr [eax + 4], ecx
// 006b9f0b  894808               mov dword ptr [eax + 8], ecx
// 006b9f0e  89480c               mov dword ptr [eax + 0xc], ecx
// 006b9f11  c20800               ret 8
// 006b9f14  56                   push esi
// 006b9f15  8b742408             mov esi, dword ptr [esp + 8]
// 006b9f19  50                   push eax
// 006b9f1a  56                   push esi
// 006b9f1b  e8a081f8ff           call 0x6420c0
// 006b9f20  8bc6                 mov eax, esi
// 006b9f22  5e                   pop esi
// 006b9f23  c20800               ret 8

struct CXTPDefaultTheme {
    char pad[0xf4];
    int field0;
};

extern "C" int __stdcall sub_6420c0(int, int);

int __stdcall sub_6b9ef0(int *out, CXTPDefaultTheme *theme) {
    if (theme->field0 == 2) {
        out[0] = 3;
        out[1] = 3;
        out[2] = 3;
        out[3] = 3;
        return (int)out;
    }
    sub_6420c0((int)out, (int)theme);
    return (int)out;
}
