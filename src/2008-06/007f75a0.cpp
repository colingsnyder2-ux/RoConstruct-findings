// roc 2008-06 007f75a0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f75a0
//
// 007f75a0  6a05                 push 5
// 007f75a2  68f0145f00           push 0x5f14f0
// 007f75a7  6800135f00           push 0x5f1300
// 007f75ac  6814058400           push 0x840514
// 007f75b1  6850068400           push 0x840650
// 007f75b6  b928b29700           mov ecx, 0x97b228
// 007f75bb  e86076dfff           call 0x5eec20
// 007f75c0  6850fe7f00           push 0x7ffe50
// 007f75c5  e8e5a1eaff           call 0x6a17af
// 007f75ca  59                   pop ecx
// 007f75cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
