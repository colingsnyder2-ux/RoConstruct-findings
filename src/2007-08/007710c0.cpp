// roc 2007-08 007710c0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007710c0
//
// 007710c0  56                   push esi
// 007710c1  6a05                 push 5
// 007710c3  33c9                 xor ecx, ecx
// 007710c5  51                   push ecx
// 007710c6  b830465500           mov eax, 0x554630
// 007710cb  50                   push eax
// 007710cc  33f6                 xor esi, esi
// 007710ce  56                   push esi
// 007710cf  ba903f5500           mov edx, 0x553f90
// 007710d4  52                   push edx
// 007710d5  6898b67900           push 0x79b698
// 007710da  68b0827a00           push 0x7a82b0
// 007710df  b9f81c8c00           mov ecx, 0x8c1cf8
// 007710e4  e86732deff           call 0x554350
// 007710e9  68c09a7700           push 0x779ac0
// 007710ee  e830fcebff           call 0x630d23
// 007710f3  83c404               add esp, 4
// 007710f6  5e                   pop esi
// 007710f7  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_AutoAssignable@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
