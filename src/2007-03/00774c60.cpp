// roc 2007-03 00774c60  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774c60
//
// 00774c60  6a05                 push 5
// 00774c62  6890415b00           push 0x5b4190
// 00774c67  68a03f5b00           push 0x5b3fa0
// 00774c6c  68cc897b00           push 0x7b89cc
// 00774c71  68188a7b00           push 0x7b8a18
// 00774c76  b928fb8b00           mov ecx, 0x8bfb28
// 00774c7b  e820dae3ff           call 0x5b26a0
// 00774c80  6800b27700           push 0x77b200
// 00774c85  e829a5eaff           call 0x61f1b3
// 00774c8a  59                   pop ecx
// 00774c8b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
