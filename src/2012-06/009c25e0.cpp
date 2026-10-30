// roc 2012-06 009c25e0  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c25e0
//
// 009c25e0  83ec48               sub esp, 0x48
// 009c25e3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c25e8  33c4                 xor eax, esp
// 009c25ea  89442444             mov dword ptr [esp + 0x44], eax
// 009c25ee  53                   push ebx
// 009c25ef  56                   push esi
// 009c25f0  8b742454             mov esi, dword ptr [esp + 0x54]
// 009c25f4  57                   push edi
// 009c25f5  6a3c                 push 0x3c
// 009c25f7  8d442410             lea eax, [esp + 0x10]
// 009c25fb  6a00                 push 0
// 009c25fd  50                   push eax
// 009c25fe  8bd9                 mov ebx, ecx
// 009c2600  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 009c2608  e8670dfcff           call 0x983374
// 009c260d  83c40c               add esp, 0xc
// 009c2610  8d4c240c             lea ecx, [esp + 0xc]
// 009c2614  51                   push ecx
// 009c2615  8d7b18               lea edi, [ebx + 0x18]
// 009c2618  56                   push esi
// 009c2619  8bcf                 mov ecx, edi
// 009c261b  e8d0f4ffff           call 0x9c1af0
// 009c2620  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 009c2624  56                   push esi
// 009c2625  8bcf                 mov ecx, edi
// 009c2627  8954244c             mov dword ptr [esp + 0x4c], edx
// 009c262b  e8b0feffff           call 0x9c24e0
// 009c2630  8bf8                 mov edi, eax
// 009c2632  b911000000           mov ecx, 0x11
// 009c2637  8d74240c             lea esi, [esp + 0xc]
// 009c263b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 009c263d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 009c2640  8b4820               mov ecx, dword ptr [eax + 0x20]
// 009c2643  6a01                 push 1
// 009c2645  6a00                 push 0
// 009c2647  51                   push ecx
// 009c2648  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c264e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 009c2652  5f                   pop edi
// 009c2653  5e                   pop esi
// 009c2654  5b                   pop ebx
// 009c2655  33cc                 xor ecx, esp
// 009c2657  e8db13fcff           call 0x983a37
// 009c265c  83c448               add esp, 0x48
// 009c265f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp