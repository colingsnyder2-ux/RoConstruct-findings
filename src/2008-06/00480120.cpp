// roc 2008-06 00480120  unit: G3D::Win32Window  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00480120
//
// 00480120  53                   push ebx
// 00480121  57                   push edi
// 00480122  8bf9                 mov edi, ecx
// 00480124  33db                 xor ebx, ebx
// 00480126  395f0c               cmp dword ptr [edi + 0xc], ebx
// 00480129  7e2e                 jle 0x480159
// 0048012b  56                   push esi
// 0048012c  8d642400             lea esp, [esp]
// 00480130  8b4708               mov eax, dword ptr [edi + 8]
// 00480133  8b0498               mov eax, dword ptr [eax + ebx*4]
// 00480136  85c0                 test eax, eax
// 00480138  7418                 je 0x480152
// 0048013a  8d9b00000000         lea ebx, [ebx]
// 00480140  8b700c               mov esi, dword ptr [eax + 0xc]
// 00480143  50                   push eax
// 00480144  e8b77b0800           call 0x507d00
// 00480149  83c404               add esp, 4
// 0048014c  8bc6                 mov eax, esi
// 0048014e  85f6                 test esi, esi
// 00480150  75ee                 jne 0x480140
// 00480152  43                   inc ebx
// 00480153  3b5f0c               cmp ebx, dword ptr [edi + 0xc]
// 00480156  7cd8                 jl 0x480130
// 00480158  5e                   pop esi
// 00480159  8b4f08               mov ecx, dword ptr [edi + 8]
// 0048015c  51                   push ecx
// 0048015d  e8be7b0800           call 0x507d20
// 00480162  83c404               add esp, 4
// 00480165  c7470800000000       mov dword ptr [edi + 8], 0
// 0048016c  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00480173  c7470400000000       mov dword ptr [edi + 4], 0
// 0048017a  5f                   pop edi
// 0048017b  5b                   pop ebx
// 0048017c  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgWeld.cpp (function ?freeMemory@?$Table@PAV?$Array@H@G3D@@_N@G3D@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgWeld.cpp
