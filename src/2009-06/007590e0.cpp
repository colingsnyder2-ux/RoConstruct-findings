// roc 2009-06 007590e0  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007590e0
//
// 007590e0  83ec48               sub esp, 0x48
// 007590e3  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007590e8  33c4                 xor eax, esp
// 007590ea  89442444             mov dword ptr [esp + 0x44], eax
// 007590ee  56                   push esi
// 007590ef  57                   push edi
// 007590f0  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007590f4  6a3c                 push 0x3c
// 007590f6  8d44240c             lea eax, [esp + 0xc]
// 007590fa  6a00                 push 0
// 007590fc  50                   push eax
// 007590fd  8bf1                 mov esi, ecx
// 007590ff  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 00759107  e8680bfcff           call 0x719c74
// 0075910c  83c40c               add esp, 0xc
// 0075910f  8d4c2408             lea ecx, [esp + 8]
// 00759113  51                   push ecx
// 00759114  57                   push edi
// 00759115  8d4e18               lea ecx, [esi + 0x18]
// 00759118  e8c3fcffff           call 0x758de0
// 0075911d  5f                   pop edi
// 0075911e  5e                   pop esi
// 0075911f  85c0                 test eax, eax
// 00759121  7415                 je 0x759138
// 00759123  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00759127  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0075912b  33cc                 xor ecx, esp
// 0075912d  e84814fcff           call 0x71a57a
// 00759132  83c448               add esp, 0x48
// 00759135  c20400               ret 4
// 00759138  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0075913c  33cc                 xor ecx, esp
// 0075913e  83c8ff               or eax, 0xffffffff
// 00759141  e83414fcff           call 0x71a57a
// 00759146  83c448               add esp, 0x48
// 00759149  c20400               ret 4
// copied from an identical function in another client (function ?GetItemColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTTreeBase.cpp