// roc 2007-03 00773400  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773400
//
// 00773400  56                   push esi
// 00773401  6a05                 push 5
// 00773403  33c9                 xor ecx, ecx
// 00773405  51                   push ecx
// 00773406  b810905700           mov eax, 0x579010
// 0077340b  50                   push eax
// 0077340c  33f6                 xor esi, esi
// 0077340e  56                   push esi
// 0077340f  ba90424c00           mov edx, 0x4c4290
// 00773414  52                   push edx
// 00773415  6870a77900           push 0x79a770
// 0077341a  68dccb7a00           push 0x7acbdc
// 0077341f  b918d18b00           mov ecx, 0x8bd118
// 00773424  e83756e0ff           call 0x578a60
// 00773429  68b0a17700           push 0x77a1b0
// 0077342e  e880bdeaff           call 0x61f1b3
// 00773433  83c404               add esp, 4
// 00773436  5e                   pop esi
// 00773437  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_scale@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
