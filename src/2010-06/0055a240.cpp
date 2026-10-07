// roc 2010-06 0055a240  unit: G3D::BinaryInput  size: 290 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055a240
//
// 0055a240  6aff                 push -1
// 0055a242  68c3139900           push 0x9913c3
// 0055a247  64a100000000         mov eax, dword ptr fs:[0]
// 0055a24d  50                   push eax
// 0055a24e  64892500000000       mov dword ptr fs:[0], esp
// 0055a255  83ec50               sub esp, 0x50
// 0055a258  53                   push ebx
// 0055a259  55                   push ebp
// 0055a25a  8b6c246c             mov ebp, dword ptr [esp + 0x6c]
// 0055a25e  56                   push esi
// 0055a25f  57                   push edi
// 0055a260  55                   push ebp
// 0055a261  b908a1c000           mov ecx, 0xc0a108
// 0055a266  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0055a26e  e81d4effff           call 0x54f090
// 0055a273  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 0055a277  8d5d04               lea ebx, [ebp + 4]
// 0055a27a  7204                 jb 0x55a280
// 0055a27c  8b03                 mov eax, dword ptr [ebx]
// 0055a27e  eb02                 jmp 0x55a282
// 0055a280  8bc3                 mov eax, ebx
// 0055a282  8d4c2430             lea ecx, [esp + 0x30]
// 0055a286  51                   push ecx
// 0055a287  50                   push eax
// 0055a288  ff15b8a79e00         call dword ptr [0x9ea7b8]
// 0055a28e  83c408               add esp, 8
// 0055a291  83f8ff               cmp eax, -1
// 0055a294  740e                 je 0x55a2a4
// 0055a296  8b442444             mov eax, dword ptr [esp + 0x44]
// 0055a29a  99                   cdq 
// 0055a29b  8bf8                 mov edi, eax
// 0055a29d  23c2                 and eax, edx
// 0055a29f  83f8ff               cmp eax, -1
// 0055a2a2  7526                 jne 0x55a2ca
// 0055a2a4  8b742470             mov esi, dword ptr [esp + 0x70]
// 0055a2a8  68fe08a000           push 0xa008fe
// 0055a2ad  8bce                 mov ecx, esi
// 0055a2af  ff1510a49e00         call dword ptr [0x9ea410]
// 0055a2b5  5f                   pop edi
// 0055a2b6  8bc6                 mov eax, esi
// 0055a2b8  5e                   pop esi
// 0055a2b9  5d                   pop ebp
// 0055a2ba  5b                   pop ebx
// 0055a2bb  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0055a2bf  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a2c6  83c45c               add esp, 0x5c
// 0055a2c9  c3                   ret 
// 0055a2ca  8d4f01               lea ecx, [edi + 1]
// 0055a2cd  51                   push ecx
// 0055a2ce  ff15c8a89e00         call dword ptr [0x9ea8c8]
// 0055a2d4  83c404               add esp, 4
// 0055a2d7  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 0055a2db  8bf0                 mov esi, eax
// 0055a2dd  7204                 jb 0x55a2e3
// 0055a2df  8b03                 mov eax, dword ptr [ebx]
// 0055a2e1  eb02                 jmp 0x55a2e5
// 0055a2e3  8bc3                 mov eax, ebx
// 0055a2e5  68c0c8a100           push 0xa1c8c0
// 0055a2ea  50                   push eax
// 0055a2eb  ff1520a79e00         call dword ptr [0x9ea720]
// 0055a2f1  8be8                 mov ebp, eax
// 0055a2f3  55                   push ebp
// 0055a2f4  57                   push edi
// 0055a2f5  bb01000000           mov ebx, 1
// 0055a2fa  53                   push ebx
// 0055a2fb  56                   push esi
// 0055a2fc  ff15a8a79e00         call dword ptr [0x9ea7a8]
// 0055a302  55                   push ebp
// 0055a303  ff1580a79e00         call dword ptr [0x9ea780]
// 0055a309  83c41c               add esp, 0x1c
// 0055a30c  56                   push esi
// 0055a30d  8d4c2418             lea ecx, [esp + 0x18]
// 0055a311  c6043700             mov byte ptr [edi + esi], 0
// 0055a315  ff1510a49e00         call dword ptr [0x9ea410]
// 0055a31b  56                   push esi
// 0055a31c  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0055a320  ff1508aa9e00         call dword ptr [0x9eaa08]
// 0055a326  8b742474             mov esi, dword ptr [esp + 0x74]
// 0055a32a  83c404               add esp, 4
// 0055a32d  8d542414             lea edx, [esp + 0x14]
// 0055a331  52                   push edx
// 0055a332  8bce                 mov ecx, esi
// 0055a334  ff150ca49e00         call dword ptr [0x9ea40c]
// 0055a33a  8d4c2414             lea ecx, [esp + 0x14]
// 0055a33e  895c2410             mov dword ptr [esp + 0x10], ebx
// 0055a342  c644246800           mov byte ptr [esp + 0x68], 0
// 0055a347  ff1500a49e00         call dword ptr [0x9ea400]
// 0055a34d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 0055a351  5f                   pop edi
// 0055a352  8bc6                 mov eax, esi
// 0055a354  5e                   pop esi
// 0055a355  5d                   pop ebp
// 0055a356  5b                   pop ebx
// 0055a357  64890d00000000       mov dword ptr fs:[0], ecx
// 0055a35e  83c45c               add esp, 0x5c
// 0055a361  c3                   ret 
// library g3d-6.09/G3Dcpp\fileutils.cpp (function ?readFileAsString@G3D@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABV23@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/fileutils.cpp
