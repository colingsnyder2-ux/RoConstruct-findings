// roc 2007-03 00771e40  unit: seg_00770000  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00771e40
//
// 00771e40  56                   push esi
// 00771e41  6a05                 push 5
// 00771e43  33c9                 xor ecx, ecx
// 00771e45  51                   push ecx
// 00771e46  b8d0405400           mov eax, 0x5440d0
// 00771e4b  50                   push eax
// 00771e4c  33f6                 xor esi, esi
// 00771e4e  56                   push esi
// 00771e4f  ba502a5400           mov edx, 0x542a50
// 00771e54  52                   push edx
// 00771e55  681c6e7a00           push 0x7a6e1c
// 00771e5a  68706e7a00           push 0x7a6e70
// 00771e5f  b9bcbc8b00           mov ecx, 0x8bbcbc
// 00771e64  e8071cddff           call 0x543a70
// 00771e69  68c0967700           push 0x7796c0
// 00771e6e  e840d3eaff           call 0x61f1b3
// 00771e73  83c404               add esp, 4
// 00771e76  5e                   pop esi
// 00771e77  c3                   ret 
// library rbxgs/v8datamodel\DebugSettings.cpp (function ??__Eprop_ShowAggregation@@YAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
