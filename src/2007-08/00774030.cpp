// roc 2007-08 00774030  unit: seg_00770000  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00774030
//
// 00774030  6a01                 push 1
// 00774032  33c9                 xor ecx, ecx
// 00774034  68fc5d7b00           push 0x7b5dfc
// 00774039  51                   push ecx
// 0077403a  b8f0ca5a00           mov eax, 0x5acaf0
// 0077403f  50                   push eax
// 00774040  b9d05c8c00           mov ecx, 0x8c5cd0
// 00774045  e8f6aee3ff           call 0x5aef40
// 0077404a  68d0b57700           push 0x77b5d0
// 0077404f  e8cfccebff           call 0x630d23
// 00774054  59                   pop ecx
// 00774055  c3                   ret 
// library rbxgs/v8datamodel\Lighting.cpp (function ??__Eprop_GetSunPosition@RBX@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/Lighting.cpp
