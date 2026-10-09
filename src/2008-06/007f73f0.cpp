// roc 2008-06 007f73f0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f73f0
//
// 007f73f0  6a05                 push 5
// 007f73f2  6830145f00           push 0x5f1430
// 007f73f7  68a0125f00           push 0x5f12a0
// 007f73fc  6814058400           push 0x840514
// 007f7401  68c8058400           push 0x8405c8
// 007f7406  b984b39700           mov ecx, 0x97b384
// 007f740b  e84072dfff           call 0x5ee650
// 007f7410  6870fd7f00           push 0x7ffd70
// 007f7415  e895a3eaff           call 0x6a17af
// 007f741a  59                   pop ecx
// 007f741b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
