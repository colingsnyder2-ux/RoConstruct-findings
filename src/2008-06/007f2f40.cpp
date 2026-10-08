// roc 2008-06 007f2f40  unit: seg_007f0000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007f2f40
//
// 007f2f40  56                   push esi
// 007f2f41  6a05                 push 5
// 007f2f43  33c9                 xor ecx, ecx
// 007f2f45  51                   push ecx
// 007f2f46  b8505c5600           mov eax, 0x565c50
// 007f2f4b  50                   push eax
// 007f2f4c  33f6                 xor esi, esi
// 007f2f4e  56                   push esi
// 007f2f4f  ba40315600           mov edx, 0x563140
// 007f2f54  52                   push edx
// 007f2f55  68f0e78200           push 0x82e7f0
// 007f2f5a  68f8e78200           push 0x82e7f8
// 007f2f5f  b9dc459700           mov ecx, 0x9745dc
// 007f2f64  e89722d7ff           call 0x565200
// 007f2f69  68d0cd7f00           push 0x7fcdd0
// 007f2f6e  e83ce8eaff           call 0x6a17af
// 007f2f73  83c404               add esp, 4
// 007f2f76  5e                   pop esi
// 007f2f77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_PartCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
