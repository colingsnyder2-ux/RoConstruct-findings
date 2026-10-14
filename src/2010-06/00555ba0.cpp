// roc 2010-06 00555ba0  unit: seg_00550000  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00555ba0
//
// 00555ba0  55                   push ebp
// 00555ba1  8bec                 mov ebp, esp
// 00555ba3  6aff                 push -1
// 00555ba5  68a4129900           push 0x9912a4
// 00555baa  64a100000000         mov eax, dword ptr fs:[0]
// 00555bb0  50                   push eax
// 00555bb1  64892500000000       mov dword ptr fs:[0], esp
// 00555bb8  81ec3c010000         sub esp, 0x13c
// 00555bbe  53                   push ebx
// 00555bbf  56                   push esi
// 00555bc0  8bf1                 mov esi, ecx
// 00555bc2  8b4604               mov eax, dword ptr [esi + 4]
// 00555bc5  57                   push edi
// 00555bc6  8965f0               mov dword ptr [ebp - 0x10], esp
// 00555bc9  33db                 xor ebx, ebx
// 00555bcb  50                   push eax
// 00555bcc  895e08               mov dword ptr [esi + 8], ebx
// 00555bcf  895e0c               mov dword ptr [esi + 0xc], ebx
// 00555bd2  e8d94ffbff           call 0x50abb0
// 00555bd7  8b7d08               mov edi, dword ptr [ebp + 8]
// 00555bda  83c404               add esp, 4
// 00555bdd  53                   push ebx
// 00555bde  6a01                 push 1
// 00555be0  57                   push edi
// 00555be1  8d4d94               lea ecx, [ebp - 0x6c]
// 00555be4  895e04               mov dword ptr [esi + 4], ebx
// 00555be7  895dfc               mov dword ptr [ebp - 4], ebx
// 00555bea  e8912e0000           call 0x558a80
// 00555bef  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 00555bf2  3bc3                 cmp eax, ebx
// 00555bf4  c645fc01             mov byte ptr [ebp - 4], 1
// 00555bf8  7f39                 jg 0x555c33
// 00555bfa  68b403a200           push 0xa203b4
// 00555bff  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 00555c05  ff1510a49e00         call dword ptr [0x9ea410]
// 00555c0b  57                   push edi
// 00555c0c  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 00555c12  51                   push ecx
// 00555c13  8d8d18ffffff         lea ecx, [ebp - 0xe8]
// 00555c19  c645fc02             mov byte ptr [ebp - 4], 2
// 00555c1d  e8deddf2ff           call 0x483a00
// 00555c22  6894edb000           push 0xb0ed94
// 00555c27  8d9518ffffff         lea edx, [ebp - 0xe8]
// 00555c2d  52                   push edx
// 00555c2e  e87f2d2500           call 0x7a89b2
// 00555c33  395dc8               cmp dword ptr [ebp - 0x38], ebx
// 00555c36  7622                 jbe 0x555c5a
// 00555c38  8d450c               lea eax, [ebp + 0xc]
// 00555c3b  50                   push eax
// 00555c3c  8d4de0               lea ecx, [ebp - 0x20]
// 00555c3f  c7450cf066a100       mov dword ptr [ebp + 0xc], 0xa166f0
// 00555c46  ff1524a99e00         call dword ptr [0x9ea924]
// 00555c4c  6878b6b000           push 0xb0b678
// 00555c51  8d4de0               lea ecx, [ebp - 0x20]
// 00555c54  51                   push ecx
// 00555c55  e8582d2500           call 0x7a89b2
// 00555c5a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 00555c5d  52                   push edx
// 00555c5e  50                   push eax
// 00555c5f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00555c62  50                   push eax
// 00555c63  57                   push edi
// 00555c64  e807d9ffff           call 0x553570
// 00555c69  83c410               add esp, 0x10
// 00555c6c  50                   push eax
// 00555c6d  8d4d94               lea ecx, [ebp - 0x6c]
// 00555c70  51                   push ecx
// 00555c71  8bce                 mov ecx, esi
// 00555c73  e868fdffff           call 0x5559e0
// 00555c78  8d4d94               lea ecx, [ebp - 0x6c]
// 00555c7b  885dfc               mov byte ptr [ebp - 4], bl
// 00555c7e  e83d300000           call 0x558cc0
// 00555c83  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00555c86  5f                   pop edi
// 00555c87  5e                   pop esi
// 00555c88  64890d00000000       mov dword ptr fs:[0], ecx
// 00555c8f  5b                   pop ebx
// 00555c90  8be5                 mov esp, ebp
// 00555c92  5d                   pop ebp
// 00555c93  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\GImage.cpp (function ?load@GImage@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage.cpp
