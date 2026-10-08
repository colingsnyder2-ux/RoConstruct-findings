// roc 2007-03 007733c0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007733c0
//
// 007733c0  56                   push esi
// 007733c1  6a05                 push 5
// 007733c3  33c9                 xor ecx, ecx
// 007733c5  51                   push ecx
// 007733c6  b8e08f5700           mov eax, 0x578fe0
// 007733cb  50                   push eax
// 007733cc  33f6                 xor esi, esi
// 007733ce  56                   push esi
// 007733cf  ba80424c00           mov edx, 0x4c4280
// 007733d4  52                   push edx
// 007733d5  6870a77900           push 0x79a770
// 007733da  68d4c87a00           push 0x7ac8d4
// 007733df  b934d18b00           mov ecx, 0x8bd134
// 007733e4  e87755e0ff           call 0x578960
// 007733e9  6850a17700           push 0x77a150
// 007733ee  e8c0bdeaff           call 0x61f1b3
// 007733f3  83c404               add esp, 4
// 007733f6  5e                   pop esi
// 007733f7  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
