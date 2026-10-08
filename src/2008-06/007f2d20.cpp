// roc 2008-06 007f2d20  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2d20
//
// 007f2d20  6a05                 push 5
// 007f2d22  33c9                 xor ecx, ecx
// 007f2d24  51                   push ecx
// 007f2d25  51                   push ecx
// 007f2d26  b8c0325600           mov eax, 0x5632c0
// 007f2d2b  50                   push eax
// 007f2d2c  68fc6b8100           push 0x816bfc
// 007f2d31  6864e78200           push 0x82e764
// 007f2d36  b9c4469700           mov ecx, 0x9746c4
// 007f2d3b  e85023d7ff           call 0x565090
// 007f2d40  68f0ce7f00           push 0x7fcef0
// 007f2d45  e865eaeaff           call 0x6a17af
// 007f2d4a  59                   pop ecx
// 007f2d4b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_osVer@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
