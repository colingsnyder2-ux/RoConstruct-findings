// roc 2008-06 007f2c30  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2c30
//
// 007f2c30  6a05                 push 5
// 007f2c32  33c9                 xor ecx, ecx
// 007f2c34  51                   push ecx
// 007f2c35  51                   push ecx
// 007f2c36  b8503a5600           mov eax, 0x563a50
// 007f2c3b  50                   push eax
// 007f2c3c  68fc6b8100           push 0x816bfc
// 007f2c41  6824e78200           push 0x82e724
// 007f2c46  b9a4459700           mov ecx, 0x9745a4
// 007f2c4b  e80023d7ff           call 0x564f50
// 007f2c50  68b0ce7f00           push 0x7fceb0
// 007f2c55  e855ebeaff           call 0x6a17af
// 007f2c5a  59                   pop ecx
// 007f2c5b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_shaderModel@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
