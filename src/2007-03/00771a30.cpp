// roc 2007-03 00771a30  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771a30
//
// 00771a30  56                   push esi
// 00771a31  6a01                 push 1
// 00771a33  33c9                 xor ecx, ecx
// 00771a35  51                   push ecx
// 00771a36  b8f01c5400           mov eax, 0x541cf0
// 00771a3b  50                   push eax
// 00771a3c  33f6                 xor esi, esi
// 00771a3e  56                   push esi
// 00771a3f  ba10dc4100           mov edx, 0x41dc10
// 00771a44  52                   push edx
// 00771a45  6870a77900           push 0x79a770
// 00771a4a  68f4677a00           push 0x7a67f4
// 00771a4f  b9c0b88b00           mov ecx, 0x8bb8c0
// 00771a54  e8d7f9dcff           call 0x541430
// 00771a59  6860957700           push 0x779560
// 00771a5e  e850d7eaff           call 0x61f1b3
// 00771a63  83c404               add esp, 4
// 00771a66  5e                   pop esi
// 00771a67  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?propParent@Instance@RBX@@2V?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
