// roc 2008-06 007f2e40  unit: seg_007f0000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2e40
//
// 007f2e40  6a05                 push 5
// 007f2e42  33c9                 xor ecx, ecx
// 007f2e44  51                   push ecx
// 007f2e45  51                   push ecx
// 007f2e46  b870395600           mov eax, 0x563970
// 007f2e4b  50                   push eax
// 007f2e4c  68fc6b8100           push 0x816bfc
// 007f2e51  6898e78200           push 0x82e798
// 007f2e56  b970469700           mov ecx, 0x974670
// 007f2e5b  e83022d7ff           call 0x565090
// 007f2e60  6890cd7f00           push 0x7fcd90
// 007f2e65  e845e9eaff           call 0x6a17af
// 007f2e6a  59                   pop ecx
// 007f2e6b  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_resolution@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
