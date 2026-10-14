// roc 2009-12 005f1ca0  unit: seg_005f0000  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f1ca0
//
// 005f1ca0  55                   push ebp
// 005f1ca1  8bec                 mov ebp, esp
// 005f1ca3  6aff                 push -1
// 005f1ca5  6844f49300           push 0x93f444
// 005f1caa  64a100000000         mov eax, dword ptr fs:[0]
// 005f1cb0  50                   push eax
// 005f1cb1  64892500000000       mov dword ptr fs:[0], esp
// 005f1cb8  81ec3c010000         sub esp, 0x13c
// 005f1cbe  53                   push ebx
// 005f1cbf  56                   push esi
// 005f1cc0  8bf1                 mov esi, ecx
// 005f1cc2  8b4604               mov eax, dword ptr [esi + 4]
// 005f1cc5  57                   push edi
// 005f1cc6  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f1cc9  33db                 xor ebx, ebx
// 005f1ccb  50                   push eax
// 005f1ccc  895e08               mov dword ptr [esi + 8], ebx
// 005f1ccf  895e0c               mov dword ptr [esi + 0xc], ebx
// 005f1cd2  e8c9a4f6ff           call 0x55c1a0
// 005f1cd7  8b7d08               mov edi, dword ptr [ebp + 8]
// 005f1cda  83c404               add esp, 4
// 005f1cdd  53                   push ebx
// 005f1cde  6a01                 push 1
// 005f1ce0  57                   push edi
// 005f1ce1  8d4d94               lea ecx, [ebp - 0x6c]
// 005f1ce4  895e04               mov dword ptr [esi + 4], ebx
// 005f1ce7  895dfc               mov dword ptr [ebp - 4], ebx
// 005f1cea  e801370000           call 0x5f53f0
// 005f1cef  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 005f1cf2  3bc3                 cmp eax, ebx
// 005f1cf4  c645fc01             mov byte ptr [ebp - 4], 1
// 005f1cf8  7f39                 jg 0x5f1d33
// 005f1cfa  6814259c00           push 0x9c2514
// 005f1cff  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 005f1d05  ff15f4b69800         call dword ptr [0x98b6f4]
// 005f1d0b  57                   push edi
// 005f1d0c  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 005f1d12  51                   push ecx
// 005f1d13  8d8d18ffffff         lea ecx, [ebp - 0xe8]
// 005f1d19  c645fc02             mov byte ptr [ebp - 4], 2
// 005f1d1d  e81e4bedff           call 0x4c6840
// 005f1d22  689014aa00           push 0xaa1490
// 005f1d27  8d9518ffffff         lea edx, [ebp - 0xe8]
// 005f1d2d  52                   push edx
// 005f1d2e  e8452b2000           call 0x7f4878
// 005f1d33  395dc8               cmp dword ptr [ebp - 0x38], ebx
// 005f1d36  7622                 jbe 0x5f1d5a
// 005f1d38  8d450c               lea eax, [ebp + 0xc]
// 005f1d3b  50                   push eax
// 005f1d3c  8d4de0               lea ecx, [ebp - 0x20]
// 005f1d3f  c7450c50329b00       mov dword ptr [ebp + 0xc], 0x9b3250
// 005f1d46  ff1548b79800         call dword ptr [0x98b748]
// 005f1d4c  68647da900           push 0xa97d64
// 005f1d51  8d4de0               lea ecx, [ebp - 0x20]
// 005f1d54  51                   push ecx
// 005f1d55  e81e2b2000           call 0x7f4878
// 005f1d5a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 005f1d5d  52                   push edx
// 005f1d5e  50                   push eax
// 005f1d5f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 005f1d62  50                   push eax
// 005f1d63  57                   push edi
// 005f1d64  e807d9ffff           call 0x5ef670
// 005f1d69  83c410               add esp, 0x10
// 005f1d6c  50                   push eax
// 005f1d6d  8d4d94               lea ecx, [ebp - 0x6c]
// 005f1d70  51                   push ecx
// 005f1d71  8bce                 mov ecx, esi
// 005f1d73  e868fdffff           call 0x5f1ae0
// 005f1d78  8d4d94               lea ecx, [ebp - 0x6c]
// 005f1d7b  885dfc               mov byte ptr [ebp - 4], bl
// 005f1d7e  e8ad380000           call 0x5f5630
// 005f1d83  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f1d86  5f                   pop edi
// 005f1d87  5e                   pop esi
// 005f1d88  64890d00000000       mov dword ptr fs:[0], ecx
// 005f1d8f  5b                   pop ebx
// 005f1d90  8be5                 mov esp, ebp
// 005f1d92  5d                   pop ebp
// 005f1d93  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?load@GImage@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
