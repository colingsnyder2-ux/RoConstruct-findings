// roc 2009-12 008499b0  unit: CXTPControlSelector  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008499b0
//
// 008499b0  8b542404             mov edx, dword ptr [esp + 4]
// 008499b4  56                   push esi
// 008499b5  8bf1                 mov esi, ecx
// 008499b7  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 008499bd  8b8e88010000         mov ecx, dword ptr [esi + 0x188]
// 008499c3  3bd0                 cmp edx, eax
// 008499c5  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008499c9  750b                 jne 0x8499d6
// 008499cb  3bc1                 cmp eax, ecx
// 008499cd  7507                 jne 0x8499d6
// 008499cf  837c241000           cmp dword ptr [esp + 0x10], 0
// 008499d4  7421                 je 0x8499f7
// 008499d6  6a01                 push 1
// 008499d8  8bce                 mov ecx, esi
// 008499da  899684010000         mov dword ptr [esi + 0x184], edx
// 008499e0  898688010000         mov dword ptr [esi + 0x188], eax
// 008499e6  e8d5ccfaff           call 0x7f66c0
// 008499eb  6806100000           push 0x1006
// 008499f0  8bce                 mov ecx, esi
// 008499f2  e899ebfaff           call 0x7f8590
// 008499f7  5e                   pop esi
// 008499f8  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlExt.cpp (function ?SetItemsActive@CXTPControlSelector@@IAEXVCSize@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlExt.cpp
