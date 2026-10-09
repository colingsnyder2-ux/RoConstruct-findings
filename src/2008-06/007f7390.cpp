// roc 2008-06 007f7390  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7390
//
// 007f7390  6a05                 push 5
// 007f7392  68c0155f00           push 0x5f15c0
// 007f7397  6860135f00           push 0x5f1360
// 007f739c  6814058400           push 0x840514
// 007f73a1  68ac058400           push 0x8405ac
// 007f73a6  b92cb39700           mov ecx, 0x97b32c
// 007f73ab  e85070dfff           call 0x5ee400
// 007f73b0  68b0fc7f00           push 0x7ffcb0
// 007f73b5  e8f5a3eaff           call 0x6a17af
// 007f73ba  59                   pop ecx
// 007f73bb  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_LeftParamB@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
