// roc 2011-06 0084a1f0  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a1f0
//
// 0084a1f0  83ec48               sub esp, 0x48
// 0084a1f3  a12058c900           mov eax, dword ptr [0xc95820]
// 0084a1f8  33c4                 xor eax, esp
// 0084a1fa  89442444             mov dword ptr [esp + 0x44], eax
// 0084a1fe  53                   push ebx
// 0084a1ff  56                   push esi
// 0084a200  8b742454             mov esi, dword ptr [esp + 0x54]
// 0084a204  57                   push edi
// 0084a205  6a3c                 push 0x3c
// 0084a207  8d442410             lea eax, [esp + 0x10]
// 0084a20b  6a00                 push 0
// 0084a20d  50                   push eax
// 0084a20e  8bd9                 mov ebx, ecx
// 0084a210  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 0084a218  e8c710fcff           call 0x80b2e4
// 0084a21d  83c40c               add esp, 0xc
// 0084a220  8d4c240c             lea ecx, [esp + 0xc]
// 0084a224  51                   push ecx
// 0084a225  8d7b18               lea edi, [ebx + 0x18]
// 0084a228  56                   push esi
// 0084a229  8bcf                 mov ecx, edi
// 0084a22b  e840f4ffff           call 0x849670
// 0084a230  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0084a234  56                   push esi
// 0084a235  8bcf                 mov ecx, edi
// 0084a237  89542450             mov dword ptr [esp + 0x50], edx
// 0084a23b  e820feffff           call 0x84a060
// 0084a240  8bf8                 mov edi, eax
// 0084a242  b911000000           mov ecx, 0x11
// 0084a247  8d74240c             lea esi, [esp + 0xc]
// 0084a24b  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084a24d  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0084a250  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084a253  6a01                 push 1
// 0084a255  6a00                 push 0
// 0084a257  51                   push ecx
// 0084a258  ff15ec19a400         call dword ptr [0xa419ec]
// 0084a25e  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084a262  5f                   pop edi
// 0084a263  5e                   pop esi
// 0084a264  5b                   pop ebx
// 0084a265  33cc                 xor ecx, esp
// 0084a267  e88b16fcff           call 0x80b8f7
// 0084a26c  83c448               add esp, 0x48
// 0084a26f  c20800               ret 8
// copied from an identical function in another client (function ?SetItemBackColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp