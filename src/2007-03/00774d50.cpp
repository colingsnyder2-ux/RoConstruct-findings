// roc 2007-03 00774d50  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774d50
//
// 00774d50  6a05                 push 5
// 00774d52  6860425b00           push 0x5b4260
// 00774d57  6800405b00           push 0x5b4000
// 00774d5c  68cc897b00           push 0x7b89cc
// 00774d61  68648a7b00           push 0x7b8a64
// 00774d66  b9ecfa8b00           mov ecx, 0x8bfaec
// 00774d6b  e8e0d9e3ff           call 0x5b2750
// 00774d70  6860b27700           push 0x77b260
// 00774d75  e839a4eaff           call 0x61f1b3
// 00774d7a  59                   pop ecx
// 00774d7b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
