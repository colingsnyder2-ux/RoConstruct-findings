// from server: 48% by colin
// roc 2007-08 0069eed8  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069eed8
//
// 0069eed8  b805400080           mov eax, 0x80004005
// 0069eedd  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069eee0  64890d00000000       mov dword ptr fs:[0], ecx
// 0069eee7  59                   pop ecx
// 0069eee8  5f                   pop edi
// 0069eee9  5e                   pop esi
// 0069eeea  5b                   pop ebx
// 0069eeeb  8be5                 mov esp, ebp
// 0069eeed  5d                   pop ebp
// 0069eeee  c22000               ret 0x20

struct CXTPPropertyGridItemEnum
{
    long __stdcall f(int, int, int, int, int, int, int);
};

long __stdcall CXTPPropertyGridItemEnum::f(int, int, int, int, int, int, int)
{
    return (long)0x80004005;
}
