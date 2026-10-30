// roc 2010-06 007e89a0  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e89a0
//
// 007e89a0  83ec48               sub esp, 0x48
// 007e89a3  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e89a8  33c4                 xor eax, esp
// 007e89aa  89442444             mov dword ptr [esp + 0x44], eax
// 007e89ae  53                   push ebx
// 007e89af  56                   push esi
// 007e89b0  8b742454             mov esi, dword ptr [esp + 0x54]
// 007e89b4  57                   push edi
// 007e89b5  6a3c                 push 0x3c
// 007e89b7  8d442410             lea eax, [esp + 0x10]
// 007e89bb  6a00                 push 0
// 007e89bd  50                   push eax
// 007e89be  8bd9                 mov ebx, ecx
// 007e89c0  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 007e89c8  e81702fcff           call 0x7a8be4
// 007e89cd  83c40c               add esp, 0xc
// 007e89d0  8d4c240c             lea ecx, [esp + 0xc]
// 007e89d4  51                   push ecx
// 007e89d5  8d7b18               lea edi, [ebx + 0x18]
// 007e89d8  56                   push esi
// 007e89d9  8bcf                 mov ecx, edi
// 007e89db  e840f4ffff           call 0x7e7e20
// 007e89e0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 007e89e4  56                   push esi
// 007e89e5  8bcf                 mov ecx, edi
// 007e89e7  89542450             mov dword ptr [esp + 0x50], edx
// 007e89eb  e820feffff           call 0x7e8810
// 007e89f0  8bf8                 mov edi, eax
// 007e89f2  b911000000           mov ecx, 0x11
// 007e89f7  8d74240c             lea esi, [esp + 0xc]
// 007e89fb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 007e89fd  8b4334               mov eax, dword ptr [ebx + 0x34]
// 007e8a00  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007e8a03  6a01                 push 1
// 007e8a05  6a00                 push 0
// 007e8a07  51                   push ecx
// 007e8a08  ff1578ba9e00         call dword ptr [0x9eba78]
// 007e8a0e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 007e8a12  5f                   pop edi
// 007e8a13  5e                   pop esi
// 007e8a14  5b                   pop ebx
// 007e8a15  33cc                 xor ecx, esp
// 007e8a17  e8b80afcff           call 0x7a94d4
// 007e8a1c  83c448               add esp, 0x48
// 007e8a1f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp