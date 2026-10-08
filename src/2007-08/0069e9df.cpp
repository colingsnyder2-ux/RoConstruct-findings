// from server: 48% by colin
// roc 2007-08 0069e9df  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e9df
//
// 0069e9df  b805400080           mov eax, 0x80004005
// 0069e9e4  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069e9e7  64890d00000000       mov dword ptr fs:[0], ecx
// 0069e9ee  59                   pop ecx
// 0069e9ef  5f                   pop edi
// 0069e9f0  5e                   pop esi
// 0069e9f1  5b                   pop ebx
// 0069e9f2  8be5                 mov esp, ebp
// 0069e9f4  5d                   pop ebp
// 0069e9f5  c21800               ret 0x18

struct CXTPPropertyGridItemEnum
{
    long __stdcall GetValue(int, int, int, int, int);
};

long __stdcall CXTPPropertyGridItemEnum::GetValue(int, int, int, int, int)
{
    return (long)0x80004005;
}
