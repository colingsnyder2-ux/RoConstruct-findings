// roc 2009-06 007598d0  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007598d0
//
// 007598d0  83ec48               sub esp, 0x48
// 007598d3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007598d8  33c4                 xor eax, esp
// 007598da  89442444             mov dword ptr [esp + 0x44], eax
// 007598de  53                   push ebx
// 007598df  56                   push esi
// 007598e0  8b742454             mov esi, dword ptr [esp + 0x54]
// 007598e4  57                   push edi
// 007598e5  6a3c                 push 0x3c
// 007598e7  8d442410             lea eax, [esp + 0x10]
// 007598eb  6a00                 push 0
// 007598ed  50                   push eax
// 007598ee  8bd9                 mov ebx, ecx
// 007598f0  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 007598f8  e87703fcff           call 0x719c74
// 007598fd  83c40c               add esp, 0xc
// 00759900  8d4c240c             lea ecx, [esp + 0xc]
// 00759904  51                   push ecx
// 00759905  8d7b18               lea edi, [ebx + 0x18]
// 00759908  56                   push esi
// 00759909  8bcf                 mov ecx, edi
// 0075990b  e8d0f4ffff           call 0x758de0
// 00759910  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00759914  56                   push esi
// 00759915  8bcf                 mov ecx, edi
// 00759917  8954244c             mov dword ptr [esp + 0x4c], edx
// 0075991b  e8b0feffff           call 0x7597d0
// 00759920  8bf8                 mov edi, eax
// 00759922  b911000000           mov ecx, 0x11
// 00759927  8d74240c             lea esi, [esp + 0xc]
// 0075992b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0075992d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 00759930  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00759933  6a01                 push 1
// 00759935  6a00                 push 0
// 00759937  51                   push ecx
// 00759938  ff157cee8900         call dword ptr [0x89ee7c]
// 0075993e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00759942  5f                   pop edi
// 00759943  5e                   pop esi
// 00759944  5b                   pop ebx
// 00759945  33cc                 xor ecx, esp
// 00759947  e82e0cfcff           call 0x71a57a
// 0075994c  83c448               add esp, 0x48
// 0075994f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp