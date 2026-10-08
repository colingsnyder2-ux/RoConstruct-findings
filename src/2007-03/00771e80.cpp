// roc 2007-03 00771e80  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771e80
//
// 00771e80  56                   push esi
// 00771e81  6a05                 push 5
// 00771e83  33c9                 xor ecx, ecx
// 00771e85  51                   push ecx
// 00771e86  b800415400           mov eax, 0x544100
// 00771e8b  50                   push eax
// 00771e8c  33f6                 xor esi, esi
// 00771e8e  56                   push esi
// 00771e8f  ba602a5400           mov edx, 0x542a60
// 00771e94  52                   push edx
// 00771e95  681c6e7a00           push 0x7a6e1c
// 00771e9a  68806e7a00           push 0x7a6e80
// 00771e9f  b950bb8b00           mov ecx, 0x8bbb50
// 00771ea4  e8c71bddff           call 0x543a70
// 00771ea9  68e0967700           push 0x7796e0
// 00771eae  e800d3eaff           call 0x61f1b3
// 00771eb3  83c404               add esp, 4
// 00771eb6  5e                   pop esi
// 00771eb7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ModelCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
