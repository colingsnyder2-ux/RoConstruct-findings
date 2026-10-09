// roc 2008-06 007f7300  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7300
//
// 007f7300  6a05                 push 5
// 007f7302  68e0135f00           push 0x5f13e0
// 007f7307  6890125f00           push 0x5f1290
// 007f730c  6800fd8300           push 0x83fd00
// 007f7311  6880058400           push 0x840580
// 007f7316  b960b29700           mov ecx, 0x97b260
// 007f731b  e8006edfff           call 0x5ee120
// 007f7320  6810fd7f00           push 0x7ffd10
// 007f7325  e885a4eaff           call 0x6a17af
// 007f732a  59                   pop ecx
// 007f732b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
