// roc 2007-08 00771040  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771040
//
// 00771040  56                   push esi
// 00771041  6a05                 push 5
// 00771043  33c9                 xor ecx, ecx
// 00771045  51                   push ecx
// 00771046  b8f0455500           mov eax, 0x5545f0
// 0077104b  50                   push eax
// 0077104c  33f6                 xor esi, esi
// 0077104e  56                   push esi
// 0077104f  ba703f5500           mov edx, 0x553f70
// 00771054  52                   push edx
// 00771055  6898b67900           push 0x79b698
// 0077105a  68a8827a00           push 0x7a82a8
// 0077105f  b9141d8c00           mov ecx, 0x8c1d14
// 00771064  e8a731deff           call 0x554210
// 00771069  68009b7700           push 0x779b00
// 0077106e  e8b0fcebff           call 0x630d23
// 00771073  83c404               add esp, 4
// 00771076  5e                   pop esi
// 00771077  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Score@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
