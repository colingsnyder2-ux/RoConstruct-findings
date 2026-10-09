// roc 2008-06 007f7480  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7480
//
// 007f7480  6a05                 push 5
// 007f7482  68e0135f00           push 0x5f13e0
// 007f7487  6890125f00           push 0x5f1290
// 007f748c  6800fd8300           push 0x83fd00
// 007f7491  68f4058400           push 0x8405f4
// 007f7496  b9d0b19700           mov ecx, 0x97b1d0
// 007f749b  e80073dfff           call 0x5ee7a0
// 007f74a0  6810fe7f00           push 0x7ffe10
// 007f74a5  e805a3eaff           call 0x6a17af
// 007f74aa  59                   pop ecx
// 007f74ab  c3                   ret 
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ??__Edesc_FrontType@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
