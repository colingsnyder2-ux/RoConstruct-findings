// roc 2007-08 00773fd0  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00773fd0
//
// 00773fd0  6a01                 push 1
// 00773fd2  33c9                 xor ecx, ecx
// 00773fd4  68d85d7b00           push 0x7b5dd8
// 00773fd9  51                   push ecx
// 00773fda  b870ca5a00           mov eax, 0x5aca70
// 00773fdf  50                   push eax
// 00773fe0  b9105c8c00           mov ecx, 0x8c5c10
// 00773fe5  e826aee3ff           call 0x5aee10
// 00773fea  6810b67700           push 0x77b610
// 00773fef  e82fcdebff           call 0x630d23
// 00773ff4  59                   pop ecx
// 00773ff5  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GetMoonPhase@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
