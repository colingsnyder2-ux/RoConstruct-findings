// roc 2007-03 00774ba0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774ba0
//
// 00774ba0  6a05                 push 5
// 00774ba2  6890415b00           push 0x5b4190
// 00774ba7  68a03f5b00           push 0x5b3fa0
// 00774bac  68cc897b00           push 0x7b89cc
// 00774bb1  68dc897b00           push 0x7b89dc
// 00774bb6  b974f98b00           mov ecx, 0x8bf974
// 00774bbb  e830dae3ff           call 0x5b25f0
// 00774bc0  6880b47700           push 0x77b480
// 00774bc5  e8e9a5eaff           call 0x61f1b3
// 00774bca  59                   pop ecx
// 00774bcb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
