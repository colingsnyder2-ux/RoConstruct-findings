// roc 2010-06 00554240  unit: seg_00550000  size: 356 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00554240
//
// 00554240  64a100000000         mov eax, dword ptr fs:[0]
// 00554246  6aff                 push -1
// 00554248  6880119900           push 0x991180
// 0055424d  50                   push eax
// 0055424e  64892500000000       mov dword ptr fs:[0], esp
// 00554255  81ec34010000         sub esp, 0x134
// 0055425b  56                   push esi
// 0055425c  8bb42448010000       mov esi, dword ptr [esp + 0x148]
// 00554263  57                   push edi
// 00554264  8d442408             lea eax, [esp + 8]
// 00554268  50                   push eax
// 00554269  8bf9                 mov edi, ecx
// 0055426b  6a02                 push 2
// 0055426d  8bce                 mov ecx, esi
// 0055426f  e83c4b0000           call 0x558db0
// 00554274  668b442408           mov ax, word ptr [esp + 8]
// 00554279  3c50                 cmp al, 0x50
// 0055427b  0f85d1000000         jne 0x554352
// 00554281  80fc36               cmp ah, 0x36
// 00554284  0f85c8000000         jne 0x554352
// 0055428a  53                   push ebx
// 0055428b  55                   push ebp
// 0055428c  8bce                 mov ecx, esi
// 0055428e  e8bde6ffff           call 0x552950
// 00554293  8bce                 mov ecx, esi
// 00554295  8bd8                 mov ebx, eax
// 00554297  e8b4e6ffff           call 0x552950
// 0055429c  8bce                 mov ecx, esi
// 0055429e  8be8                 mov ebp, eax
// 005542a0  e8abe6ffff           call 0x552950
// 005542a5  85db                 test ebx, ebx
// 005542a7  7c57                 jl 0x554300
// 005542a9  85ed                 test ebp, ebp
// 005542ab  7c53                 jl 0x554300
// 005542ad  81fba0860100         cmp ebx, 0x186a0
// 005542b3  7f4b                 jg 0x554300
// 005542b5  81fda0860100         cmp ebp, 0x186a0
// 005542bb  7f43                 jg 0x554300
// 005542bd  8bce                 mov ecx, esi
// 005542bf  e8fcbeffff           call 0x5501c0
// 005542c4  6a03                 push 3
// 005542c6  55                   push ebp
// 005542c7  53                   push ebx
// 005542c8  8bcf                 mov ecx, edi
// 005542ca  e841f6ffff           call 0x553910
// 005542cf  8b470c               mov eax, dword ptr [edi + 0xc]
// 005542d2  0faf4708             imul eax, dword ptr [edi + 8]
// 005542d6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005542d9  51                   push ecx
// 005542da  8d1440               lea edx, [eax + eax*2]
// 005542dd  52                   push edx
// 005542de  8bce                 mov ecx, esi
// 005542e0  e8cb4a0000           call 0x558db0
// 005542e5  8b8c2444010000       mov ecx, dword ptr [esp + 0x144]
// 005542ec  5d                   pop ebp
// 005542ed  5b                   pop ebx
// 005542ee  5f                   pop edi
// 005542ef  5e                   pop esi
// 005542f0  64890d00000000       mov dword ptr fs:[0], ecx
// 005542f7  81c440010000         add esp, 0x140
// 005542fd  c20400               ret 4
// 00554300  689803a200           push 0xa20398
// 00554305  8d4c2418             lea ecx, [esp + 0x18]
// 00554309  ff1510a49e00         call dword ptr [0x9ea410]
// 0055430f  8d44244c             lea eax, [esp + 0x4c]
// 00554313  50                   push eax
// 00554314  8bce                 mov ecx, esi
// 00554316  c784245001000002000000 mov dword ptr [esp + 0x150], 2
// 00554321  e84abeffff           call 0x550170
// 00554326  50                   push eax
// 00554327  8d4c2418             lea ecx, [esp + 0x18]
// 0055432b  51                   push ecx
// 0055432c  8d8c248c000000       lea ecx, [esp + 0x8c]
// 00554333  c684245401000003     mov byte ptr [esp + 0x154], 3
// 0055433b  e8c0f6f2ff           call 0x483a00
// 00554340  6894edb000           push 0xb0ed94
// 00554345  8d942488000000       lea edx, [esp + 0x88]
// 0055434c  52                   push edx
// 0055434d  e860462500           call 0x7a89b2
// 00554352  688403a200           push 0xa20384
// 00554357  8d4c242c             lea ecx, [esp + 0x2c]
// 0055435b  ff1510a49e00         call dword ptr [0x9ea410]
// 00554361  8d442460             lea eax, [esp + 0x60]
// 00554365  50                   push eax
// 00554366  8bce                 mov ecx, esi
// 00554368  c784244801000000000000 mov dword ptr [esp + 0x148], 0
// 00554373  e8f8bdffff           call 0x550170
// 00554378  50                   push eax
// 00554379  8d4c242c             lea ecx, [esp + 0x2c]
// 0055437d  51                   push ecx
// 0055437e  8d8c24e4000000       lea ecx, [esp + 0xe4]
// 00554385  c684244c01000001     mov byte ptr [esp + 0x14c], 1
// 0055438d  e86ef6f2ff           call 0x483a00
// 00554392  6894edb000           push 0xb0ed94
// 00554397  8d9424e0000000       lea edx, [esp + 0xe0]
// 0055439e  52                   push edx
// 0055439f  e80e462500           call 0x7a89b2
// library g3d-6.09-rbx2008/G3Dcpp\GImage_ppm.cpp (function ?decodePPM@GImage@G3D@@AAEXAAVBinaryInput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09-rbx2008 G3Dcpp/GImage_ppm.cpp
