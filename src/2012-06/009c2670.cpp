// roc 2012-06 009c2670  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2670
//
// 009c2670  83ec48               sub esp, 0x48
// 009c2673  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c2678  33c4                 xor eax, esp
// 009c267a  89442444             mov dword ptr [esp + 0x44], eax
// 009c267e  53                   push ebx
// 009c267f  56                   push esi
// 009c2680  8b742454             mov esi, dword ptr [esp + 0x54]
// 009c2684  57                   push edi
// 009c2685  6a3c                 push 0x3c
// 009c2687  8d442410             lea eax, [esp + 0x10]
// 009c268b  6a00                 push 0
// 009c268d  50                   push eax
// 009c268e  8bd9                 mov ebx, ecx
// 009c2690  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 009c2698  e8d70cfcff           call 0x983374
// 009c269d  83c40c               add esp, 0xc
// 009c26a0  8d4c240c             lea ecx, [esp + 0xc]
// 009c26a4  51                   push ecx
// 009c26a5  8d7b18               lea edi, [ebx + 0x18]
// 009c26a8  56                   push esi
// 009c26a9  8bcf                 mov ecx, edi
// 009c26ab  e840f4ffff           call 0x9c1af0
// 009c26b0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009c26b4  56                   push esi
// 009c26b5  8bcf                 mov ecx, edi
// 009c26b7  89542450             mov dword ptr [esp + 0x50], edx
// 009c26bb  e820feffff           call 0x9c24e0
// 009c26c0  8bf8                 mov edi, eax
// 009c26c2  b911000000           mov ecx, 0x11
// 009c26c7  8d74240c             lea esi, [esp + 0xc]
// 009c26cb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c26cd  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009c26d0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c26d3  6a01                 push 1
// 009c26d5  6a00                 push 0
// 009c26d7  51                   push ecx
// 009c26d8  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c26de  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009c26e2  5f                   pop edi
// 009c26e3  5e                   pop esi
// 009c26e4  5b                   pop ebx
// 009c26e5  33cc                 xor ecx, esp
// 009c26e7  e84b13fcff           call 0x983a37
// 009c26ec  83c448               add esp, 0x48
// 009c26ef  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp