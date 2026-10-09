// roc 2008-06 007f7180  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7180
//
// 007f7180  6a05                 push 5
// 007f7182  68e0135f00           push 0x5f13e0
// 007f7187  6890125f00           push 0x5f1290
// 007f718c  6800fd8300           push 0x83fd00
// 007f7191  68f8048400           push 0x8404f8
// 007f7196  b948b39700           mov ecx, 0x97b348
// 007f719b  e82065dfff           call 0x5ed6c0
// 007f71a0  6810fc7f00           push 0x7ffc10
// 007f71a5  e805a6eaff           call 0x6a17af
// 007f71aa  59                   pop ecx
// 007f71ab  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
