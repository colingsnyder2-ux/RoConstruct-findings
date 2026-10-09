// roc 2008-06 007f7b40  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f7b40
//
// 007f7b40  56                   push esi
// 007f7b41  6a05                 push 5
// 007f7b43  33c9                 xor ecx, ecx
// 007f7b45  51                   push ecx
// 007f7b46  b8c0c56000           mov eax, 0x60c5c0
// 007f7b4b  50                   push eax
// 007f7b4c  33f6                 xor esi, esi
// 007f7b4e  56                   push esi
// 007f7b4f  ba50a26000           mov edx, 0x60a250
// 007f7b54  52                   push edx
// 007f7b55  6890248200           push 0x822490
// 007f7b5a  68fcf68300           push 0x83f6fc
// 007f7b5f  b99cbe9700           mov ecx, 0x97be9c
// 007f7b64  e8973ee1ff           call 0x60ba00
// 007f7b69  6890028000           push 0x800290
// 007f7b6e  e83c9ceaff           call 0x6a17af
// 007f7b73  83c404               add esp, 4
// 007f7b76  5e                   pop esi
// 007f7b77  c3                   ret 
// library openrbx-client/App\v8datamodel\Feature.cpp (function ??__Eprop_DesiredAngle@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Feature.cpp
