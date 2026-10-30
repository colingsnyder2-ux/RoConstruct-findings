// roc 2007-03 00654340  unit: seg_00650000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00654340
//
// 00654340  83ec48               sub esp, 0x48
// 00654343  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 00654348  33c4                 xor eax, esp
// 0065434a  89442444             mov dword ptr [esp + 0x44], eax
// 0065434e  53                   push ebx
// 0065434f  56                   push esi
// 00654350  8b742454             mov esi, dword ptr [esp + 0x54]
// 00654354  57                   push edi
// 00654355  6a3c                 push 0x3c
// 00654357  8d442410             lea eax, [esp + 0x10]
// 0065435b  6a00                 push 0
// 0065435d  50                   push eax
// 0065435e  8bd9                 mov ebx, ecx
// 00654360  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00654368  e8afacfcff           call 0x61f01c
// 0065436d  83c40c               add esp, 0xc
// 00654370  8d4c240c             lea ecx, [esp + 0xc]
// 00654374  51                   push ecx
// 00654375  8d7b18               lea edi, [ebx + 0x18]
// 00654378  56                   push esi
// 00654379  8bcf                 mov ecx, edi
// 0065437b  e830f4ffff           call 0x6537b0
// 00654380  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00654384  56                   push esi
// 00654385  8bcf                 mov ecx, edi
// 00654387  89542450             mov dword ptr [esp + 0x50], edx
// 0065438b  e820feffff           call 0x6541b0
// 00654390  8bf8                 mov edi, eax
// 00654392  b911000000           mov ecx, 0x11
// 00654397  8d74240c             lea esi, [esp + 0xc]
// 0065439b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0065439d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006543a0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006543a3  6a01                 push 1
// 006543a5  6a00                 push 0
// 006543a7  51                   push ecx
// 006543a8  ff1554ee7700         call dword ptr [0x77ee54]
// 006543ae  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006543b2  5f                   pop edi
// 006543b3  5e                   pop esi
// 006543b4  5b                   pop ebx
// 006543b5  33cc                 xor ecx, esp
// 006543b7  e8eaaafcff           call 0x61eea6
// 006543bc  83c448               add esp, 0x48
// 006543bf  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp