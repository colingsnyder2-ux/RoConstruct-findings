// roc 2007-08 00770e00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770e00
//
// 00770e00  56                   push esi
// 00770e01  6a05                 push 5
// 00770e03  33c9                 xor ecx, ecx
// 00770e05  51                   push ecx
// 00770e06  b8a0495400           mov eax, 0x5449a0
// 00770e0b  50                   push eax
// 00770e0c  33f6                 xor esi, esi
// 00770e0e  56                   push esi
// 00770e0f  bac0285400           mov edx, 0x5428c0
// 00770e14  52                   push edx
// 00770e15  68e06d7a00           push 0x7a6de0
// 00770e1a  68446e7a00           push 0x7a6e44
// 00770e1f  b994168c00           mov ecx, 0x8c1694
// 00770e24  e8a731ddff           call 0x543fd0
// 00770e29  6860977700           push 0x779760
// 00770e2e  e8f0feebff           call 0x630d23
// 00770e33  83c404               add esp, 4
// 00770e36  5e                   pop esi
// 00770e37  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ModelCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
