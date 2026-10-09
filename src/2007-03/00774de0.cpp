// roc 2007-03 00774de0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774de0
//
// 00774de0  6a05                 push 5
// 00774de2  6890415b00           push 0x5b4190
// 00774de7  68a03f5b00           push 0x5b3fa0
// 00774dec  68cc897b00           push 0x7b89cc
// 00774df1  68948a7b00           push 0x7b8a94
// 00774df6  b964fb8b00           mov ecx, 0x8bfb64
// 00774dfb  e800dae3ff           call 0x5b2800
// 00774e00  6800b37700           push 0x77b300
// 00774e05  e8a9a3eaff           call 0x61f1b3
// 00774e0a  59                   pop ecx
// 00774e0b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
