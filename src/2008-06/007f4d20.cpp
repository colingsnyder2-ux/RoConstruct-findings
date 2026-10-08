// roc 2008-06 007f4d20  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f4d20
//
// 007f4d20  56                   push esi
// 007f4d21  6a05                 push 5
// 007f4d23  33c9                 xor ecx, ecx
// 007f4d25  51                   push ecx
// 007f4d26  b870ff5900           mov eax, 0x59ff70
// 007f4d2b  50                   push eax
// 007f4d2c  33f6                 xor esi, esi
// 007f4d2e  56                   push esi
// 007f4d2f  baa05b4e00           mov edx, 0x4e5ba0
// 007f4d34  52                   push edx
// 007f4d35  6890248200           push 0x822490
// 007f4d3a  6830368300           push 0x833630
// 007f4d3f  b97c689700           mov ecx, 0x97687c
// 007f4d44  e807abdaff           call 0x59f850
// 007f4d49  6800e07f00           push 0x7fe000
// 007f4d4e  e85ccaeaff           call 0x6a17af
// 007f4d53  83c404               add esp, 4
// 007f4d56  5e                   pop esi
// 007f4d57  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_vertColor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
