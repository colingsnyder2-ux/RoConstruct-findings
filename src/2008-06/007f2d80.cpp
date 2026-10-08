// roc 2008-06 007f2d80  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2d80
//
// 007f2d80  6a05                 push 5
// 007f2d82  33c9                 xor ecx, ecx
// 007f2d84  51                   push ecx
// 007f2d85  51                   push ecx
// 007f2d86  b830345600           mov eax, 0x563430
// 007f2d8b  50                   push eax
// 007f2d8c  68fc6b8100           push 0x816bfc
// 007f2d91  6880e78200           push 0x82e780
// 007f2d96  b9e0469700           mov ecx, 0x9746e0
// 007f2d9b  e8f022d7ff           call 0x565090
// 007f2da0  6810cd7f00           push 0x7fcd10
// 007f2da5  e805eaeaff           call 0x6a17af
// 007f2daa  59                   pop ecx
// 007f2dab  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_glVendor@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
