// roc 2007-08 007716e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007716e0
//
// 007716e0  6a17                 push 0x17
// 007716e2  68e88f7a00           push 0x7a8fe8
// 007716e7  e854b2dbff           call 0x52c940
// 007716ec  83c408               add esp, 8
// 007716ef  a394228c00           mov dword ptr [0x8c2294], eax
// 007716f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_X@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
