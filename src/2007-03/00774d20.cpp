// roc 2007-03 00774d20  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774d20
//
// 00774d20  6a05                 push 5
// 00774d22  6890415b00           push 0x5b4190
// 00774d27  68a03f5b00           push 0x5b3fa0
// 00774d2c  68cc897b00           push 0x7b89cc
// 00774d31  68588a7b00           push 0x7b8a58
// 00774d36  b960fa8b00           mov ecx, 0x8bfa60
// 00774d3b  e810dae3ff           call 0x5b2750
// 00774d40  6880b27700           push 0x77b280
// 00774d45  e869a4eaff           call 0x61f1b3
// 00774d4a  59                   pop ecx
// 00774d4b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
