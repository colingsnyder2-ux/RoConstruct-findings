// roc 2007-08 007725e0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007725e0
//
// 007725e0  56                   push esi
// 007725e1  6a05                 push 5
// 007725e3  33c9                 xor ecx, ecx
// 007725e5  51                   push ecx
// 007725e6  b860a55700           mov eax, 0x57a560
// 007725eb  50                   push eax
// 007725ec  33f6                 xor esi, esi
// 007725ee  56                   push esi
// 007725ef  ba703f5500           mov edx, 0x553f70
// 007725f4  52                   push edx
// 007725f5  6898b67900           push 0x79b698
// 007725fa  6838b27a00           push 0x7ab238
// 007725ff  b98c2e8c00           mov ecx, 0x8c2e8c
// 00772604  e84779e0ff           call 0x579f50
// 00772609  68c0a37700           push 0x77a3c0
// 0077260e  e810e7ebff           call 0x630d23
// 00772613  83c404               add esp, 4
// 00772616  5e                   pop esi
// 00772617  c3                   ret 
// library rbxgs/v8datamodel\custommesh.cpp (function ??__Edesc_meshType@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/custommesh.cpp
