// from server: 100% by auto
// roc 2010-06 0048d070  unit: G3D::Win32Window  size: 868 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0048d070
//
// 0048d070  6aff                 push -1
// 0048d072  68aa649800           push 0x9864aa
// 0048d077  64a100000000         mov eax, dword ptr fs:[0]
// 0048d07d  50                   push eax
// 0048d07e  64892500000000       mov dword ptr fs:[0], esp
// 0048d085  81ec7c040000         sub esp, 0x47c
// 0048d08b  56                   push esi
// 0048d08c  c744240800000000     mov dword ptr [esp + 8], 0
// 0048d094  e8d7feffff           call 0x48cf70
// 0048d099  83f802               cmp eax, 2
// 0048d09c  0f85cb000000         jne 0x48d16d
// 0048d0a2  f6055839c00001       test byte ptr [0xc03958], 1
// 0048d0a9  753e                 jne 0x48d0e9
// 0048d0ab  b801000000           mov eax, 1
// 0048d0b0  09055839c000         or dword ptr [0xc03958], eax
// 0048d0b6  68021f0000           push 0x1f02
// 0048d0bb  8984248c040000       mov dword ptr [esp + 0x48c], eax
// 0048d0c2  ff15acaa9e00         call dword ptr [0x9eaaac]
// 0048d0c8  50                   push eax
// 0048d0c9  b93c39c000           mov ecx, 0xc0393c
// 0048d0ce  ff1510a49e00         call dword ptr [0x9ea410]
// 0048d0d4  68a0c09d00           push 0x9dc0a0
// 0048d0d9  e885b93100           call 0x7a8a63
// 0048d0de  83c404               add esp, 4
// 0048d0e1  c684248804000000     mov byte ptr [esp + 0x488], 0
// 0048d0e9  a160a49e00           mov eax, dword ptr [0x9ea460]
// 0048d0ee  8b00                 mov eax, dword ptr [eax]
// 0048d0f0  6a01                 push 1
// 0048d0f2  50                   push eax
// 0048d0f3  8d4c240c             lea ecx, [esp + 0xc]
// 0048d0f7  51                   push ecx
// 0048d0f8  b93c39c000           mov ecx, 0xc0393c
// 0048d0fd  c644241020           mov byte ptr [esp + 0x10], 0x20
// 0048d102  ff1508a79e00         call dword ptr [0x9ea708]
// 0048d108  8b1560a49e00         mov edx, dword ptr [0x9ea460]
// 0048d10e  8bb42490040000       mov esi, dword ptr [esp + 0x490]
// 0048d115  3b02                 cmp eax, dword ptr [edx]
// 0048d117  7525                 jne 0x48d13e
// 0048d119  68d03ea100           push 0xa13ed0
// 0048d11e  8bce                 mov ecx, esi
// 0048d120  ff1510a49e00         call dword ptr [0x9ea410]
// 0048d126  8bc6                 mov eax, esi
// 0048d128  5e                   pop esi
// 0048d129  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 0048d130  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d137  81c488040000         add esp, 0x488
// 0048d13d  c3                   ret 
// 0048d13e  8b0d5039c000         mov ecx, dword ptr [0xc03950]
// 0048d144  2bc8                 sub ecx, eax
// 0048d146  51                   push ecx
// 0048d147  40                   inc eax
// 0048d148  50                   push eax
// 0048d149  56                   push esi
// 0048d14a  b93c39c000           mov ecx, 0xc0393c
// 0048d14f  ff155ca49e00         call dword ptr [0x9ea45c]
// 0048d155  8bc6                 mov eax, esi
// 0048d157  5e                   pop esi
// 0048d158  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 0048d15f  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d166  81c488040000         add esp, 0x488
// 0048d16c  c3                   ret 
// 0048d16d  8d4c240c             lea ecx, [esp + 0xc]
// 0048d171  ff1504a49e00         call dword ptr [0x9ea404]
// 0048d177  6800040000           push 0x400
// 0048d17c  8d942484000000       lea edx, [esp + 0x84]
// 0048d183  52                   push edx
// 0048d184  c784249004000002000000 mov dword ptr [esp + 0x490], 2
// 0048d18f  ff15aca29e00         call dword ptr [0x9ea2ac]
// 0048d195  85c0                 test eax, eax
// 0048d197  7546                 jne 0x48d1df
// 0048d199  68a83ea100           push 0xa13ea8
// 0048d19e  8bb42494040000       mov esi, dword ptr [esp + 0x494]
// 0048d1a5  8bce                 mov ecx, esi
// 0048d1a7  ff1510a49e00         call dword ptr [0x9ea410]
// 0048d1ad  8d4c240c             lea ecx, [esp + 0xc]
// 0048d1b1  c744240801000000     mov dword ptr [esp + 8], 1
// 0048d1b9  c684248804000000     mov byte ptr [esp + 0x488], 0
// 0048d1c1  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d1c7  8bc6                 mov eax, esi
// 0048d1c9  5e                   pop esi
// 0048d1ca  8b8c247c040000       mov ecx, dword ptr [esp + 0x47c]
// 0048d1d1  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d1d8  81c488040000         add esp, 0x488
// 0048d1de  c3                   ret 
// 0048d1df  8d842480000000       lea eax, [esp + 0x80]
// 0048d1e6  50                   push eax
// 0048d1e7  8d4c2410             lea ecx, [esp + 0x10]
// 0048d1eb  ff151ca49e00         call dword ptr [0x9ea41c]
// 0048d1f1  e87afdffff           call 0x48cf70
// 0048d1f6  83e800               sub eax, 0
// 0048d1f9  743d                 je 0x48d238
// 0048d1fb  83e801               sub eax, 1
// 0048d1fe  7407                 je 0x48d207
// 0048d200  688c3ea100           push 0xa13e8c
// 0048d205  eb97                 jmp 0x48d19e
// 0048d207  687c3ea100           push 0xa13e7c
// 0048d20c  8d4c2410             lea ecx, [esp + 0x10]
// 0048d210  51                   push ecx
// 0048d211  8d54246c             lea edx, [esp + 0x6c]
// 0048d215  52                   push edx
// 0048d216  ff1588a49e00         call dword ptr [0x9ea488]
// 0048d21c  83c40c               add esp, 0xc
// 0048d21f  50                   push eax
// 0048d220  8d4c2410             lea ecx, [esp + 0x10]
// 0048d224  c684248c04000004     mov byte ptr [esp + 0x48c], 4
// 0048d22c  ff1568a49e00         call dword ptr [0x9ea468]
// 0048d232  8d4c2464             lea ecx, [esp + 0x64]
// 0048d236  eb2f                 jmp 0x48d267
// 0048d238  686c3ea100           push 0xa13e6c
// 0048d23d  8d442410             lea eax, [esp + 0x10]
// 0048d241  50                   push eax
// 0048d242  8d4c2450             lea ecx, [esp + 0x50]
// 0048d246  51                   push ecx
// 0048d247  ff1588a49e00         call dword ptr [0x9ea488]
// 0048d24d  83c40c               add esp, 0xc
// 0048d250  50                   push eax
// 0048d251  8d4c2410             lea ecx, [esp + 0x10]
// 0048d255  c684248c04000003     mov byte ptr [esp + 0x48c], 3
// 0048d25d  ff1568a49e00         call dword ptr [0x9ea468]
// 0048d263  8d4c2448             lea ecx, [esp + 0x48]
// 0048d267  c684248804000002     mov byte ptr [esp + 0x488], 2
// 0048d26f  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d275  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 0048d27a  55                   push ebp
// 0048d27b  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 0048d27f  7304                 jae 0x48d285
// 0048d281  8d6c2414             lea ebp, [esp + 0x14]
// 0048d285  57                   push edi
// 0048d286  8d542430             lea edx, [esp + 0x30]
// 0048d28a  52                   push edx
// 0048d28b  55                   push ebp
// 0048d28c  e879cd4100           call 0x8aa00a
// 0048d291  8bf8                 mov edi, eax
// 0048d293  85ff                 test edi, edi
// 0048d295  7521                 jne 0x48d2b8
// 0048d297  68503ea100           push 0xa13e50
// 0048d29c  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 0048d2a3  8bce                 mov ecx, esi
// 0048d2a5  ff1510a49e00         call dword ptr [0x9ea410]
// 0048d2ab  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048d2b3  e9f0000000           jmp 0x48d3a8
// 0048d2b8  57                   push edi
// 0048d2b9  e8c4a93100           call 0x7a7c82
// 0048d2be  83c404               add esp, 4
// 0048d2c1  8bf0                 mov esi, eax
// 0048d2c3  56                   push esi
// 0048d2c4  57                   push edi
// 0048d2c5  6a00                 push 0
// 0048d2c7  55                   push ebp
// 0048d2c8  e837cd4100           call 0x8aa004
// 0048d2cd  85c0                 test eax, eax
// 0048d2cf  7510                 jne 0x48d2e1
// 0048d2d1  56                   push esi
// 0048d2d2  e86fa93100           call 0x7a7c46
// 0048d2d7  83c404               add esp, 4
// 0048d2da  68483ea100           push 0xa13e48
// 0048d2df  ebbb                 jmp 0x48d29c
// 0048d2e1  8d4606               lea eax, [esi + 6]
// 0048d2e4  8d5002               lea edx, [eax + 2]
// 0048d2e7  668b08               mov cx, word ptr [eax]
// 0048d2ea  83c002               add eax, 2
// 0048d2ed  6685c9               test cx, cx
// 0048d2f0  75f5                 jne 0x48d2e7
// 0048d2f2  2bc2                 sub eax, edx
// 0048d2f4  d1f8                 sar eax, 1
// 0048d2f6  8d444608             lea eax, [esi + eax*2 + 8]
// 0048d2fa  2bc6                 sub eax, esi
// 0048d2fc  83c003               add eax, 3
// 0048d2ff  83e0fc               and eax, 0xfffffffc
// 0048d302  03c6                 add eax, esi
// 0048d304  682c3ea100           push 0xa13e2c
// 0048d309  8d4c2438             lea ecx, [esp + 0x38]
// 0048d30d  8bf8                 mov edi, eax
// 0048d30f  ff1510a49e00         call dword ptr [0x9ea410]
// 0048d315  66837e0200           cmp word ptr [esi + 2], 0
// 0048d31a  c684249004000005     mov byte ptr [esp + 0x490], 5
// 0048d322  744d                 je 0x48d371
// 0048d324  8b4714               mov eax, dword ptr [edi + 0x14]
// 0048d327  8b4f10               mov ecx, dword ptr [edi + 0x10]
// 0048d32a  0fb7d0               movzx edx, ax
// 0048d32d  52                   push edx
// 0048d32e  c1e810               shr eax, 0x10
// 0048d331  50                   push eax
// 0048d332  0fb7c1               movzx eax, cx
// 0048d335  50                   push eax
// 0048d336  c1e910               shr ecx, 0x10
// 0048d339  51                   push ecx
// 0048d33a  8d4c2460             lea ecx, [esp + 0x60]
// 0048d33e  68203ea100           push 0xa13e20
// 0048d343  51                   push ecx
// 0048d344  e867a10c00           call 0x5574b0
// 0048d349  83c418               add esp, 0x18
// 0048d34c  50                   push eax
// 0048d34d  8d4c2438             lea ecx, [esp + 0x38]
// 0048d351  c684249404000006     mov byte ptr [esp + 0x494], 6
// 0048d359  ff1568a49e00         call dword ptr [0x9ea468]
// 0048d35f  8d4c2450             lea ecx, [esp + 0x50]
// 0048d363  c684249004000005     mov byte ptr [esp + 0x490], 5
// 0048d36b  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d371  56                   push esi
// 0048d372  e8cfa83100           call 0x7a7c46
// 0048d377  8bb4249c040000       mov esi, dword ptr [esp + 0x49c]
// 0048d37e  83c404               add esp, 4
// 0048d381  8d542434             lea edx, [esp + 0x34]
// 0048d385  52                   push edx
// 0048d386  8bce                 mov ecx, esi
// 0048d388  ff150ca49e00         call dword ptr [0x9ea40c]
// 0048d38e  8d4c2434             lea ecx, [esp + 0x34]
// 0048d392  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0048d39a  c684249004000002     mov byte ptr [esp + 0x490], 2
// 0048d3a2  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d3a8  8d4c2414             lea ecx, [esp + 0x14]
// 0048d3ac  c684249004000000     mov byte ptr [esp + 0x490], 0
// 0048d3b4  ff1500a49e00         call dword ptr [0x9ea400]
// 0048d3ba  8b8c2488040000       mov ecx, dword ptr [esp + 0x488]
// 0048d3c1  5f                   pop edi
// 0048d3c2  5d                   pop ebp
// 0048d3c3  8bc6                 mov eax, esi
// 0048d3c5  5e                   pop esi
// 0048d3c6  64890d00000000       mov dword ptr fs:[0], ecx
// 0048d3cd  81c488040000         add esp, 0x488
// 0048d3d3  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?getDriverVersion@GLCaps@G3D@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
