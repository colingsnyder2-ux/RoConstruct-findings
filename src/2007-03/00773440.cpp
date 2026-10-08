// roc 2007-03 00773440  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773440
//
// 00773440  56                   push esi
// 00773441  6a05                 push 5
// 00773443  33c9                 xor ecx, ecx
// 00773445  51                   push ecx
// 00773446  b870905700           mov eax, 0x579070
// 0077344b  50                   push eax
// 0077344c  33f6                 xor esi, esi
// 0077344e  56                   push esi
// 0077344f  ba70474c00           mov edx, 0x4c4770
// 00773454  52                   push edx
// 00773455  6870a77900           push 0x79a770
// 0077345a  68e4cb7a00           push 0x7acbe4
// 0077345f  b9fcd08b00           mov ecx, 0x8bd0fc
// 00773464  e89756e0ff           call 0x578b00
// 00773469  6890a17700           push 0x77a190
// 0077346e  e840bdeaff           call 0x61f1b3
// 00773473  83c404               add esp, 4
// 00773476  5e                   pop esi
// 00773477  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
