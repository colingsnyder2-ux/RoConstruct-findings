// roc 2008-06 007f74e0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f74e0
//
// 007f74e0  6a05                 push 5
// 007f74e2  68f0145f00           push 0x5f14f0
// 007f74e7  6800135f00           push 0x5f1300
// 007f74ec  6814058400           push 0x840514
// 007f74f1  6818068400           push 0x840618
// 007f74f6  b944b29700           mov ecx, 0x97b244
// 007f74fb  e8d074dfff           call 0x5ee9d0
// 007f7500  68d0fd7f00           push 0x7ffdd0
// 007f7505  e8a5a2eaff           call 0x6a17af
// 007f750a  59                   pop ecx
// 007f750b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
