// roc 2008-06 007f2e10  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2e10
//
// 007f2e10  6a05                 push 5
// 007f2e12  33c9                 xor ecx, ecx
// 007f2e14  51                   push ecx
// 007f2e15  51                   push ecx
// 007f2e16  b840395600           mov eax, 0x563940
// 007f2e1b  50                   push eax
// 007f2e1c  68fc6b8100           push 0x816bfc
// 007f2e21  6894e78200           push 0x82e794
// 007f2e26  b950459700           mov ecx, 0x974550
// 007f2e2b  e8c021d7ff           call 0x564ff0
// 007f2e30  6870cd7f00           push 0x7fcd70
// 007f2e35  e875e9eaff           call 0x6a17af
// 007f2e3a  59                   pop ecx
// 007f2e3b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ram@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
