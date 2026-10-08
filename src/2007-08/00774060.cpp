// roc 2007-08 00774060  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774060
//
// 00774060  6a01                 push 1
// 00774062  33c9                 xor ecx, ecx
// 00774064  680c5e7b00           push 0x7b5e0c
// 00774069  51                   push ecx
// 0077406a  b8c0dc5a00           mov eax, 0x5adcc0
// 0077406f  50                   push eax
// 00774070  b9885d8c00           mov ecx, 0x8c5d88
// 00774075  e8a6afe3ff           call 0x5af020
// 0077407a  68f0b57700           push 0x77b5f0
// 0077407f  e89fccebff           call 0x630d23
// 00774084  59                   pop ecx
// 00774085  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GetMinutesAfterMidnight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
