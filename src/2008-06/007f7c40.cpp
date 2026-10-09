// roc 2008-06 007f7c40  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7c40
//
// 007f7c40  56                   push esi
// 007f7c41  6a05                 push 5
// 007f7c43  33c9                 xor ecx, ecx
// 007f7c45  51                   push ecx
// 007f7c46  b8a0c36000           mov eax, 0x60c3a0
// 007f7c4b  50                   push eax
// 007f7c4c  33f6                 xor esi, esi
// 007f7c4e  56                   push esi
// 007f7c4f  ba409a6000           mov edx, 0x609a40
// 007f7c54  52                   push edx
// 007f7c55  6890248200           push 0x822490
// 007f7c5a  68902f8400           push 0x842f90
// 007f7c5f  b9b4bd9700           mov ecx, 0x97bdb4
// 007f7c64  e81745e1ff           call 0x60c180
// 007f7c69  6830028000           push 0x800230
// 007f7c6e  e83c9beaff           call 0x6a17af
// 007f7c73  83c404               add esp, 4
// 007f7c76  5e                   pop esi
// 007f7c77  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_LeftRight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
