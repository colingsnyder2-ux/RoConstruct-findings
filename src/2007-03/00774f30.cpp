// roc 2007-03 00774f30  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774f30
//
// 00774f30  6a05                 push 5
// 00774f32  68d0405b00           push 0x5b40d0
// 00774f37  68403f5b00           push 0x5b3f40
// 00774f3c  68cc897b00           push 0x7b89cc
// 00774f41  68f48a7b00           push 0x7b8af4
// 00774f46  b940fa8b00           mov ecx, 0x8bfa40
// 00774f4b  e850e4e3ff           call 0x5b33a0
// 00774f50  6820b47700           push 0x77b420
// 00774f55  e859a2eaff           call 0x61f1b3
// 00774f5a  59                   pop ecx
// 00774f5b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
