// roc 2008-06 004899b0  unit: G3D::GWindow  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004899b0
//
// 004899b0  56                   push esi
// 004899b1  8b742408             mov esi, dword ptr [esp + 8]
// 004899b5  6a00                 push 0
// 004899b7  68684d9300           push 0x934d68
// 004899bc  687c909200           push 0x92907c
// 004899c1  6a00                 push 0
// 004899c3  56                   push esi
// 004899c4  e8fd7d2100           call 0x6a17c6
// 004899c9  83c414               add esp, 0x14
// 004899cc  85c0                 test eax, eax
// 004899ce  7409                 je 0x4899d9
// 004899d0  6a00                 push 0
// 004899d2  8bce                 mov ecx, esi
// 004899d4  e8170f0d00           call 0x55a8f0
// 004899d9  5e                   pop esi
// 004899da  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
