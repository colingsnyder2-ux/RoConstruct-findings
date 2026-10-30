// roc 2010-06 007e8190  unit: CRobloxTreeCtrl  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e8190
//
// 007e8190  83ec48               sub esp, 0x48
// 007e8193  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007e8198  33c4                 xor eax, esp
// 007e819a  89442444             mov dword ptr [esp + 0x44], eax
// 007e819e  56                   push esi
// 007e819f  57                   push edi
// 007e81a0  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 007e81a4  6a3c                 push 0x3c
// 007e81a6  8d44240c             lea eax, [esp + 0xc]
// 007e81aa  6a00                 push 0
// 007e81ac  50                   push eax
// 007e81ad  8bf1                 mov esi, ecx
// 007e81af  c7442454ffffffff     mov dword ptr [esp + 0x54], 0xffffffff
// 007e81b7  e8280afcff           call 0x7a8be4
// 007e81bc  83c40c               add esp, 0xc
// 007e81bf  8d4c2408             lea ecx, [esp + 8]
// 007e81c3  51                   push ecx
// 007e81c4  57                   push edi
// 007e81c5  8d4e18               lea ecx, [esi + 0x18]
// 007e81c8  e853fcffff           call 0x7e7e20
// 007e81cd  5f                   pop edi
// 007e81ce  5e                   pop esi
// 007e81cf  85c0                 test eax, eax
// 007e81d1  7415                 je 0x7e81e8
// 007e81d3  8b442440             mov eax, dword ptr [esp + 0x40]
// 007e81d7  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007e81db  33cc                 xor ecx, esp
// 007e81dd  e8f212fcff           call 0x7a94d4
// 007e81e2  83c448               add esp, 0x48
// 007e81e5  c20400               ret 4
// 007e81e8  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007e81ec  33cc                 xor ecx, esp
// 007e81ee  83c8ff               or eax, 0xffffffff
// 007e81f1  e8de12fcff           call 0x7a94d4
// 007e81f6  83c448               add esp, 0x48
// 007e81f9  c20400               ret 4
// copied from an identical function in another client (function ?GetItemBackColor@CXTTreeBase@@UAEKPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\Controls\XTTreeBase.cpp