// roc 2008-06 007f7210  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7210
//
// 007f7210  6a05                 push 5
// 007f7212  68c0155f00           push 0x5f15c0
// 007f7217  6860135f00           push 0x5f1360
// 007f721c  6814058400           push 0x840514
// 007f7221  6830058400           push 0x840530
// 007f7226  b9d4b29700           mov ecx, 0x97b2d4
// 007f722b  e8106bdfff           call 0x5edd40
// 007f7230  68b0fe7f00           push 0x7ffeb0
// 007f7235  e875a5eaff           call 0x6a17af
// 007f723a  59                   pop ecx
// 007f723b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
