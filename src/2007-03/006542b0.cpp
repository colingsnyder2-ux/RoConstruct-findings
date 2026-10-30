// roc 2007-03 006542b0  unit: seg_00650000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006542b0
//
// 006542b0  83ec48               sub esp, 0x48
// 006542b3  a1b4f58a00           mov eax, dword ptr [0x8af5b4]
// 006542b8  33c4                 xor eax, esp
// 006542ba  89442444             mov dword ptr [esp + 0x44], eax
// 006542be  53                   push ebx
// 006542bf  56                   push esi
// 006542c0  8b742454             mov esi, dword ptr [esp + 0x54]
// 006542c4  57                   push edi
// 006542c5  6a3c                 push 0x3c
// 006542c7  8d442410             lea eax, [esp + 0x10]
// 006542cb  6a00                 push 0
// 006542cd  50                   push eax
// 006542ce  8bd9                 mov ebx, ecx
// 006542d0  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 006542d8  e83fadfcff           call 0x61f01c
// 006542dd  83c40c               add esp, 0xc
// 006542e0  8d4c240c             lea ecx, [esp + 0xc]
// 006542e4  51                   push ecx
// 006542e5  8d7b18               lea edi, [ebx + 0x18]
// 006542e8  56                   push esi
// 006542e9  8bcf                 mov ecx, edi
// 006542eb  e8c0f4ffff           call 0x6537b0
// 006542f0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006542f4  56                   push esi
// 006542f5  8bcf                 mov ecx, edi
// 006542f7  8954244c             mov dword ptr [esp + 0x4c], edx
// 006542fb  e8b0feffff           call 0x6541b0
// 00654300  8bf8                 mov edi, eax
// 00654302  b911000000           mov ecx, 0x11
// 00654307  8d74240c             lea esi, [esp + 0xc]
// 0065430b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0065430d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00654310  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00654313  6a01                 push 1
// 00654315  6a00                 push 0
// 00654317  51                   push ecx
// 00654318  ff1554ee7700         call dword ptr [0x77ee54]
// 0065431e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00654322  5f                   pop edi
// 00654323  5e                   pop esi
// 00654324  5b                   pop ebx
// 00654325  33cc                 xor ecx, esp
// 00654327  e87aabfcff           call 0x61eea6
// 0065432c  83c448               add esp, 0x48
// 0065432f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp