// roc 2008-06 007f7360  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7360
//
// 007f7360  6a05                 push 5
// 007f7362  68f0145f00           push 0x5f14f0
// 007f7367  6800135f00           push 0x5f1300
// 007f736c  6814058400           push 0x840514
// 007f7371  68a0058400           push 0x8405a0
// 007f7376  b9a0b29700           mov ecx, 0x97b2a0
// 007f737b  e88070dfff           call 0x5ee400
// 007f7380  68d0fc7f00           push 0x7ffcd0
// 007f7385  e825a4eaff           call 0x6a17af
// 007f738a  59                   pop ecx
// 007f738b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
