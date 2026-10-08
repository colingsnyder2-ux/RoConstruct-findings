// roc 2007-03 00772700  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772700
//
// 00772700  6a20                 push 0x20
// 00772702  687ca77a00           push 0x7aa77c
// 00772707  e8d4b1dbff           call 0x52d8e0
// 0077270c  83c408               add esp, 8
// 0077270f  a30cc68b00           mov dword ptr [0x8bc60c], eax
// 00772714  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R20@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
