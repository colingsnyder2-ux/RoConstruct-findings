// roc 2007-03 00774c00  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774c00
//
// 00774c00  6a05                 push 5
// 00774c02  6880405b00           push 0x5b4080
// 00774c07  68303f5b00           push 0x5b3f30
// 00774c0c  68c0837b00           push 0x7b83c0
// 00774c11  68f4897b00           push 0x7b89f4
// 00774c16  b9b0f98b00           mov ecx, 0x8bf9b0
// 00774c1b  e8a0e1e3ff           call 0x5b2dc0
// 00774c20  6840b27700           push 0x77b240
// 00774c25  e889a5eaff           call 0x61f1b3
// 00774c2a  59                   pop ecx
// 00774c2b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
