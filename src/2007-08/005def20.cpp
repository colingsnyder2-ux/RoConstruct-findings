// from server: 61% by colin
// roc 2007-08 005def20  unit: RBX::VMotorFeature::?$FactoryProduct  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005def20
//
// 005def20  53                   push ebx
// 005def21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005def25  56                   push esi
// 005def26  57                   push edi
// 005def27  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005def2b  2bfb                 sub edi, ebx
// 005def2d  c1ff02               sar edi, 2
// 005def30  8bc7                 mov eax, edi
// 005def32  99                   cdq 
// 005def33  2bc2                 sub eax, edx
// 005def35  8bf0                 mov esi, eax
// 005def37  d1fe                 sar esi, 1
// 005def39  85f6                 test esi, esi
// 005def3b  7e1a                 jle 0x5def57
// 005def3d  8d4900               lea ecx, [ecx]
// 005def40  8b44b3fc             mov eax, dword ptr [ebx + esi*4 - 4]
// 005def44  83ee01               sub esi, 1
// 005def47  50                   push eax
// 005def48  57                   push edi
// 005def49  56                   push esi
// 005def4a  53                   push ebx
// 005def4b  e8c0f5ffff           call 0x5de510
// 005def50  83c410               add esp, 0x10
// 005def53  85f6                 test esi, esi
// 005def55  7fe9                 jg 0x5def40
// 005def57  5f                   pop edi
// 005def58  5e                   pop esi
// 005def59  5b                   pop ebx
// 005def5a  c3                   ret 

struct RBX_VMotorFeature_FactoryProduct
{
    void sort(int *begin, int *end);
};

void RBX_VMotorFeature_FactoryProduct::sort(int *begin, int *end)
{
    int count = (int)(end - begin);
    int half = count / 2;
    while (half > 0)
    {
        int value = begin[half - 1];
        half = half - 1;
        extern void heapAdjust(int *, int, int, int);
        heapAdjust(begin, count, half, value);
    }
}
