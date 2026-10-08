// roc 2007-08 00770e40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770e40
//
// 00770e40  56                   push esi
// 00770e41  6a05                 push 5
// 00770e43  33c9                 xor ecx, ecx
// 00770e45  51                   push ecx
// 00770e46  b8d0495400           mov eax, 0x5449d0
// 00770e4b  50                   push eax
// 00770e4c  33f6                 xor esi, esi
// 00770e4e  56                   push esi
// 00770e4f  bad0285400           mov edx, 0x5428d0
// 00770e54  52                   push edx
// 00770e55  68e06d7a00           push 0x7a6de0
// 00770e5a  68546e7a00           push 0x7a6e54
// 00770e5f  b904188c00           mov ecx, 0x8c1804
// 00770e64  e86731ddff           call 0x543fd0
// 00770e69  6880977700           push 0x779780
// 00770e6e  e8b0feebff           call 0x630d23
// 00770e73  83c404               add esp, 4
// 00770e76  5e                   pop esi
// 00770e77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_WorldCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
