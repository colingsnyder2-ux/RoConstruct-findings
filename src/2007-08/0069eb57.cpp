// from server: 48% by colin
// roc 2007-08 0069eb57  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069eb57
//
// 0069eb57  b805400080           mov eax, 0x80004005
// 0069eb5c  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069eb5f  64890d00000000       mov dword ptr fs:[0], ecx
// 0069eb66  59                   pop ecx
// 0069eb67  5f                   pop edi
// 0069eb68  5e                   pop esi
// 0069eb69  5b                   pop ebx
// 0069eb6a  8be5                 mov esp, ebp
// 0069eb6c  5d                   pop ebp
// 0069eb6d  c21800               ret 0x18

struct CXTPPropertyGridItemEnum
{
    long __stdcall f(int, int, int, int, int);
};

long __stdcall CXTPPropertyGridItemEnum::f(int, int, int, int, int)
{
    return (long)0x80004005;
}
