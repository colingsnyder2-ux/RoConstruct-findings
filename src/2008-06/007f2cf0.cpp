// roc 2008-06 007f2cf0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2cf0
//
// 007f2cf0  6a05                 push 5
// 007f2cf2  33c9                 xor ecx, ecx
// 007f2cf4  51                   push ecx
// 007f2cf5  51                   push ecx
// 007f2cf6  b830335600           mov eax, 0x563330
// 007f2cfb  50                   push eax
// 007f2cfc  68fc6b8100           push 0x816bfc
// 007f2d01  6854e78200           push 0x82e754
// 007f2d06  b98c469700           mov ecx, 0x97468c
// 007f2d0b  e8e022d7ff           call 0x564ff0
// 007f2d10  68f0cc7f00           push 0x7fccf0
// 007f2d15  e895eaeaff           call 0x6a17af
// 007f2d1a  59                   pop ecx
// 007f2d1b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_osPlatformId@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
