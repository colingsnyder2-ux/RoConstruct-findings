// roc 2007-03 00774ed0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774ed0
//
// 00774ed0  6a05                 push 5
// 00774ed2  6860425b00           push 0x5b4260
// 00774ed7  6800405b00           push 0x5b4000
// 00774edc  68cc897b00           push 0x7b89cc
// 00774ee1  68dc8a7b00           push 0x7b8adc
// 00774ee6  b9b0fa8b00           mov ecx, 0x8bfab0
// 00774eeb  e8c0d9e3ff           call 0x5b28b0
// 00774ef0  6860b37700           push 0x77b360
// 00774ef5  e8b9a2eaff           call 0x61f1b3
// 00774efa  59                   pop ecx
// 00774efb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
