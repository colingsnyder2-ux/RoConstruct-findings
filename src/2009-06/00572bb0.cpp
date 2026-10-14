// roc 2009-06 00572bb0  unit: seg_00570000  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00572bb0
//
// 00572bb0  55                   push ebp
// 00572bb1  8bec                 mov ebp, esp
// 00572bb3  6aff                 push -1
// 00572bb5  6804058600           push 0x860504
// 00572bba  64a100000000         mov eax, dword ptr fs:[0]
// 00572bc0  50                   push eax
// 00572bc1  64892500000000       mov dword ptr fs:[0], esp
// 00572bc8  81ec3c010000         sub esp, 0x13c
// 00572bce  53                   push ebx
// 00572bcf  56                   push esi
// 00572bd0  8bf1                 mov esi, ecx
// 00572bd2  8b4604               mov eax, dword ptr [esi + 4]
// 00572bd5  57                   push edi
// 00572bd6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00572bd9  33db                 xor ebx, ebx
// 00572bdb  50                   push eax
// 00572bdc  895e08               mov dword ptr [esi + 8], ebx
// 00572bdf  895e0c               mov dword ptr [esi + 0xc], ebx
// 00572be2  e87985ffff           call 0x56b160
// 00572be7  8b7d08               mov edi, dword ptr [ebp + 8]
// 00572bea  83c404               add esp, 4
// 00572bed  53                   push ebx
// 00572bee  6a01                 push 1
// 00572bf0  57                   push edi
// 00572bf1  8d4d94               lea ecx, [ebp - 0x6c]
// 00572bf4  895e04               mov dword ptr [esi + 4], ebx
// 00572bf7  895dfc               mov dword ptr [ebp - 4], ebx
// 00572bfa  e8811d0000           call 0x574980
// 00572bff  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 00572c02  3bc3                 cmp eax, ebx
// 00572c04  c645fc01             mov byte ptr [ebp - 4], 1
// 00572c08  7f39                 jg 0x572c43
// 00572c0a  6894b68c00           push 0x8cb694
// 00572c0f  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 00572c15  ff15b4e48900         call dword ptr [0x89e4b4]
// 00572c1b  57                   push edi
// 00572c1c  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 00572c22  51                   push ecx
// 00572c23  8d8d18ffffff         lea ecx, [ebp - 0xe8]
// 00572c29  c645fc02             mov byte ptr [ebp - 4], 2
// 00572c2d  e86e73f2ff           call 0x499fa0
// 00572c32  68308a9800           push 0x988a30
// 00572c37  8d9518ffffff         lea edx, [ebp - 0xe8]
// 00572c3d  52                   push edx
// 00572c3e  e8076e1a00           call 0x719a4a
// 00572c43  395dc8               cmp dword ptr [ebp - 0x38], ebx
// 00572c46  7622                 jbe 0x572c6a
// 00572c48  8d450c               lea eax, [ebp + 0xc]
// 00572c4b  50                   push eax
// 00572c4c  8d4de0               lea ecx, [ebp - 0x20]
// 00572c4f  c7450c083c8c00       mov dword ptr [ebp + 0xc], 0x8c3c08
// 00572c56  ff15c4e98900         call dword ptr [0x89e9c4]
// 00572c5c  683c1b9800           push 0x981b3c
// 00572c61  8d4de0               lea ecx, [ebp - 0x20]
// 00572c64  51                   push ecx
// 00572c65  e8e06d1a00           call 0x719a4a
// 00572c6a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00572c6d  52                   push edx
// 00572c6e  50                   push eax
// 00572c6f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00572c72  50                   push eax
// 00572c73  57                   push edi
// 00572c74  e827daffff           call 0x5706a0
// 00572c79  83c410               add esp, 0x10
// 00572c7c  50                   push eax
// 00572c7d  8d4d94               lea ecx, [ebp - 0x6c]
// 00572c80  51                   push ecx
// 00572c81  8bce                 mov ecx, esi
// 00572c83  e868fdffff           call 0x5729f0
// 00572c88  8d4d94               lea ecx, [ebp - 0x6c]
// 00572c8b  885dfc               mov byte ptr [ebp - 4], bl
// 00572c8e  e80d1f0000           call 0x574ba0
// 00572c93  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00572c96  5f                   pop edi
// 00572c97  5e                   pop esi
// 00572c98  64890d00000000       mov dword ptr fs:[0], ecx
// 00572c9f  5b                   pop ebx
// 00572ca0  8be5                 mov esp, ebp
// 00572ca2  5d                   pop ebp
// 00572ca3  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?load@GImage@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
