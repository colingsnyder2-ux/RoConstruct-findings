// roc 2007-03 00774f60  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774f60
//
// 00774f60  6a05                 push 5
// 00774f62  6890415b00           push 0x5b4190
// 00774f67  68a03f5b00           push 0x5b3fa0
// 00774f6c  68cc897b00           push 0x7b89cc
// 00774f71  68088b7b00           push 0x7b8b08
// 00774f76  b9e8f98b00           mov ecx, 0x8bf9e8
// 00774f7b  e8e0d9e3ff           call 0x5b2960
// 00774f80  6800b47700           push 0x77b400
// 00774f85  e829a2eaff           call 0x61f1b3
// 00774f8a  59                   pop ecx
// 00774f8b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
