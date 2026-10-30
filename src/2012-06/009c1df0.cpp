// roc 2012-06 009c1df0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1df0
//
// 009c1df0  83ec48               sub esp, 0x48
// 009c1df3  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009c1df8  33c4                 xor eax, esp
// 009c1dfa  89442444             mov dword ptr [esp + 0x44], eax
// 009c1dfe  56                   push esi
// 009c1dff  57                   push edi
// 009c1e00  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 009c1e04  6a3c                 push 0x3c
// 009c1e06  8d44240c             lea eax, [esp + 0xc]
// 009c1e0a  6a00                 push 0
// 009c1e0c  50                   push eax
// 009c1e0d  8bf1                 mov esi, ecx
// 009c1e0f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 009c1e17  e85815fcff           call 0x983374
// 009c1e1c  83c40c               add esp, 0xc
// 009c1e1f  8d4c2408             lea ecx, [esp + 8]
// 009c1e23  51                   push ecx
// 009c1e24  57                   push edi
// 009c1e25  8d4e18               lea ecx, [esi + 0x18]
// 009c1e28  e8c3fcffff           call 0x9c1af0
// 009c1e2d  5f                   pop edi
// 009c1e2e  5e                   pop esi
// 009c1e2f  85c0                 test eax, eax
// 009c1e31  7415                 je 0x9c1e48
// 009c1e33  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 009c1e37  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009c1e3b  33cc                 xor ecx, esp
// 009c1e3d  e8f51bfcff           call 0x983a37
// 009c1e42  83c448               add esp, 0x48
// 009c1e45  c20400               ret 4
// 009c1e48  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 009c1e4c  33cc                 xor ecx, esp
// 009c1e4e  83c8ff               or eax, 0xffffffff
// 009c1e51  e8e11bfcff           call 0x983a37
// 009c1e56  83c448               add esp, 0x48
// 009c1e59  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp