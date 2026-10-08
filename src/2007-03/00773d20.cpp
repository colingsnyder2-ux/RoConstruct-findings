// roc 2007-03 00773d20  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773d20
//
// 00773d20  56                   push esi
// 00773d21  6a05                 push 5
// 00773d23  33c9                 xor ecx, ecx
// 00773d25  51                   push ecx
// 00773d26  b8b0995900           mov eax, 0x5999b0
// 00773d2b  50                   push eax
// 00773d2c  33f6                 xor esi, esi
// 00773d2e  56                   push esi
// 00773d2f  ba00204c00           mov edx, 0x4c2000
// 00773d34  52                   push edx
// 00773d35  6814bf7a00           push 0x7abf14
// 00773d3a  68cc1f7b00           push 0x7b1fcc
// 00773d3f  b940e88b00           mov ecx, 0x8be840
// 00773d44  e8073fe2ff           call 0x597c50
// 00773d49  6870a97700           push 0x77a970
// 00773d4e  e860b4eaff           call 0x61f1b3
// 00773d53  83c404               add esp, 4
// 00773d56  5e                   pop esi
// 00773d57  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Edesc_AmbientBottom@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
