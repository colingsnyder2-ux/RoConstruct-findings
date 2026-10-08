// roc 2007-03 00773e20  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00773e20
//
// 00773e20  6a01                 push 1
// 00773e22  33c9                 xor ecx, ecx
// 00773e24  6800207b00           push 0x7b2000
// 00773e29  51                   push ecx
// 00773e2a  b8f0435900           mov eax, 0x5943f0
// 00773e2f  50                   push eax
// 00773e30  b908e98b00           mov ecx, 0x8be908
// 00773e35  e8164de2ff           call 0x598b50
// 00773e3a  68f0a97700           push 0x77a9f0
// 00773e3f  e86fb3eaff           call 0x61f1b3
// 00773e44  59                   pop ecx
// 00773e45  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GetMinutesAfterMidnight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
