// roc 2007-08 00771080  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771080
//
// 00771080  56                   push esi
// 00771081  6a05                 push 5
// 00771083  33c9                 xor ecx, ecx
// 00771085  51                   push ecx
// 00771086  b810465500           mov eax, 0x554610
// 0077108b  50                   push eax
// 0077108c  33f6                 xor esi, esi
// 0077108e  56                   push esi
// 0077108f  ba803f5500           mov edx, 0x553f80
// 00771094  52                   push edx
// 00771095  6898b67900           push 0x79b698
// 0077109a  68f0b67900           push 0x79b6f0
// 0077109f  b94c1d8c00           mov ecx, 0x8c1d4c
// 007710a4  e80732deff           call 0x5542b0
// 007710a9  68e09a7700           push 0x779ae0
// 007710ae  e870fcebff           call 0x630d23
// 007710b3  83c404               add esp, 4
// 007710b6  5e                   pop esi
// 007710b7  c3                   ret 
// library rbxgs/v8datamodel\Team.cpp (function ??__Eprop_Color@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Team.cpp
