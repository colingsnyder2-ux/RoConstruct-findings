// roc 2008-06 007f7570  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7570
//
// 007f7570  6a05                 push 5
// 007f7572  6830145f00           push 0x5f1430
// 007f7577  68a0125f00           push 0x5f12a0
// 007f757c  6814058400           push 0x840514
// 007f7581  683c068400           push 0x84063c
// 007f7586  b980b29700           mov ecx, 0x97b280
// 007f758b  e89075dfff           call 0x5eeb20
// 007f7590  6870fe7f00           push 0x7ffe70
// 007f7595  e815a2eaff           call 0x6a17af
// 007f759a  59                   pop ecx
// 007f759b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
