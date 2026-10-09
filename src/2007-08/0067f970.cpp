// from server: 47% by colin
// roc 2007-08 0067f970  unit: CXTPPrintPageHeaderFooter  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f970
//
// 0067f970  53                   push ebx
// 0067f971  55                   push ebp
// 0067f972  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0067f976  85ed                 test ebp, ebp
// 0067f978  8bd9                 mov ebx, ecx
// 0067f97a  744b                 je 0x67f9c7
// 0067f97c  56                   push esi
// 0067f97d  57                   push edi
// 0067f97e  8d7520               lea esi, [ebp + 0x20]
// 0067f981  8d7b20               lea edi, [ebx + 0x20]
// 0067f984  b90f000000           mov ecx, 0xf
// 0067f989  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0067f98b  8b455c               mov eax, dword ptr [ebp + 0x5c]
// 0067f98e  8d4d60               lea ecx, [ebp + 0x60]
// 0067f991  51                   push ecx
// 0067f992  8d4b60               lea ecx, [ebx + 0x60]
// 0067f995  89435c               mov dword ptr [ebx + 0x5c], eax
// 0067f998  ff1534d47700         call dword ptr [0x77d434]
// 0067f99e  8d5564               lea edx, [ebp + 0x64]
// 0067f9a1  52                   push edx
// 0067f9a2  8d4b64               lea ecx, [ebx + 0x64]
// 0067f9a5  ff1534d47700         call dword ptr [0x77d434]
// 0067f9ab  8d4568               lea eax, [ebp + 0x68]
// 0067f9ae  50                   push eax
// 0067f9af  8d4b68               lea ecx, [ebx + 0x68]
// 0067f9b2  ff1534d47700         call dword ptr [0x77d434]
// 0067f9b8  83c56c               add ebp, 0x6c
// 0067f9bb  55                   push ebp
// 0067f9bc  8d4b6c               lea ecx, [ebx + 0x6c]
// 0067f9bf  ff1534d47700         call dword ptr [0x77d434]
// 0067f9c5  5f                   pop edi
// 0067f9c6  5e                   pop esi
// 0067f9c7  5d                   pop ebp
// 0067f9c8  5b                   pop ebx
// 0067f9c9  c20400               ret 4

struct CXTPPrintPageHeaderFooter
{
    char pad0[0x20];
    char field20[0x3c];
    int field5c;
    char field60[4];
    char field64[4];
    char field68[4];
    char field6c[4];

    void assign(CXTPPrintPageHeaderFooter* other);
};

extern "C" void __stdcall sub_77d434(void* dst, void* src);

void CXTPPrintPageHeaderFooter::assign(CXTPPrintPageHeaderFooter* other)
{
    if (other != 0)
    {
        int* dst = (int*)((char*)this + 0x20);
        int* src = (int*)((char*)other + 0x20);
        for (int i = 0; i < 0xf; ++i)
        {
            dst[i] = src[i];
        }
        field5c = other->field5c;
        sub_77d434(field60, other->field60);
        sub_77d434(field64, other->field64);
        sub_77d434(field68, other->field68);
        sub_77d434(field6c, other->field6c);
    }
}
