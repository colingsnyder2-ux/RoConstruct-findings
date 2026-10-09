// roc 2008-06 007f71b0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f71b0
//
// 007f71b0  6a05                 push 5
// 007f71b2  6830145f00           push 0x5f1430
// 007f71b7  68a0125f00           push 0x5f12a0
// 007f71bc  6814058400           push 0x840514
// 007f71c1  6804058400           push 0x840504
// 007f71c6  b964b19700           mov ecx, 0x97b164
// 007f71cb  e87068dfff           call 0x5eda40
// 007f71d0  68f0fb7f00           push 0x7ffbf0
// 007f71d5  e8d5a5eaff           call 0x6a17af
// 007f71da  59                   pop ecx
// 007f71db  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_TopSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
