// roc 2008-06 007f4ca0  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4ca0
//
// 007f4ca0  56                   push esi
// 007f4ca1  6a05                 push 5
// 007f4ca3  33c9                 xor ecx, ecx
// 007f4ca5  51                   push ecx
// 007f4ca6  b8d0ff5900           mov eax, 0x59ffd0
// 007f4cab  50                   push eax
// 007f4cac  33f6                 xor esi, esi
// 007f4cae  56                   push esi
// 007f4caf  ba205f4e00           mov edx, 0x4e5f20
// 007f4cb4  52                   push edx
// 007f4cb5  6890248200           push 0x822490
// 007f4cba  681c368300           push 0x83361c
// 007f4cbf  b920689700           mov ecx, 0x976820
// 007f4cc4  e837acdaff           call 0x59f900
// 007f4cc9  6840e07f00           push 0x7fe040
// 007f4cce  e8dccaeaff           call 0x6a17af
// 007f4cd3  83c404               add esp, 4
// 007f4cd6  5e                   pop esi
// 007f4cd7  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
