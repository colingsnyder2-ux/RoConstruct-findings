// roc 2007-08 00668300  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668300
//
// 00668300  83ec48               sub esp, 0x48
// 00668303  a188518b00           mov eax, dword ptr [0x8b5188]
// 00668308  33c4                 xor eax, esp
// 0066830a  89442444             mov dword ptr [esp + 0x44], eax
// 0066830e  53                   push ebx
// 0066830f  56                   push esi
// 00668310  8b742454             mov esi, dword ptr [esp + 0x54]
// 00668314  57                   push edi
// 00668315  6a3c                 push 0x3c
// 00668317  8d442410             lea eax, [esp + 0x10]
// 0066831b  6a00                 push 0
// 0066831d  50                   push eax
// 0066831e  8bd9                 mov ebx, ecx
// 00668320  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00668328  e85f88fcff           call 0x630b8c
// 0066832d  83c40c               add esp, 0xc
// 00668330  8d4c240c             lea ecx, [esp + 0xc]
// 00668334  51                   push ecx
// 00668335  8d7b18               lea edi, [ebx + 0x18]
// 00668338  56                   push esi
// 00668339  8bcf                 mov ecx, edi
// 0066833b  e830f4ffff           call 0x667770
// 00668340  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00668344  56                   push esi
// 00668345  8bcf                 mov ecx, edi
// 00668347  89542450             mov dword ptr [esp + 0x50], edx
// 0066834b  e820feffff           call 0x668170
// 00668350  8bf8                 mov edi, eax
// 00668352  b911000000           mov ecx, 0x11
// 00668357  8d74240c             lea esi, [esp + 0xc]
// 0066835b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0066835d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00668360  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00668363  6a01                 push 1
// 00668365  6a00                 push 0
// 00668367  51                   push ecx
// 00668368  ff15dcec7700         call dword ptr [0x77ecdc]
// 0066836e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00668372  5f                   pop edi
// 00668373  5e                   pop esi
// 00668374  5b                   pop ebx
// 00668375  33cc                 xor ecx, esp
// 00668377  e8a286fcff           call 0x630a1e
// 0066837c  83c448               add esp, 0x48
// 0066837f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp