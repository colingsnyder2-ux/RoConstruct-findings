// roc 2009-06 00759150  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00759150
//
// 00759150  83ec48               sub esp, 0x48
// 00759153  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00759158  33c4                 xor eax, esp
// 0075915a  89442444             mov dword ptr [esp + 0x44], eax
// 0075915e  56                   push esi
// 0075915f  57                   push edi
// 00759160  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 00759164  6a3c                 push 0x3c
// 00759166  8d44240c             lea eax, [esp + 0xc]
// 0075916a  6a00                 push 0
// 0075916c  50                   push eax
// 0075916d  8bf1                 mov esi, ecx
// 0075916f  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 00759177  e8f80afcff           call 0x719c74
// 0075917c  83c40c               add esp, 0xc
// 0075917f  8d4c2408             lea ecx, [esp + 8]
// 00759183  51                   push ecx
// 00759184  57                   push edi
// 00759185  8d4e18               lea ecx, [esi + 0x18]
// 00759188  e853fcffff           call 0x758de0
// 0075918d  5f                   pop edi
// 0075918e  5e                   pop esi
// 0075918f  85c0                 test eax, eax
// 00759191  7415                 je 0x7591a8
// 00759193  8b442440             mov eax, dword ptr [esp + 0x40]
// 00759197  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0075919b  33cc                 xor ecx, esp
// 0075919d  e8d813fcff           call 0x71a57a
// 007591a2  83c448               add esp, 0x48
// 007591a5  c20400               ret 4
// 007591a8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007591ac  33cc                 xor ecx, esp
// 007591ae  83c8ff               or eax, 0xffffffff
// 007591b1  e8c413fcff           call 0x71a57a
// 007591b6  83c448               add esp, 0x48
// 007591b9  c20400               ret 4
// copied from an identical function in another client (function ?GetItemBackColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp