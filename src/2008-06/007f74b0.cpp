// roc 2008-06 007f74b0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f74b0
//
// 007f74b0  6a05                 push 5
// 007f74b2  6830145f00           push 0x5f1430
// 007f74b7  68a0125f00           push 0x5f12a0
// 007f74bc  6814058400           push 0x840514
// 007f74c1  6804068400           push 0x840604
// 007f74c6  b948b49700           mov ecx, 0x97b448
// 007f74cb  e8f073dfff           call 0x5ee8c0
// 007f74d0  68f0fd7f00           push 0x7ffdf0
// 007f74d5  e8d5a2eaff           call 0x6a17af
// 007f74da  59                   pop ecx
// 007f74db  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
