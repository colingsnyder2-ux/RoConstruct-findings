// from server: 100% by colin
// roc 2007-08 00719130  unit: CXTPControlPopupColor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00719130
//
// 00719130  8b442408             mov eax, dword ptr [esp + 8]
// 00719134  56                   push esi
// 00719135  57                   push edi
// 00719136  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0071913a  50                   push eax
// 0071913b  57                   push edi
// 0071913c  8bf1                 mov esi, ecx
// 0071913e  e86d7ff5ff           call 0x6710b0
// 00719143  8b8f78010000         mov ecx, dword ptr [edi + 0x178]
// 00719149  5f                   pop edi
// 0071914a  898e78010000         mov dword ptr [esi + 0x178], ecx
// 00719150  5e                   pop esi
// 00719151  c20800               ret 8

extern "C" void __stdcall sub_006710B0(int, int);

struct CXTPControlPopupColor
{
    char pad[0x178];
    int field_178;
    void sub_00719130(int, int);
};

void CXTPControlPopupColor::sub_00719130(int a, int b)
{
    sub_006710B0(a, b);
    *(int*)((char*)this + 0x178) = *(int*)((char*)a + 0x178);
}
