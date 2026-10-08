// roc 2008-06 007f2c90  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2c90
//
// 007f2c90  6a05                 push 5
// 007f2c92  33c9                 xor ecx, ecx
// 007f2c94  51                   push ecx
// 007f2c95  51                   push ecx
// 007f2c96  b860325600           mov eax, 0x563260
// 007f2c9b  50                   push eax
// 007f2c9c  68fc6b8100           push 0x816bfc
// 007f2ca1  683ce78200           push 0x82e73c
// 007f2ca6  b934479700           mov ecx, 0x974734
// 007f2cab  e84023d7ff           call 0x564ff0
// 007f2cb0  6870ce7f00           push 0x7fce70
// 007f2cb5  e8f5eaeaff           call 0x6a17af
// 007f2cba  59                   pop ecx
// 007f2cbb  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_cpuSpeed@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
