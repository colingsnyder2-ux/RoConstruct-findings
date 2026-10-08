// roc 2007-03 00773480  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773480
//
// 00773480  56                   push esi
// 00773481  6a05                 push 5
// 00773483  33c9                 xor ecx, ecx
// 00773485  51                   push ecx
// 00773486  b8d0905700           mov eax, 0x5790d0
// 0077348b  50                   push eax
// 0077348c  33f6                 xor esi, esi
// 0077348e  56                   push esi
// 0077348f  baa0474c00           mov edx, 0x4c47a0
// 00773494  52                   push edx
// 00773495  6870a77900           push 0x79a770
// 0077349a  68eccb7a00           push 0x7acbec
// 0077349f  b9e0d08b00           mov ecx, 0x8bd0e0
// 007734a4  e8f756e0ff           call 0x578ba0
// 007734a9  6870a17700           push 0x77a170
// 007734ae  e800bdeaff           call 0x61f1b3
// 007734b3  83c404               add esp, 4
// 007734b6  5e                   pop esi
// 007734b7  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_textureId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
