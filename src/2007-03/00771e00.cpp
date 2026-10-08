// roc 2007-03 00771e00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771e00
//
// 00771e00  56                   push esi
// 00771e01  6a05                 push 5
// 00771e03  33c9                 xor ecx, ecx
// 00771e05  51                   push ecx
// 00771e06  b870405400           mov eax, 0x544070
// 00771e0b  50                   push eax
// 00771e0c  33f6                 xor esi, esi
// 00771e0e  56                   push esi
// 00771e0f  ba302a5400           mov edx, 0x542a30
// 00771e14  52                   push edx
// 00771e15  681c6e7a00           push 0x7a6e1c
// 00771e1a  685c6e7a00           push 0x7a6e5c
// 00771e1f  b9f8bb8b00           mov ecx, 0x8bbbf8
// 00771e24  e8471cddff           call 0x543a70
// 00771e29  68a0967700           push 0x7796a0
// 00771e2e  e880d3eaff           call 0x61f1b3
// 00771e33  83c404               add esp, 4
// 00771e36  5e                   pop esi
// 00771e37  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_UnalignedParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
