// roc 2007-08 007747c0  unit: seg_00770000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007747c0
//
// 007747c0  6a05                 push 5
// 007747c2  6870925b00           push 0x5b9270
// 007747c7  6820915b00           push 0x5b9120
// 007747cc  68f0837b00           push 0x7b83f0
// 007747d1  68a08a7b00           push 0x7b8aa0
// 007747d6  b96c648c00           mov ecx, 0x8c646c
// 007747db  e8603ce4ff           call 0x5b8440
// 007747e0  6840ba7700           push 0x77ba40
// 007747e5  e839c5ebff           call 0x630d23
// 007747ea  59                   pop ecx
// 007747eb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
