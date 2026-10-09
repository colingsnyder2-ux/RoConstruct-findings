// roc 2007-03 00774b70  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774b70
//
// 00774b70  6a05                 push 5
// 00774b72  68d0405b00           push 0x5b40d0
// 00774b77  68403f5b00           push 0x5b3f40
// 00774b7c  68cc897b00           push 0x7b89cc
// 00774b81  68bc897b00           push 0x7b89bc
// 00774b86  b924f98b00           mov ecx, 0x8bf924
// 00774b8b  e840e1e3ff           call 0x5b2cd0
// 00774b90  68a0b17700           push 0x77b1a0
// 00774b95  e819a6eaff           call 0x61f1b3
// 00774b9a  59                   pop ecx
// 00774b9b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
