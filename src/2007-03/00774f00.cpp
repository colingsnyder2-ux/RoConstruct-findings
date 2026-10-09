// roc 2007-03 00774f00  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00774f00
//
// 00774f00  6a05                 push 5
// 00774f02  6880405b00           push 0x5b4080
// 00774f07  68303f5b00           push 0x5b3f30
// 00774f0c  68c0837b00           push 0x7b83c0
// 00774f11  68e88a7b00           push 0x7b8ae8
// 00774f16  b9e8f88b00           mov ecx, 0x8bf8e8
// 00774f1b  e8e0e3e3ff           call 0x5b3300
// 00774f20  6840b47700           push 0x77b440
// 00774f25  e889a2eaff           call 0x61f1b3
// 00774f2a  59                   pop ecx
// 00774f2b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
