// roc 2012-06 00a56bf0  unit: CXTPPropertyGridInplaceEdit  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56bf0
//
// 00a56bf0  6aff                 push -1
// 00a56bf2  688273ae00           push 0xae7382
// 00a56bf7  64a100000000         mov eax, dword ptr fs:[0]
// 00a56bfd  50                   push eax
// 00a56bfe  83ec08               sub esp, 8
// 00a56c01  53                   push ebx
// 00a56c02  56                   push esi
// 00a56c03  57                   push edi
// 00a56c04  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a56c09  33c4                 xor eax, esp
// 00a56c0b  50                   push eax
// 00a56c0c  8d442418             lea eax, [esp + 0x18]
// 00a56c10  64a300000000         mov dword ptr fs:[0], eax
// 00a56c16  8bf9                 mov edi, ecx
// 00a56c18  8d9f84000000         lea ebx, [edi + 0x84]
// 00a56c1e  8bcb                 mov ecx, ebx
// 00a56c20  ff155846b200         call dword ptr [0xb24658]
// 00a56c26  83ef80               sub edi, -0x80
// 00a56c29  8bcf                 mov ecx, edi
// 00a56c2b  8bf0                 mov esi, eax
// 00a56c2d  ff155846b200         call dword ptr [0xb24658]
// 00a56c33  3bc6                 cmp eax, esi
// 00a56c35  7e25                 jle 0xa56c5c
// 00a56c37  56                   push esi
// 00a56c38  8d442414             lea eax, [esp + 0x14]
// 00a56c3c  50                   push eax
// 00a56c3d  8bcf                 mov ecx, edi
// 00a56c3f  ff152850b200         call dword ptr [0xb25028]
// 00a56c45  50                   push eax
// 00a56c46  8bcf                 mov ecx, edi
// 00a56c48  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00a56c50  ff152045b200         call dword ptr [0xb24520]
// 00a56c56  8d4c2410             lea ecx, [esp + 0x10]
// 00a56c5a  eb28                 jmp 0xa56c84
// 00a56c5c  7d2c                 jge 0xa56c8a
// 00a56c5e  2bf0                 sub esi, eax
// 00a56c60  56                   push esi
// 00a56c61  50                   push eax
// 00a56c62  8d4c241c             lea ecx, [esp + 0x1c]
// 00a56c66  51                   push ecx
// 00a56c67  8bcb                 mov ecx, ebx
// 00a56c69  ff158449b200         call dword ptr [0xb24984]
// 00a56c6f  50                   push eax
// 00a56c70  8bcf                 mov ecx, edi
// 00a56c72  c744242401000000     mov dword ptr [esp + 0x24], 1
// 00a56c7a  ff15e048b200         call dword ptr [0xb248e0]
// 00a56c80  8d4c2414             lea ecx, [esp + 0x14]
// 00a56c84  ff15d047b200         call dword ptr [0xb247d0]
// 00a56c8a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a56c8e  64890d00000000       mov dword ptr fs:[0], ecx
// 00a56c95  59                   pop ecx
// 00a56c96  5f                   pop edi
// 00a56c97  5e                   pop esi
// 00a56c98  5b                   pop ebx
// 00a56c99  83c414               add esp, 0x14
// 00a56c9c  c3                   ret 
// copied from an identical function in another client (function ?CorrectWindowText@?$CXTMaskEditT@VCEdit@@@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTMaskEdit.cpp