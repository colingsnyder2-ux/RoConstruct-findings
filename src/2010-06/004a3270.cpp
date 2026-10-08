// roc 2010-06 004a3270  unit: seg_004a0000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a3270
//
// 004a3270  56                   push esi
// 004a3271  8b742408             mov esi, dword ptr [esp + 8]
// 004a3275  6a00                 push 0
// 004a3277  68b073b800           push 0xb873b0
// 004a327c  68408eb700           push 0xb78e40
// 004a3281  6a00                 push 0
// 004a3283  56                   push esi
// 004a3284  e861593000           call 0x7a8bea
// 004a3289  83c414               add esp, 0x14
// 004a328c  85c0                 test eax, eax
// 004a328e  7409                 je 0x4a3299
// 004a3290  6a00                 push 0
// 004a3292  8bce                 mov ecx, esi
// 004a3294  e8f75a0f00           call 0x598d90
// 004a3299  5e                   pop esi
// 004a329a  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
