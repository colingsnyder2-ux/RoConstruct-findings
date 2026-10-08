// roc 2007-03 004aa4c0  unit: seg_004a0000  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004aa4c0
//
// 004aa4c0  833d94918b0000       cmp dword ptr [0x8b9194], 0
// 004aa4c7  7e2f                 jle 0x4aa4f8
// 004aa4c9  832d94918b0001       sub dword ptr [0x8b9194], 1
// 004aa4d0  7526                 jne 0x4aa4f8
// 004aa4d2  8b0d90918b00         mov ecx, dword ptr [0x8b9190]
// 004aa4d8  85c9                 test ecx, ecx
// 004aa4da  56                   push esi
// 004aa4db  8bf1                 mov esi, ecx
// 004aa4dd  740e                 je 0x4aa4ed
// 004aa4df  e8dcfeffff           call 0x4aa3c0
// 004aa4e4  56                   push esi
// 004aa4e5  e8063c1700           call 0x61e0f0
// 004aa4ea  83c404               add esp, 4
// 004aa4ed  c70590918b0000000000 mov dword ptr [0x8b9190], 0
// 004aa4f7  5e                   pop esi
// 004aa4f8  c3                   ret 
// library rbxgs-raknet/StringCompressor.cpp (function ?RemoveReference@StringCompressor@@SAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-raknet StringCompressor.cpp
