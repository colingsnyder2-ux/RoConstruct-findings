// roc 2007-03 00774f90  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774f90
//
// 00774f90  6a05                 push 5
// 00774f92  6860425b00           push 0x5b4260
// 00774f97  6800405b00           push 0x5b4000
// 00774f9c  68cc897b00           push 0x7b89cc
// 00774fa1  68148b7b00           push 0x7b8b14
// 00774fa6  b980fb8b00           mov ecx, 0x8bfb80
// 00774fab  e8b0d9e3ff           call 0x5b2960
// 00774fb0  68e0b37700           push 0x77b3e0
// 00774fb5  e8f9a1eaff           call 0x61f1b3
// 00774fba  59                   pop ecx
// 00774fbb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
