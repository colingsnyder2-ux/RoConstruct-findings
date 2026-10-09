// roc 2008-06 007f71e0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f71e0
//
// 007f71e0  6a05                 push 5
// 007f71e2  68f0145f00           push 0x5f14f0
// 007f71e7  6800135f00           push 0x5f1300
// 007f71ec  6814058400           push 0x840514
// 007f71f1  6824058400           push 0x840524
// 007f71f6  b9b4b19700           mov ecx, 0x97b1b4
// 007f71fb  e8406bdfff           call 0x5edd40
// 007f7200  68d0fe7f00           push 0x7ffed0
// 007f7205  e8a5a5eaff           call 0x6a17af
// 007f720a  59                   pop ecx
// 007f720b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
