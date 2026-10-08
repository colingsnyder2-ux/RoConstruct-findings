// roc 2007-08 00770d40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00770d40
//
// 00770d40  56                   push esi
// 00770d41  6a05                 push 5
// 00770d43  33c9                 xor ecx, ecx
// 00770d45  51                   push ecx
// 00770d46  b840495400           mov eax, 0x544940
// 00770d4b  50                   push eax
// 00770d4c  33f6                 xor esi, esi
// 00770d4e  56                   push esi
// 00770d4f  baa0285400           mov edx, 0x5428a0
// 00770d54  52                   push edx
// 00770d55  68e06d7a00           push 0x7a6de0
// 00770d5a  68106e7a00           push 0x7a6e10
// 00770d5f  b990178c00           mov ecx, 0x8c1790
// 00770d64  e86732ddff           call 0x543fd0
// 00770d69  6800977700           push 0x779700
// 00770d6e  e8b0ffebff           call 0x630d23
// 00770d73  83c404               add esp, 4
// 00770d76  5e                   pop esi
// 00770d77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_PartCoordinateFrames@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
