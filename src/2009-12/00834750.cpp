// roc 2009-12 00834750  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00834750
//
// 00834750  83ec48               sub esp, 0x48
// 00834753  a10052b600           mov eax, dword ptr [0xb65200]
// 00834758  33c4                 xor eax, esp
// 0083475a  89442444             mov dword ptr [esp + 0x44], eax
// 0083475e  53                   push ebx
// 0083475f  56                   push esi
// 00834760  8b742454             mov esi, dword ptr [esp + 0x54]
// 00834764  57                   push edi
// 00834765  6a3c                 push 0x3c
// 00834767  8d442410             lea eax, [esp + 0x10]
// 0083476b  6a00                 push 0
// 0083476d  50                   push eax
// 0083476e  8bd9                 mov ebx, ecx
// 00834770  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 00834778  e82703fcff           call 0x7f4aa4
// 0083477d  83c40c               add esp, 0xc
// 00834780  8d4c240c             lea ecx, [esp + 0xc]
// 00834784  51                   push ecx
// 00834785  8d7b18               lea edi, [ebx + 0x18]
// 00834788  56                   push esi
// 00834789  8bcf                 mov ecx, edi
// 0083478b  e8d0f4ffff           call 0x833c60
// 00834790  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 00834794  56                   push esi
// 00834795  8bcf                 mov ecx, edi
// 00834797  8954244c             mov dword ptr [esp + 0x4c], edx
// 0083479b  e8b0feffff           call 0x834650
// 008347a0  8bf8                 mov edi, eax
// 008347a2  b911000000           mov ecx, 0x11
// 008347a7  8d74240c             lea esi, [esp + 0xc]
// 008347ab  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 008347ad  8b4334               mov eax, dword ptr [ebx + 0x34]
// 008347b0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008347b3  6a01                 push 1
// 008347b5  6a00                 push 0
// 008347b7  51                   push ecx
// 008347b8  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008347be  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008347c2  5f                   pop edi
// 008347c3  5e                   pop esi
// 008347c4  5b                   pop ebx
// 008347c5  33cc                 xor ecx, esp
// 008347c7  e8ce0bfcff           call 0x7f539a
// 008347cc  83c448               add esp, 0x48
// 008347cf  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp