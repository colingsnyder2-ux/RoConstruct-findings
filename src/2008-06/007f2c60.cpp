// roc 2008-06 007f2c60  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2c60
//
// 007f2c60  6a05                 push 5
// 007f2c62  33c9                 xor ecx, ecx
// 007f2c64  51                   push ecx
// 007f2c65  51                   push ecx
// 007f2c66  b830325600           mov eax, 0x563230
// 007f2c6b  50                   push eax
// 007f2c6c  68fc6b8100           push 0x816bfc
// 007f2c71  6830e78200           push 0x82e730
// 007f2c76  b990479700           mov ecx, 0x974790
// 007f2c7b  e87023d7ff           call 0x564ff0
// 007f2c80  6890ce7f00           push 0x7fce90
// 007f2c85  e825ebeaff           call 0x6a17af
// 007f2c8a  59                   pop ecx
// 007f2c8b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_videoMemory@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
