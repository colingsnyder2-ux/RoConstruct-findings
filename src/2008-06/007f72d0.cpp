// roc 2008-06 007f72d0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f72d0
//
// 007f72d0  6a05                 push 5
// 007f72d2  68c0155f00           push 0x5f15c0
// 007f72d7  6860135f00           push 0x5f1360
// 007f72dc  6814058400           push 0x840514
// 007f72e1  6870058400           push 0x840570
// 007f72e6  b914b49700           mov ecx, 0x97b414
// 007f72eb  e8906ddfff           call 0x5ee080
// 007f72f0  6830fc7f00           push 0x7ffc30
// 007f72f5  e8b5a4eaff           call 0x6a17af
// 007f72fa  59                   pop ecx
// 007f72fb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_BottomParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
