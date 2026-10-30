// roc 2007-08 00668270  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00668270
//
// 00668270  83ec48               sub esp, 0x48
// 00668273  a188518b00           mov eax, dword ptr [0x8b5188]
// 00668278  33c4                 xor eax, esp
// 0066827a  89442444             mov dword ptr [esp + 0x44], eax
// 0066827e  53                   push ebx
// 0066827f  56                   push esi
// 00668280  8b742454             mov esi, dword ptr [esp + 0x54]
// 00668284  57                   push edi
// 00668285  6a3c                 push 0x3c
// 00668287  8d442410             lea eax, [esp + 0x10]
// 0066828b  6a00                 push 0
// 0066828d  50                   push eax
// 0066828e  8bd9                 mov ebx, ecx
// 00668290  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00668298  e8ef88fcff           call 0x630b8c
// 0066829d  83c40c               add esp, 0xc
// 006682a0  8d4c240c             lea ecx, [esp + 0xc]
// 006682a4  51                   push ecx
// 006682a5  8d7b18               lea edi, [ebx + 0x18]
// 006682a8  56                   push esi
// 006682a9  8bcf                 mov ecx, edi
// 006682ab  e8c0f4ffff           call 0x667770
// 006682b0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 006682b4  56                   push esi
// 006682b5  8bcf                 mov ecx, edi
// 006682b7  8954244c             mov dword ptr [esp + 0x4c], edx
// 006682bb  e8b0feffff           call 0x668170
// 006682c0  8bf8                 mov edi, eax
// 006682c2  b911000000           mov ecx, 0x11
// 006682c7  8d74240c             lea esi, [esp + 0xc]
// 006682cb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 006682cd  8b4334               mov eax, dword ptr [ebx + 0x34]
// 006682d0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006682d3  6a01                 push 1
// 006682d5  6a00                 push 0
// 006682d7  51                   push ecx
// 006682d8  ff15dcec7700         call dword ptr [0x77ecdc]
// 006682de  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 006682e2  5f                   pop edi
// 006682e3  5e                   pop esi
// 006682e4  5b                   pop ebx
// 006682e5  33cc                 xor ecx, esp
// 006682e7  e83287fcff           call 0x630a1e
// 006682ec  83c448               add esp, 0x48
// 006682ef  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp