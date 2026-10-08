// from server: 48% by colin
// roc 2007-08 0069ea98  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ea98
//
// 0069ea98  b805400080           mov eax, 0x80004005
// 0069ea9d  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069eaa0  64890d00000000       mov dword ptr fs:[0], ecx
// 0069eaa7  59                   pop ecx
// 0069eaa8  5f                   pop edi
// 0069eaa9  5e                   pop esi
// 0069eaaa  5b                   pop ebx
// 0069eaab  8be5                 mov esp, ebp
// 0069eaad  5d                   pop ebp
// 0069eaae  c21000               ret 0x10

struct CXTPPropertyGridItemEnum {
    int f(int, int, int, int);
};

int CXTPPropertyGridItemEnum::f(int, int, int, int) {
    return (int)0x80004005;
}
