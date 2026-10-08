// roc 2007-08 00771960  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771960
//
// 00771960  6a2d                 push 0x2d
// 00771962  684c907a00           push 0x7a904c
// 00771967  e8d4afdbff           call 0x52c940
// 0077196c  83c408               add esp, 8
// 0077196f  a3f0228c00           mov dword ptr [0x8c22f0], eax
// 00771974  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_hash@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
