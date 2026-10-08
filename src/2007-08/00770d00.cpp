// roc 2007-08 00770d00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770d00
//
// 00770d00  56                   push esi
// 00770d01  6a05                 push 5
// 00770d03  33c9                 xor ecx, ecx
// 00770d05  51                   push ecx
// 00770d06  b8e0485400           mov eax, 0x5448e0
// 00770d0b  50                   push eax
// 00770d0c  33f6                 xor esi, esi
// 00770d0e  56                   push esi
// 00770d0f  ba80285400           mov edx, 0x542880
// 00770d14  52                   push edx
// 00770d15  68e06d7a00           push 0x7a6de0
// 00770d1a  68fc6d7a00           push 0x7a6dfc
// 00770d1f  b9b0168c00           mov ecx, 0x8c16b0
// 00770d24  e8a732ddff           call 0x543fd0
// 00770d29  68e0967700           push 0x7796e0
// 00770d2e  e8f0ffebff           call 0x630d23
// 00770d33  83c404               add esp, 4
// 00770d36  5e                   pop esi
// 00770d37  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_HighlightAwakeParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
