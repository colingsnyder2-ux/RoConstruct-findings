// roc 2008-06 007f73c0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f73c0
//
// 007f73c0  6a05                 push 5
// 007f73c2  68e0135f00           push 0x5f13e0
// 007f73c7  6890125f00           push 0x5f1290
// 007f73cc  6800fd8300           push 0x83fd00
// 007f73d1  68b8058400           push 0x8405b8
// 007f73d6  b9f4b39700           mov ecx, 0x97b3f4
// 007f73db  e8c070dfff           call 0x5ee4a0
// 007f73e0  6890fd7f00           push 0x7ffd90
// 007f73e5  e8c5a3eaff           call 0x6a17af
// 007f73ea  59                   pop ecx
// 007f73eb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
