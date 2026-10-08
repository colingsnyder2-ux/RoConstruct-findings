// from server: 100% by auto
// roc 2009-06 00575990  unit: G3D::BinaryInput  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575990
//
// 00575990  6aff                 push -1
// 00575992  6863068600           push 0x860663
// 00575997  64a100000000         mov eax, dword ptr fs:[0]
// 0057599d  50                   push eax
// 0057599e  64892500000000       mov dword ptr fs:[0], esp
// 005759a5  83ec50               sub esp, 0x50
// 005759a8  53                   push ebx
// 005759a9  55                   push ebp
// 005759aa  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 005759ae  56                   push esi
// 005759af  57                   push edi
// 005759b0  55                   push ebp
// 005759b1  b9802aa400           mov ecx, 0xa42a80
// 005759b6  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005759be  e8bd6fffff           call 0x56c980
// 005759c3  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 005759c7  8d5d04               lea ebx, [ebp + 4]
// 005759ca  7204                 jb 0x5759d0
// 005759cc  8b03                 mov eax, dword ptr [ebx]
// 005759ce  eb02                 jmp 0x5759d2
// 005759d0  8bc3                 mov eax, ebx
// 005759d2  8d4c2430             lea ecx, [esp + 0x30]
// 005759d6  51                   push ecx
// 005759d7  50                   push eax
// 005759d8  ff15d0e88900         call dword ptr [0x89e8d0]
// 005759de  83c408               add esp, 8
// 005759e1  83f8ff               cmp eax, -1
// 005759e4  740e                 je 0x5759f4
// 005759e6  8b442444             mov eax, dword ptr [esp + 0x44]
// 005759ea  99                   cdq 
// 005759eb  8bf8                 mov edi, eax
// 005759ed  23c2                 and eax, edx
// 005759ef  83f8ff               cmp eax, -1
// 005759f2  7526                 jne 0x575a1a
// 005759f4  8b742470             mov esi, dword ptr [esp + 0x70]
// 005759f8  6816d28a00           push 0x8ad216
// 005759fd  8bce                 mov ecx, esi
// 005759ff  ff15b4e48900         call dword ptr [0x89e4b4]
// 00575a05  5f                   pop edi
// 00575a06  8bc6                 mov eax, esi
// 00575a08  5e                   pop esi
// 00575a09  5d                   pop ebp
// 00575a0a  5b                   pop ebx
// 00575a0b  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00575a0f  64890d00000000       mov dword ptr fs:[0], ecx
// 00575a16  83c45c               add esp, 0x5c
// 00575a19  c3                   ret 
// 00575a1a  8d4f01               lea ecx, [edi + 1]
// 00575a1d  51                   push ecx
// 00575a1e  ff1594e98900         call dword ptr [0x89e994]
// 00575a24  83c404               add esp, 4
// 00575a27  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00575a2b  8bf0                 mov esi, eax
// 00575a2d  7204                 jb 0x575a33
// 00575a2f  8b03                 mov eax, dword ptr [ebx]
// 00575a31  eb02                 jmp 0x575a35
// 00575a33  8bc3                 mov eax, ebx
// 00575a35  68ec678c00           push 0x8c67ec
// 00575a3a  50                   push eax
// 00575a3b  ff1514e98900         call dword ptr [0x89e914]
// 00575a41  8be8                 mov ebp, eax
// 00575a43  55                   push ebp
// 00575a44  57                   push edi
// 00575a45  bb01000000           mov ebx, 1
// 00575a4a  53                   push ebx
// 00575a4b  56                   push esi
// 00575a4c  ff1580e88900         call dword ptr [0x89e880]
// 00575a52  55                   push ebp
// 00575a53  ff15a4e88900         call dword ptr [0x89e8a4]
// 00575a59  83c41c               add esp, 0x1c
// 00575a5c  56                   push esi
// 00575a5d  8d4c2418             lea ecx, [esp + 0x18]
// 00575a61  c6043700             mov byte ptr [edi + esi], 0
// 00575a65  ff15b4e48900         call dword ptr [0x89e4b4]
// 00575a6b  56                   push esi
// 00575a6c  895c246c             mov dword ptr [esp + 0x6c], ebx
// 00575a70  ff15cce98900         call dword ptr [0x89e9cc]
// 00575a76  8b742474             mov esi, dword ptr [esp + 0x74]
// 00575a7a  83c404               add esp, 4
// 00575a7d  8d542414             lea edx, [esp + 0x14]
// 00575a81  52                   push edx
// 00575a82  8bce                 mov ecx, esi
// 00575a84  ff15b8e48900         call dword ptr [0x89e4b8]
// 00575a8a  8d4c2414             lea ecx, [esp + 0x14]
// 00575a8e  895c2410             mov dword ptr [esp + 0x10], ebx
// 00575a92  c644246800           mov byte ptr [esp + 0x68], 0
// 00575a97  ff15c4e48900         call dword ptr [0x89e4c4]
// 00575a9d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 00575aa1  5f                   pop edi
// 00575aa2  8bc6                 mov eax, esi
// 00575aa4  5e                   pop esi
// 00575aa5  5d                   pop ebp
// 00575aa6  5b                   pop ebx
// 00575aa7  64890d00000000       mov dword ptr fs:[0], ecx
// 00575aae  83c45c               add esp, 0x5c
// 00575ab1  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?readFileAsString@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
