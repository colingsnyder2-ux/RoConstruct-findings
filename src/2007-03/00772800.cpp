// roc 2007-03 00772800  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772800
//
// 00772800  6a28                 push 0x28
// 00772802  68a0a77a00           push 0x7aa7a0
// 00772807  e8d4b0dbff           call 0x52d8e0
// 0077280c  83c408               add esp, 8
// 0077280f  a3f4c58b00           mov dword ptr [0x8bc5f4], eax
// 00772814  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Properties@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
