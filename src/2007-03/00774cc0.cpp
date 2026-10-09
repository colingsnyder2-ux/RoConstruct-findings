// roc 2007-03 00774cc0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774cc0
//
// 00774cc0  6a05                 push 5
// 00774cc2  6880405b00           push 0x5b4080
// 00774cc7  68303f5b00           push 0x5b3f30
// 00774ccc  68c0837b00           push 0x7b83c0
// 00774cd1  68388a7b00           push 0x7b8a38
// 00774cd6  b920fa8b00           mov ecx, 0x8bfa20
// 00774cdb  e850e2e3ff           call 0x5b2f30
// 00774ce0  68c0b27700           push 0x77b2c0
// 00774ce5  e8c9a4eaff           call 0x61f1b3
// 00774cea  59                   pop ecx
// 00774ceb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
