// roc 2007-03 00771fc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771fc0
//
// 00771fc0  56                   push esi
// 00771fc1  6a05                 push 5
// 00771fc3  33c9                 xor ecx, ecx
// 00771fc5  51                   push ecx
// 00771fc6  b8f00a5500           mov eax, 0x550af0
// 00771fcb  50                   push eax
// 00771fcc  33f6                 xor esi, esi
// 00771fce  56                   push esi
// 00771fcf  ba80424c00           mov edx, 0x4c4280
// 00771fd4  52                   push edx
// 00771fd5  6870a77900           push 0x79a770
// 00771fda  6854827a00           push 0x7a8254
// 00771fdf  b98cbf8b00           mov ecx, 0x8bbf8c
// 00771fe4  e897e8ddff           call 0x550880
// 00771fe9  68d0997700           push 0x7799d0
// 00771fee  e8c0d1eaff           call 0x61f1b3
// 00771ff3  83c404               add esp, 4
// 00771ff6  5e                   pop esi
// 00771ff7  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Score@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
