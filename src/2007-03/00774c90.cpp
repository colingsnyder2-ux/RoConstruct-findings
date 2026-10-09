// roc 2007-03 00774c90  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774c90
//
// 00774c90  6a05                 push 5
// 00774c92  6860425b00           push 0x5b4260
// 00774c97  6800405b00           push 0x5b4000
// 00774c9c  68cc897b00           push 0x7b89cc
// 00774ca1  68288a7b00           push 0x7b8a28
// 00774ca6  b9d4fb8b00           mov ecx, 0x8bfbd4
// 00774cab  e8f0d9e3ff           call 0x5b26a0
// 00774cb0  68e0b17700           push 0x77b1e0
// 00774cb5  e8f9a4eaff           call 0x61f1b3
// 00774cba  59                   pop ecx
// 00774cbb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
