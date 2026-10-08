// roc 2007-08 00774090  unit: seg_00770000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774090
//
// 00774090  6a01                 push 1
// 00774092  683c5e7b00           push 0x7b5e3c
// 00774097  33c9                 xor ecx, ecx
// 00774099  68245e7b00           push 0x7b5e24
// 0077409e  51                   push ecx
// 0077409f  b8e0fb5a00           mov eax, 0x5afbe0
// 007740a4  50                   push eax
// 007740a5  b9985c8c00           mov ecx, 0x8c5c98
// 007740aa  e841b0e3ff           call 0x5af0f0
// 007740af  6800b67700           push 0x77b600
// 007740b4  e86accebff           call 0x630d23
// 007740b9  59                   pop ecx
// 007740ba  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_SetMinutesAfterMidnight@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
