// roc 2008-06 007f2db0  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2db0
//
// 007f2db0  6a05                 push 5
// 007f2db2  33c9                 xor ecx, ecx
// 007f2db4  51                   push ecx
// 007f2db5  51                   push ecx
// 007f2db6  b8b0345600           mov eax, 0x5634b0
// 007f2dbb  50                   push eax
// 007f2dbc  68fc6b8100           push 0x816bfc
// 007f2dc1  688ce78200           push 0x82e78c
// 007f2dc6  b918459700           mov ecx, 0x974518
// 007f2dcb  e8c022d7ff           call 0x565090
// 007f2dd0  6830cd7f00           push 0x7fcd30
// 007f2dd5  e8d5e9eaff           call 0x6a17af
// 007f2dda  59                   pop ecx
// 007f2ddb  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_gfxcard@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
