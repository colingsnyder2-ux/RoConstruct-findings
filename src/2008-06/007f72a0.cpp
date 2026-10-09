// roc 2008-06 007f72a0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f72a0
//
// 007f72a0  6a05                 push 5
// 007f72a2  68f0145f00           push 0x5f14f0
// 007f72a7  6800135f00           push 0x5f1300
// 007f72ac  6814058400           push 0x840514
// 007f72b1  6860058400           push 0x840560
// 007f72b6  b968b39700           mov ecx, 0x97b368
// 007f72bb  e8c06ddfff           call 0x5ee080
// 007f72c0  6850fc7f00           push 0x7ffc50
// 007f72c5  e8e5a4eaff           call 0x6a17af
// 007f72ca  59                   pop ecx
// 007f72cb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
