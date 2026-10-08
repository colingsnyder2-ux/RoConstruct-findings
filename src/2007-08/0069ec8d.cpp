// from server: 26% by colin
// roc 2007-08 0069ec8d  unit: CXTPPropertyGridItemEnum  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0069ec8d
//
// 0069ec8d  33c0                 xor eax, eax
// 0069ec8f  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0069ec92  64890d00000000       mov dword ptr fs:[0], ecx
// 0069ec99  59                   pop ecx
// 0069ec9a  5f                   pop edi
// 0069ec9b  5e                   pop esi
// 0069ec9c  5b                   pop ebx
// 0069ec9d  8be5                 mov esp, ebp
// 0069ec9f  5d                   pop ebp
// 0069eca0  c3                   ret 

struct CXTPPropertyGridItemEnum
{
    int func_0069ec8d();
};

int CXTPPropertyGridItemEnum::func_0069ec8d()
{
    return 0;
}
