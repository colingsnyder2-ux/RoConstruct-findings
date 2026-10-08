// roc 2009-06 00889c00  unit: seg_00880000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00889c00
//
// 00889c00  56                   push esi
// 00889c01  6a01                 push 1
// 00889c03  33c9                 xor ecx, ecx
// 00889c05  51                   push ecx
// 00889c06  b8501e5d00           mov eax, 0x5d1e50
// 00889c0b  50                   push eax
// 00889c0c  33f6                 xor esi, esi
// 00889c0e  56                   push esi
// 00889c0f  ba40fd4400           mov edx, 0x44fd40
// 00889c14  52                   push edx
// 00889c15  68584e8c00           push 0x8c4e58
// 00889c1a  6880518d00           push 0x8d5180
// 00889c1f  b93c3da400           mov ecx, 0xa43d3c
// 00889c24  e87757d4ff           call 0x5cf3a0
// 00889c29  68b0728900           push 0x8972b0
// 00889c2e  e8c8fee8ff           call 0x719afb
// 00889c33  83c404               add esp, 4
// 00889c36  5e                   pop esi
// 00889c37  c3                   ret 
// library rbxgs/v8tree\Instance.cpp (function ??__E?propParent@Instance@RBX@@2V?$RefPropDescriptor@VInstance@RBX@@V12@@Reflection@2@B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
