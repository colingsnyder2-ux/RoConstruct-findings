// roc 2008-06 007f7450  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7450
//
// 007f7450  6a05                 push 5
// 007f7452  68c0155f00           push 0x5f15c0
// 007f7457  6860135f00           push 0x5f1360
// 007f745c  6814058400           push 0x840514
// 007f7461  68e8058400           push 0x8405e8
// 007f7466  b948b19700           mov ecx, 0x97b148
// 007f746b  e89072dfff           call 0x5ee700
// 007f7470  6830fd7f00           push 0x7ffd30
// 007f7475  e835a3eaff           call 0x6a17af
// 007f747a  59                   pop ecx
// 007f747b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
