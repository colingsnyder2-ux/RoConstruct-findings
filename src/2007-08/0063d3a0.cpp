// from server: 79% by colin
// roc 2007-08 0063d3a0  unit: CXTPPaintManager  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0063d3a0
//
// 0063d3a0  83ec08               sub esp, 8
// 0063d3a3  53                   push ebx
// 0063d3a4  56                   push esi
// 0063d3a5  8b742414             mov esi, dword ptr [esp + 0x14]
// 0063d3a9  57                   push edi
// 0063d3aa  bf02000000           mov edi, 2
// 0063d3af  39bef4000000         cmp dword ptr [esi + 0xf4], edi
// 0063d3b5  8bd9                 mov ebx, ecx
// 0063d3b7  740b                 je 0x63d3c4
// 0063d3b9  5f                   pop edi
// 0063d3ba  5e                   pop esi
// 0063d3bb  33c0                 xor eax, eax
// 0063d3bd  5b                   pop ebx
// 0063d3be  83c408               add esp, 8
// 0063d3c1  c20400               ret 4
// 0063d3c4  8b06                 mov eax, dword ptr [esi]
// 0063d3c6  8b9090010000         mov edx, dword ptr [eax + 0x190]
// 0063d3cc  8bce                 mov ecx, esi
// 0063d3ce  ffd2                 call edx
// 0063d3d0  85c0                 test eax, eax
// 0063d3d2  7409                 je 0x63d3dd
// 0063d3d4  83befc01000000       cmp dword ptr [esi + 0x1fc], 0
// 0063d3db  7505                 jne 0x63d3e2
// 0063d3dd  bf01000000           mov edi, 1
// 0063d3e2  8b03                 mov eax, dword ptr [ebx]
// 0063d3e4  8b9008010000         mov edx, dword ptr [eax + 0x108]
// 0063d3ea  56                   push esi
// 0063d3eb  8d4c2410             lea ecx, [esp + 0x10]
// 0063d3ef  51                   push ecx
// 0063d3f0  8bcb                 mov ecx, ebx
// 0063d3f2  ffd2                 call edx
// 0063d3f4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0063d3f8  0fafc7               imul eax, edi
// 0063d3fb  5f                   pop edi
// 0063d3fc  5e                   pop esi
// 0063d3fd  83c001               add eax, 1
// 0063d400  5b                   pop ebx
// 0063d401  83c408               add esp, 8
// 0063d404  c20400               ret 4

struct CXTPPaintManager {
    int GetBorderSize(void* p);
};

int CXTPPaintManager::GetBorderSize(void* p) {
    int n = 2;
    if (*(int*)((char*)p + 0xf4) != 2)
        return 0;
    int (*fn1)(void*) = *(int (**)(void*))((*(int*)p) + 0x190);
    if (fn1(p) == 0 || *(int*)((char*)p + 0x1fc) == 0)
        n = 1;
    int (*fn2)(void*, int*) = *(int (**)(void*, int*))((*(int*)this) + 0x108);
    int result;
    fn2(this, &result);
    return result * n + 1;
}
