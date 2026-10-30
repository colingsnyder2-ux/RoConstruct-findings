// roc 2009-12 008c6a80  unit: CXTPPropertyGridInplaceEdit  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6a80
//
// 008c6a80  6aff                 push -1
// 008c6a82  6832469600           push 0x964632
// 008c6a87  64a100000000         mov eax, dword ptr fs:[0]
// 008c6a8d  50                   push eax
// 008c6a8e  83ec08               sub esp, 8
// 008c6a91  53                   push ebx
// 008c6a92  56                   push esi
// 008c6a93  57                   push edi
// 008c6a94  a10052b600           mov eax, dword ptr [0xb65200]
// 008c6a99  33c4                 xor eax, esp
// 008c6a9b  50                   push eax
// 008c6a9c  8d442418             lea eax, [esp + 0x18]
// 008c6aa0  64a300000000         mov dword ptr fs:[0], eax
// 008c6aa6  8bf9                 mov edi, ecx
// 008c6aa8  8d9f84000000         lea ebx, [edi + 0x84]
// 008c6aae  8bcb                 mov ecx, ebx
// 008c6ab0  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c6ab6  83ef80               sub edi, -0x80
// 008c6ab9  8bcf                 mov ecx, edi
// 008c6abb  8bf0                 mov esi, eax
// 008c6abd  ff15b4dd9800         call dword ptr [0x98ddb4]
// 008c6ac3  3bc6                 cmp eax, esi
// 008c6ac5  7e25                 jle 0x8c6aec
// 008c6ac7  56                   push esi
// 008c6ac8  8d442414             lea eax, [esp + 0x14]
// 008c6acc  50                   push eax
// 008c6acd  8bcf                 mov ecx, edi
// 008c6acf  ff1544cf9800         call dword ptr [0x98cf44]
// 008c6ad5  50                   push eax
// 008c6ad6  8bcf                 mov ecx, edi
// 008c6ad8  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008c6ae0  ff1538d59800         call dword ptr [0x98d538]
// 008c6ae6  8d4c2410             lea ecx, [esp + 0x10]
// 008c6aea  eb28                 jmp 0x8c6b14
// 008c6aec  7d2c                 jge 0x8c6b1a
// 008c6aee  2bf0                 sub esi, eax
// 008c6af0  56                   push esi
// 008c6af1  50                   push eax
// 008c6af2  8d4c241c             lea ecx, [esp + 0x1c]
// 008c6af6  51                   push ecx
// 008c6af7  8bcb                 mov ecx, ebx
// 008c6af9  ff1540d89800         call dword ptr [0x98d840]
// 008c6aff  50                   push eax
// 008c6b00  8bcf                 mov ecx, edi
// 008c6b02  c744242401000000     mov dword ptr [esp + 0x24], 1
// 008c6b0a  ff1588d79800         call dword ptr [0x98d788]
// 008c6b10  8d4c2414             lea ecx, [esp + 0x14]
// 008c6b14  ff15c0de9800         call dword ptr [0x98dec0]
// 008c6b1a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6b1e  64890d00000000       mov dword ptr fs:[0], ecx
// 008c6b25  59                   pop ecx
// 008c6b26  5f                   pop edi
// 008c6b27  5e                   pop esi
// 008c6b28  5b                   pop ebx
// 008c6b29  83c414               add esp, 0x14
// 008c6b2c  c3                   ret 
// copied from an identical function in another client (function ?CorrectWindowText@?$CXTMaskEditT@VCEdit@@@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Controls/XTMaskEdit.cpp