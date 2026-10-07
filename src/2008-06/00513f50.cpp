// roc 2008-06 00513f50  unit: G3D::GCamera  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513f50
//
// 00513f50  83ec08               sub esp, 8
// 00513f53  53                   push ebx
// 00513f54  55                   push ebp
// 00513f55  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00513f59  6a01                 push 1
// 00513f5b  6a00                 push 0
// 00513f5d  8d442410             lea eax, [esp + 0x10]
// 00513f61  50                   push eax
// 00513f62  8bcd                 mov ecx, ebp
// 00513f64  c64424145c           mov byte ptr [esp + 0x14], 0x5c
// 00513f69  ff1598248000         call dword ptr [0x802498]
// 00513f6f  8b0de8238000         mov ecx, dword ptr [0x8023e8]
// 00513f75  8bd8                 mov ebx, eax
// 00513f77  3b19                 cmp ebx, dword ptr [ecx]
// 00513f79  7508                 jne 0x513f83
// 00513f7b  5d                   pop ebp
// 00513f7c  32c0                 xor al, al
// 00513f7e  5b                   pop ebx
// 00513f7f  83c408               add esp, 8
// 00513f82  c3                   ret 
// 00513f83  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00513f87  56                   push esi
// 00513f88  57                   push edi
// 00513f89  8d7d04               lea edi, [ebp + 4]
// 00513f8c  7204                 jb 0x513f92
// 00513f8e  8b37                 mov esi, dword ptr [edi]
// 00513f90  eb02                 jmp 0x513f94
// 00513f92  8bf7                 mov esi, edi
// 00513f94  e8e7feffff           call 0x513e80
// 00513f99  85c0                 test eax, eax
// 00513f9b  7439                 je 0x513fd6
// 00513f9d  837d1810             cmp dword ptr [ebp + 0x18], 0x10
// 00513fa1  7202                 jb 0x513fa5
// 00513fa3  8b3f                 mov edi, dword ptr [edi]
// 00513fa5  8d542414             lea edx, [esp + 0x14]
// 00513fa9  52                   push edx
// 00513faa  683f000f00           push 0xf003f
// 00513faf  6a00                 push 0
// 00513fb1  8d4c1f01             lea ecx, [edi + ebx + 1]
// 00513fb5  51                   push ecx
// 00513fb6  50                   push eax
// 00513fb7  ff1510208000         call dword ptr [0x802010]
// 00513fbd  85c0                 test eax, eax
// 00513fbf  7515                 jne 0x513fd6
// 00513fc1  8b542414             mov edx, dword ptr [esp + 0x14]
// 00513fc5  52                   push edx
// 00513fc6  ff1508208000         call dword ptr [0x802008]
// 00513fcc  5f                   pop edi
// 00513fcd  5e                   pop esi
// 00513fce  5d                   pop ebp
// 00513fcf  b001                 mov al, 1
// 00513fd1  5b                   pop ebx
// 00513fd2  83c408               add esp, 8
// 00513fd5  c3                   ret 
// 00513fd6  5f                   pop edi
// 00513fd7  5e                   pop esi
// 00513fd8  5d                   pop ebp
// 00513fd9  32c0                 xor al, al
// 00513fdb  5b                   pop ebx
// 00513fdc  83c408               add esp, 8
// 00513fdf  c3                   ret 
// library g3d-6.09/G3Dcpp\RegistryUtil.cpp (function ?keyExists@RegistryUtil@G3D@@SA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/RegistryUtil.cpp
