// roc 2007-08 00486990  unit: G3D::GWindow  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486990
//
// 00486990  56                   push esi
// 00486991  8b742408             mov esi, dword ptr [esp + 8]
// 00486995  6a00                 push 0
// 00486997  6800c38800           push 0x88c300
// 0048699c  684c1f8800           push 0x881f4c
// 004869a1  6a00                 push 0
// 004869a3  56                   push esi
// 004869a4  e88da31a00           call 0x630d36
// 004869a9  83c414               add esp, 0x14
// 004869ac  85c0                 test eax, eax
// 004869ae  7409                 je 0x4869b9
// 004869b0  6a00                 push 0
// 004869b2  8bce                 mov ecx, esi
// 004869b4  e877ac0b00           call 0x541630
// 004869b9  5e                   pop esi
// 004869ba  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
