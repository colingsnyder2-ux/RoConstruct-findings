// roc 2009-06 00759960  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759960
//
// 00759960  83ec48               sub esp, 0x48
// 00759963  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00759968  33c4                 xor eax, esp
// 0075996a  89442444             mov dword ptr [esp + 0x44], eax
// 0075996e  53                   push ebx
// 0075996f  56                   push esi
// 00759970  8b742454             mov esi, dword ptr [esp + 0x54]
// 00759974  57                   push edi
// 00759975  6a3c                 push 0x3c
// 00759977  8d442410             lea eax, [esp + 0x10]
// 0075997b  6a00                 push 0
// 0075997d  50                   push eax
// 0075997e  8bd9                 mov ebx, ecx
// 00759980  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00759988  e8e702fcff           call 0x719c74
// 0075998d  83c40c               add esp, 0xc
// 00759990  8d4c240c             lea ecx, [esp + 0xc]
// 00759994  51                   push ecx
// 00759995  8d7b18               lea edi, [ebx + 0x18]
// 00759998  56                   push esi
// 00759999  8bcf                 mov ecx, edi
// 0075999b  e840f4ffff           call 0x758de0
// 007599a0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007599a4  56                   push esi
// 007599a5  8bcf                 mov ecx, edi
// 007599a7  89542450             mov dword ptr [esp + 0x50], edx
// 007599ab  e820feffff           call 0x7597d0
// 007599b0  8bf8                 mov edi, eax
// 007599b2  b911000000           mov ecx, 0x11
// 007599b7  8d74240c             lea esi, [esp + 0xc]
// 007599bb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007599bd  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007599c0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007599c3  6a01                 push 1
// 007599c5  6a00                 push 0
// 007599c7  51                   push ecx
// 007599c8  ff157cee8900         call dword ptr [0x89ee7c]
// 007599ce  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007599d2  5f                   pop edi
// 007599d3  5e                   pop esi
// 007599d4  5b                   pop ebx
// 007599d5  33cc                 xor ecx, esp
// 007599d7  e89e0bfcff           call 0x71a57a
// 007599dc  83c448               add esp, 0x48
// 007599df  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp