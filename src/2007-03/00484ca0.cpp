// roc 2007-03 00484ca0  unit: seg_00480000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484ca0
//
// 00484ca0  56                   push esi
// 00484ca1  8b742408             mov esi, dword ptr [esp + 8]
// 00484ca5  6a00                 push 0
// 00484ca7  6860b38800           push 0x88b360
// 00484cac  6864108800           push 0x881064
// 00484cb1  6a00                 push 0
// 00484cb3  56                   push esi
// 00484cb4  e80da51900           call 0x61f1c6
// 00484cb9  83c414               add esp, 0x14
// 00484cbc  85c0                 test eax, eax
// 00484cbe  7409                 je 0x484cc9
// 00484cc0  6a00                 push 0
// 00484cc2  8bce                 mov ecx, esi
// 00484cc4  e827d00b00           call 0x541cf0
// 00484cc9  5e                   pop esi
// 00484cca  c3                   ret 
// library rbxgs-net/Player.cpp (function ?setAppearanceParentNull@@YAXPAVInstance@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-net Player.cpp
