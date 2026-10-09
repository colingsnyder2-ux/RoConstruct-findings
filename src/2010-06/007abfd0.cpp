// roc 2010-06 007abfd0  unit: PAVCXTPControlAction::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007abfd0
//
// 007abfd0  53                   push ebx
// 007abfd1  56                   push esi
// 007abfd2  8bd9                 mov ebx, ecx
// 007abfd4  33f6                 xor esi, esi
// 007abfd6  e8c5210200           call 0x7ce1a0
// 007abfdb  85c0                 test eax, eax
// 007abfdd  7e26                 jle 0x7ac005
// 007abfdf  57                   push edi
// 007abfe0  56                   push esi
// 007abfe1  8bcb                 mov ecx, ebx
// 007abfe3  e8e85c0500           call 0x801cd0
// 007abfe8  8bf8                 mov edi, eax
// 007abfea  8bcf                 mov ecx, edi
// 007abfec  e8bffeffff           call 0x7abeb0
// 007abff1  8bcf                 mov ecx, edi
// 007abff3  e824bfffff           call 0x7a7f1c
// 007abff8  8bcb                 mov ecx, ebx
// 007abffa  46                   inc esi
// 007abffb  e8a0210200           call 0x7ce1a0
// 007ac000  3bf0                 cmp esi, eax
// 007ac002  7cdc                 jl 0x7abfe0
// 007ac004  5f                   pop edi
// 007ac005  6aff                 push -1
// 007ac007  6a00                 push 0
// 007ac009  8d4b20               lea ecx, [ebx + 0x20]
// 007ac00c  e8ef520300           call 0x7e1300
// 007ac011  5e                   pop esi
// 007ac012  5b                   pop ebx
// 007ac013  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@Outer@ns_ROCX000000@ns_ROCX00002b@@QAEXXZ)

namespace ns_ROCX000000 {
struct S_func_00624fe0 {
    char pad0[40];
    int m_x;
    int f();
};
int S_func_00624fe0::f()
{
    return m_x;
}
}
