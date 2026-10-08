// roc 2008-06 007f4c60  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4c60
//
// 007f4c60  56                   push esi
// 007f4c61  6a05                 push 5
// 007f4c63  33c9                 xor ecx, ecx
// 007f4c65  51                   push ecx
// 007f4c66  b810ff5900           mov eax, 0x59ff10
// 007f4c6b  50                   push eax
// 007f4c6c  33f6                 xor esi, esi
// 007f4c6e  56                   push esi
// 007f4c6f  bab0e86800           mov edx, 0x68e8b0
// 007f4c74  52                   push edx
// 007f4c75  6890248200           push 0x822490
// 007f4c7a  6814368300           push 0x833614
// 007f4c7f  b93c689700           mov ecx, 0x97683c
// 007f4c84  e8c7abdaff           call 0x59f850
// 007f4c89  6860e07f00           push 0x7fe060
// 007f4c8e  e81ccbeaff           call 0x6a17af
// 007f4c93  83c404               add esp, 4
// 007f4c96  5e                   pop esi
// 007f4c97  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_scale@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
