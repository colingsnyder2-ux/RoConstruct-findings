// roc 2007-03 00771ec0  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771ec0
//
// 00771ec0  56                   push esi
// 00771ec1  6a05                 push 5
// 00771ec3  33c9                 xor ecx, ecx
// 00771ec5  51                   push ecx
// 00771ec6  b830415400           mov eax, 0x544130
// 00771ecb  50                   push eax
// 00771ecc  33f6                 xor esi, esi
// 00771ece  56                   push esi
// 00771ecf  ba702a5400           mov edx, 0x542a70
// 00771ed4  52                   push edx
// 00771ed5  681c6e7a00           push 0x7a6e1c
// 00771eda  68906e7a00           push 0x7a6e90
// 00771edf  b984bc8b00           mov ecx, 0x8bbc84
// 00771ee4  e8871bddff           call 0x543a70
// 00771ee9  6800977700           push 0x779700
// 00771eee  e8c0d2eaff           call 0x61f1b3
// 00771ef3  83c404               add esp, 4
// 00771ef6  5e                   pop esi
// 00771ef7  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_WorldCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
