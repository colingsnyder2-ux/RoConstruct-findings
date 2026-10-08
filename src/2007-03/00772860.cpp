// roc 2007-03 00772860  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772860
//
// 00772860  6a2d                 push 0x2d
// 00772862  68bca77a00           push 0x7aa7bc
// 00772867  e874b0dbff           call 0x52d8e0
// 0077286c  83c408               add esp, 8
// 0077286f  a37cc68b00           mov dword ptr [0x8bc67c], eax
// 00772874  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_hash@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
