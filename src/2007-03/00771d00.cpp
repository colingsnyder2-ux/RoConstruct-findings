// roc 2007-03 00771d00  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771d00
//
// 00771d00  56                   push esi
// 00771d01  6a05                 push 5
// 00771d03  33c9                 xor ecx, ecx
// 00771d05  51                   push ecx
// 00771d06  b8e03f5400           mov eax, 0x543fe0
// 00771d0b  50                   push eax
// 00771d0c  33f6                 xor esi, esi
// 00771d0e  56                   push esi
// 00771d0f  ba002a5400           mov edx, 0x542a00
// 00771d14  52                   push edx
// 00771d15  681c6e7a00           push 0x7a6e1c
// 00771d1a  68106e7a00           push 0x7a6e10
// 00771d1f  b94cbd8b00           mov ecx, 0x8bbd4c
// 00771d24  e8471dddff           call 0x543a70
// 00771d29  68c0977700           push 0x7797c0
// 00771d2e  e880d4eaff           call 0x61f1b3
// 00771d33  83c404               add esp, 4
// 00771d36  5e                   pop esi
// 00771d37  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_AnchoredParts@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
