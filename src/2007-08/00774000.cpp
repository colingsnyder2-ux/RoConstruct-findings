// roc 2007-08 00774000  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774000
//
// 00774000  6a01                 push 1
// 00774002  33c9                 xor ecx, ecx
// 00774004  68e85d7b00           push 0x7b5de8
// 00774009  51                   push ecx
// 0077400a  b8c0ca5a00           mov eax, 0x5acac0
// 0077400f  50                   push eax
// 00774010  b9205d8c00           mov ecx, 0x8c5d20
// 00774015  e826afe3ff           call 0x5aef40
// 0077401a  68e0b57700           push 0x77b5e0
// 0077401f  e8ffccebff           call 0x630d23
// 00774024  59                   pop ecx
// 00774025  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GetMoonPosition@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
