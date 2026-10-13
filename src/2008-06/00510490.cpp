// roc 2008-06 00510490  unit: seg_00510000  size: 246 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00510490
//
// 00510490  55                   push ebp
// 00510491  8bec                 mov ebp, esp
// 00510493  6aff                 push -1
// 00510495  6864c37c00           push 0x7cc364
// 0051049a  64a100000000         mov eax, dword ptr fs:[0]
// 005104a0  50                   push eax
// 005104a1  64892500000000       mov dword ptr fs:[0], esp
// 005104a8  81ec3c010000         sub esp, 0x13c
// 005104ae  53                   push ebx
// 005104af  56                   push esi
// 005104b0  8bf1                 mov esi, ecx
// 005104b2  8b4604               mov eax, dword ptr [esi + 4]
// 005104b5  57                   push edi
// 005104b6  8965f0               mov dword ptr [ebp - 0x10], esp
// 005104b9  33db                 xor ebx, ebx
// 005104bb  50                   push eax
// 005104bc  895e08               mov dword ptr [esi + 8], ebx
// 005104bf  895e0c               mov dword ptr [esi + 0xc], ebx
// 005104c2  e83978ffff           call 0x507d00
// 005104c7  8b7d08               mov edi, dword ptr [ebp + 8]
// 005104ca  83c404               add esp, 4
// 005104cd  53                   push ebx
// 005104ce  6a01                 push 1
// 005104d0  57                   push edi
// 005104d1  8d4d94               lea ecx, [ebp - 0x6c]
// 005104d4  895e04               mov dword ptr [esi + 4], ebx
// 005104d7  895dfc               mov dword ptr [ebp - 4], ebx
// 005104da  e821550000           call 0x515a00
// 005104df  8b45cc               mov eax, dword ptr [ebp - 0x34]
// 005104e2  3bc3                 cmp eax, ebx
// 005104e4  c645fc01             mov byte ptr [ebp - 4], 1
// 005104e8  7f39                 jg 0x510523
// 005104ea  683c828200           push 0x82823c
// 005104ef  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 005104f5  ff1558248000         call dword ptr [0x802458]
// 005104fb  57                   push edi
// 005104fc  8d8d78ffffff         lea ecx, [ebp - 0x88]
// 00510502  51                   push ecx
// 00510503  8d8d18ffffff         lea ecx, [ebp - 0xe8]
// 00510509  c645fc02             mov byte ptr [ebp - 4], 2
// 0051050d  e89e23f6ff           call 0x4728b0
// 00510512  6878c48d00           push 0x8dc478
// 00510517  8d9518ffffff         lea edx, [ebp - 0xe8]
// 0051051d  52                   push edx
// 0051051e  e869101900           call 0x6a158c
// 00510523  395dc8               cmp dword ptr [ebp - 0x38], ebx
// 00510526  7622                 jbe 0x51054a
// 00510528  8d450c               lea eax, [ebp + 0xc]
// 0051052b  50                   push eax
// 0051052c  8d4de0               lea ecx, [ebp - 0x20]
// 0051052f  c7450c680c8200       mov dword ptr [ebp + 0xc], 0x820c68
// 00510536  ff15a4288000         call dword ptr [0x8028a4]
// 0051053c  687c998d00           push 0x8d997c
// 00510541  8d4de0               lea ecx, [ebp - 0x20]
// 00510544  51                   push ecx
// 00510545  e842101900           call 0x6a158c
// 0051054a  8b550c               mov edx, dword ptr [ebp + 0xc]
// 0051054d  52                   push edx
// 0051054e  50                   push eax
// 0051054f  8b45d4               mov eax, dword ptr [ebp - 0x2c]
// 00510552  50                   push eax
// 00510553  57                   push edi
// 00510554  e867d8ffff           call 0x50ddc0
// 00510559  83c410               add esp, 0x10
// 0051055c  50                   push eax
// 0051055d  8d4d94               lea ecx, [ebp - 0x6c]
// 00510560  51                   push ecx
// 00510561  8bce                 mov ecx, esi
// 00510563  e868fdffff           call 0x5102d0
// 00510568  8d4d94               lea ecx, [ebp - 0x6c]
// 0051056b  885dfc               mov byte ptr [ebp - 4], bl
// 0051056e  e8ad560000           call 0x515c20
// 00510573  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00510576  5f                   pop edi
// 00510577  5e                   pop esi
// 00510578  64890d00000000       mov dword ptr fs:[0], ecx
// 0051057f  5b                   pop ebx
// 00510580  8be5                 mov esp, ebp
// 00510582  5d                   pop ebp
// 00510583  c20800               ret 8
// library g3d-6.09-rbx2008/G3Dcpp\roc_line_0dec62d7bd4d609a.cpp (function ?load@GImage@G3D@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/roc_line_0dec62d7bd4d609a.cpp
