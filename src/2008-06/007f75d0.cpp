// roc 2008-06 007f75d0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f75d0
//
// 007f75d0  6a05                 push 5
// 007f75d2  68c0155f00           push 0x5f15c0
// 007f75d7  6860135f00           push 0x5f1360
// 007f75dc  6814058400           push 0x840514
// 007f75e1  685c068400           push 0x84065c
// 007f75e6  b9c0b39700           mov ecx, 0x97b3c0
// 007f75eb  e83076dfff           call 0x5eec20
// 007f75f0  6830fe7f00           push 0x7ffe30
// 007f75f5  e8b5a1eaff           call 0x6a17af
// 007f75fa  59                   pop ecx
// 007f75fb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BackParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
