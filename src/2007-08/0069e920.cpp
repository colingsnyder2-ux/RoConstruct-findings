// from server: 48% by colin
// roc 2007-08 0069e920  unit: CXTPPropertyGridItemEnum  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069e920
//
// 0069e920  b805400080           mov eax, 0x80004005
// 0069e925  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069e928  64890d00000000       mov dword ptr fs:[0], ecx
// 0069e92f  59                   pop ecx
// 0069e930  5f                   pop edi
// 0069e931  5e                   pop esi
// 0069e932  5b                   pop ebx
// 0069e933  8be5                 mov esp, ebp
// 0069e935  5d                   pop ebp
// 0069e936  c21400               ret 0x14

struct CXTPPropertyGridItemEnum {
    int f(int, int, int, int, int);
};

int CXTPPropertyGridItemEnum::f(int, int, int, int, int)
{
    return (int)0x80004005;
}
