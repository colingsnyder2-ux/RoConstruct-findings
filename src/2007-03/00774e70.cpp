// roc 2007-03 00774e70  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774e70
//
// 00774e70  6a05                 push 5
// 00774e72  68d0405b00           push 0x5b40d0
// 00774e77  68403f5b00           push 0x5b3f40
// 00774e7c  68cc897b00           push 0x7b89cc
// 00774e81  68bc8a7b00           push 0x7b8abc
// 00774e86  b908fc8b00           mov ecx, 0x8bfc08
// 00774e8b  e8d0e3e3ff           call 0x5b3260
// 00774e90  68a0b37700           push 0x77b3a0
// 00774e95  e819a3eaff           call 0x61f1b3
// 00774e9a  59                   pop ecx
// 00774e9b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
