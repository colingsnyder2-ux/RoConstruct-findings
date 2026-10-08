// roc 2008-06 007f2de0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2de0
//
// 007f2de0  6a05                 push 5
// 007f2de2  33c9                 xor ecx, ecx
// 007f2de4  51                   push ecx
// 007f2de5  51                   push ecx
// 007f2de6  b8c0385600           mov eax, 0x5638c0
// 007f2deb  50                   push eax
// 007f2dec  68fc6b8100           push 0x816bfc
// 007f2df1  68fc798200           push 0x8279fc
// 007f2df6  b9c8479700           mov ecx, 0x9747c8
// 007f2dfb  e89022d7ff           call 0x565090
// 007f2e00  6850cd7f00           push 0x7fcd50
// 007f2e05  e8a5e9eaff           call 0x6a17af
// 007f2e0a  59                   pop ecx
// 007f2e0b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_cpu@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
