// roc 2011-06 0084a160  unit: CRobloxTreeCtrl  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a160
//
// 0084a160  83ec48               sub esp, 0x48
// 0084a163  a12058c900           mov eax, dword ptr [0xc95820]
// 0084a168  33c4                 xor eax, esp
// 0084a16a  89442444             mov dword ptr [esp + 0x44], eax
// 0084a16e  53                   push ebx
// 0084a16f  56                   push esi
// 0084a170  8b742454             mov esi, dword ptr [esp + 0x54]
// 0084a174  57                   push edi
// 0084a175  6a3c                 push 0x3c
// 0084a177  8d442410             lea eax, [esp + 0x10]
// 0084a17b  6a00                 push 0
// 0084a17d  50                   push eax
// 0084a17e  8bd9                 mov ebx, ecx
// 0084a180  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0084a188  e85711fcff           call 0x80b2e4
// 0084a18d  83c40c               add esp, 0xc
// 0084a190  8d4c240c             lea ecx, [esp + 0xc]
// 0084a194  51                   push ecx
// 0084a195  8d7b18               lea edi, [ebx + 0x18]
// 0084a198  56                   push esi
// 0084a199  8bcf                 mov ecx, edi
// 0084a19b  e8d0f4ffff           call 0x849670
// 0084a1a0  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 0084a1a4  56                   push esi
// 0084a1a5  8bcf                 mov ecx, edi
// 0084a1a7  8954244c             mov dword ptr [esp + 0x4c], edx
// 0084a1ab  e8b0feffff           call 0x84a060
// 0084a1b0  8bf8                 mov edi, eax
// 0084a1b2  b911000000           mov ecx, 0x11
// 0084a1b7  8d74240c             lea esi, [esp + 0xc]
// 0084a1bb  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 0084a1bd  8b4334               mov eax, dword ptr [ebx + 0x34]
// 0084a1c0  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0084a1c3  6a01                 push 1
// 0084a1c5  6a00                 push 0
// 0084a1c7  51                   push ecx
// 0084a1c8  ff15ec19a400         call dword ptr [0xa419ec]
// 0084a1ce  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0084a1d2  5f                   pop edi
// 0084a1d3  5e                   pop esi
// 0084a1d4  5b                   pop ebx
// 0084a1d5  33cc                 xor ecx, esp
// 0084a1d7  e81b17fcff           call 0x80b8f7
// 0084a1dc  83c448               add esp, 0x48
// 0084a1df  c20800               ret 8
// copied from an identical function in another client (function ?SetItemColor@CXTTreeBase@@UAEXPAU_TREEITEM@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp