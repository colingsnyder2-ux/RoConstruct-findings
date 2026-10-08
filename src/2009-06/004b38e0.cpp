// roc 2009-06 004b38e0  unit: G3D::GWindow  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b38e0
//
// 004b38e0  56                   push esi
// 004b38e1  8b742408             mov esi, dword ptr [esp + 8]
// 004b38e5  6a00                 push 0
// 004b38e7  68b0c39e00           push 0x9ec3b0
// 004b38ec  6840be9d00           push 0x9dbe40
// 004b38f1  6a00                 push 0
// 004b38f3  56                   push esi
// 004b38f4  e881632600           call 0x719c7a
// 004b38f9  83c414               add esp, 0x14
// 004b38fc  85c0                 test eax, eax
// 004b38fe  7409                 je 0x4b3909
// 004b3900  6a00                 push 0
// 004b3902  8bce                 mov ecx, esi
// 004b3904  e847e51100           call 0x5d1e50
// 004b3909  5e                   pop esi
// 004b390a  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
