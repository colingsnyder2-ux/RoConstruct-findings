// roc 2008-06 007f7270  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7270
//
// 007f7270  6a05                 push 5
// 007f7272  6830145f00           push 0x5f1430
// 007f7277  68a0125f00           push 0x5f12a0
// 007f727c  6814058400           push 0x840514
// 007f7281  684c058400           push 0x84054c
// 007f7286  b90cb39700           mov ecx, 0x97b30c
// 007f728b  e8706cdfff           call 0x5edf00
// 007f7290  6870fc7f00           push 0x7ffc70
// 007f7295  e815a5eaff           call 0x6a17af
// 007f729a  59                   pop ecx
// 007f729b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
