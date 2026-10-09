// roc 2007-03 00774ea0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774ea0
//
// 00774ea0  6a05                 push 5
// 00774ea2  6890415b00           push 0x5b4190
// 00774ea7  68a03f5b00           push 0x5b3fa0
// 00774eac  68cc897b00           push 0x7b89cc
// 00774eb1  68d08a7b00           push 0x7b8ad0
// 00774eb6  b904fa8b00           mov ecx, 0x8bfa04
// 00774ebb  e8f0d9e3ff           call 0x5b28b0
// 00774ec0  6880b37700           push 0x77b380
// 00774ec5  e8e9a2eaff           call 0x61f1b3
// 00774eca  59                   pop ecx
// 00774ecb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
