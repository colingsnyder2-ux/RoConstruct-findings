// roc 2007-03 00771dc0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771dc0
//
// 00771dc0  56                   push esi
// 00771dc1  6a05                 push 5
// 00771dc3  33c9                 xor ecx, ecx
// 00771dc5  51                   push ecx
// 00771dc6  b8a0405400           mov eax, 0x5440a0
// 00771dcb  50                   push eax
// 00771dcc  33f6                 xor esi, esi
// 00771dce  56                   push esi
// 00771dcf  ba402a5400           mov edx, 0x542a40
// 00771dd4  52                   push edx
// 00771dd5  681c6e7a00           push 0x7a6e1c
// 00771dda  684c6e7a00           push 0x7a6e4c
// 00771ddf  b930bc8b00           mov ecx, 0x8bbc30
// 00771de4  e8871cddff           call 0x543a70
// 00771de9  6880967700           push 0x779680
// 00771dee  e8c0d3eaff           call 0x61f1b3
// 00771df3  83c404               add esp, 4
// 00771df6  5e                   pop esi
// 00771df7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_PartCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
