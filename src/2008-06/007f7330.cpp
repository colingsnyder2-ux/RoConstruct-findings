// roc 2008-06 007f7330  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7330
//
// 007f7330  6a05                 push 5
// 007f7332  6830145f00           push 0x5f1430
// 007f7337  68a0125f00           push 0x5f12a0
// 007f733c  6814058400           push 0x840514
// 007f7341  688c058400           push 0x84058c
// 007f7346  b968b49700           mov ecx, 0x97b468
// 007f734b  e8106fdfff           call 0x5ee260
// 007f7350  68f0fc7f00           push 0x7ffcf0
// 007f7355  e855a4eaff           call 0x6a17af
// 007f735a  59                   pop ecx
// 007f735b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftSurfaceInput@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
