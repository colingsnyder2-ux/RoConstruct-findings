// from server: 33% by colin
// roc 2007-08 0064e281  unit: CXTPImageManager  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0064e281
//
// 0064e281  33c0                 xor eax, eax
// 0064e283  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 0064e286  64890d00000000       mov dword ptr fs:[0], ecx
// 0064e28d  59                   pop ecx
// 0064e28e  5f                   pop edi
// 0064e28f  5e                   pop esi
// 0064e290  5b                   pop ebx
// 0064e291  83c53c               add ebp, 0x3c
// 0064e294  8be5                 mov esp, ebp
// 0064e296  5d                   pop ebp
// 0064e297  c20400               ret 4

struct CXTPImageManager
{
    int func_0064e281(int);
};

int CXTPImageManager::func_0064e281(int)
{
    return 0;
}
