// roc 2008-06 007f7510  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7510
//
// 007f7510  6a05                 push 5
// 007f7512  68c0155f00           push 0x5f15c0
// 007f7517  6860135f00           push 0x5f1360
// 007f751c  6814058400           push 0x840514
// 007f7521  6824068400           push 0x840624
// 007f7526  b9f0b29700           mov ecx, 0x97b2f0
// 007f752b  e8a074dfff           call 0x5ee9d0
// 007f7530  68b0fd7f00           push 0x7ffdb0
// 007f7535  e875a2eaff           call 0x6a17af
// 007f753a  59                   pop ecx
// 007f753b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
