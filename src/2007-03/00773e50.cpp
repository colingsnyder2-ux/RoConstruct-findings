// roc 2007-03 00773e50  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773e50
//
// 00773e50  6a01                 push 1
// 00773e52  6830207b00           push 0x7b2030
// 00773e57  33c9                 xor ecx, ecx
// 00773e59  6818207b00           push 0x7b2018
// 00773e5e  51                   push ecx
// 00773e5f  b840a55900           mov eax, 0x59a540
// 00773e64  50                   push eax
// 00773e65  b998e88b00           mov ecx, 0x8be898
// 00773e6a  e8f14de2ff           call 0x598c60
// 00773e6f  68e0a97700           push 0x77a9e0
// 00773e74  e83ab3eaff           call 0x61f1b3
// 00773e79  59                   pop ecx
// 00773e7a  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_SetMinutesAfterMidnight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
