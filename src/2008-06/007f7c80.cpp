// roc 2008-06 007f7c80  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7c80
//
// 007f7c80  56                   push esi
// 007f7c81  6a05                 push 5
// 007f7c83  33c9                 xor ecx, ecx
// 007f7c85  51                   push ecx
// 007f7c86  b8d0c36000           mov eax, 0x60c3d0
// 007f7c8b  50                   push eax
// 007f7c8c  33f6                 xor esi, esi
// 007f7c8e  56                   push esi
// 007f7c8f  ba509a6000           mov edx, 0x609a50
// 007f7c94  52                   push edx
// 007f7c95  6890248200           push 0x822490
// 007f7c9a  68ac2f8400           push 0x842fac
// 007f7c9f  b938be9700           mov ecx, 0x97be38
// 007f7ca4  e8b745e1ff           call 0x60c260
// 007f7ca9  6810028000           push 0x800210
// 007f7cae  e8fc9aeaff           call 0x6a17af
// 007f7cb3  83c404               add esp, 4
// 007f7cb6  5e                   pop esi
// 007f7cb7  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_InOut@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
