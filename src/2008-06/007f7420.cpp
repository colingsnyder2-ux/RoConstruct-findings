// roc 2008-06 007f7420  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7420
//
// 007f7420  6a05                 push 5
// 007f7422  68f0145f00           push 0x5f14f0
// 007f7427  6800135f00           push 0x5f1300
// 007f742c  6814058400           push 0x840514
// 007f7431  68dc058400           push 0x8405dc
// 007f7436  b9a4b39700           mov ecx, 0x97b3a4
// 007f743b  e8c072dfff           call 0x5ee700
// 007f7440  6850fd7f00           push 0x7ffd50
// 007f7445  e865a3eaff           call 0x6a17af
// 007f744a  59                   pop ecx
// 007f744b  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_RightParamA@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
