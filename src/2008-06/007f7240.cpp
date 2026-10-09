// roc 2008-06 007f7240  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7240
//
// 007f7240  6a05                 push 5
// 007f7242  68e0135f00           push 0x5f13e0
// 007f7247  6890125f00           push 0x5f1290
// 007f724c  6800fd8300           push 0x83fd00
// 007f7251  683c058400           push 0x84053c
// 007f7256  b9f0b19700           mov ecx, 0x97b1f0
// 007f725b  e8806bdfff           call 0x5edde0
// 007f7260  6890fc7f00           push 0x7ffc90
// 007f7265  e845a5eaff           call 0x6a17af
// 007f726a  59                   pop ecx
// 007f726b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
