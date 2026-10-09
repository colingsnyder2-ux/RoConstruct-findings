// roc 2007-03 00774e40  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774e40
//
// 00774e40  6a05                 push 5
// 00774e42  6880405b00           push 0x5b4080
// 00774e47  68303f5b00           push 0x5b3f30
// 00774e4c  68c0837b00           push 0x7b83c0
// 00774e51  68ac8a7b00           push 0x7b8aac
// 00774e56  b990f98b00           mov ecx, 0x8bf990
// 00774e5b  e860e3e3ff           call 0x5b31c0
// 00774e60  68c0b37700           push 0x77b3c0
// 00774e65  e849a3eaff           call 0x61f1b3
// 00774e6a  59                   pop ecx
// 00774e6b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
