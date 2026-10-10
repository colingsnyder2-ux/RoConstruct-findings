// from server: 100% by tester
// roc 2007-03 004beff0  unit: seg_004b0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004beff0
//
// 004beff0  a1909e8b00           mov eax, dword ptr [0x8b9e90]
// 004beff5  83c001               add eax, 1
// 004beff8  83f801               cmp eax, 1
// 004beffb  a3909e8b00           mov dword ptr [0x8b9e90], eax
// 004bf000  7525                 jne 0x4bf027
// 004bf002  6a0c                 push 0xc
// 004bf004  e8fff01500           call 0x61e108
// 004bf009  33c9                 xor ecx, ecx
// 004bf00b  83c404               add esp, 4
// 004bf00e  3bc1                 cmp eax, ecx
// 004bf010  740e                 je 0x4bf020
// 004bf012  894808               mov dword ptr [eax + 8], ecx
// 004bf015  8908                 mov dword ptr [eax], ecx
// 004bf017  894804               mov dword ptr [eax + 4], ecx
// 004bf01a  a38c9e8b00           mov dword ptr [0x8b9e8c], eax
// 004bf01f  c3                   ret 
// 004bf020  33c0                 xor eax, eax
// 004bf022  a38c9e8b00           mov dword ptr [0x8b9e8c], eax
// 004bf027  c3                   ret 
// library rbxgs-raknet/StringTable.cpp (function ?AddReference@StringTable@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringTable.cpp
