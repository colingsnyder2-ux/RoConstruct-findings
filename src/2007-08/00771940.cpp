// roc 2007-08 00771940  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771940
//
// 00771940  6a2c                 push 0x2c
// 00771942  6844907a00           push 0x7a9044
// 00771947  e8f4afdbff           call 0x52c940
// 0077194c  83c408               add esp, 8
// 0077194f  a3cc228c00           mov dword ptr [0x8c22cc], eax
// 00771954  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_binary@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
