// roc 2007-03 00774e10  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774e10
//
// 00774e10  6a05                 push 5
// 00774e12  6860425b00           push 0x5b4260
// 00774e17  6800405b00           push 0x5b4000
// 00774e1c  68cc897b00           push 0x7b89cc
// 00774e21  68a08a7b00           push 0x7b8aa0
// 00774e26  b908f98b00           mov ecx, 0x8bf908
// 00774e2b  e8d0d9e3ff           call 0x5b2800
// 00774e30  68e0b27700           push 0x77b2e0
// 00774e35  e879a3eaff           call 0x61f1b3
// 00774e3a  59                   pop ecx
// 00774e3b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
