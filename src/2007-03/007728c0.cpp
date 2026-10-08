// roc 2007-03 007728c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007728c0
//
// 007728c0  6a31                 push 0x31
// 007728c2  68d0a77a00           push 0x7aa7d0
// 007728c7  e814b0dbff           call 0x52d8e0
// 007728cc  83c408               add esp, 8
// 007728cf  a31cc68b00           mov dword ptr [0x8bc61c], eax
// 007728d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_xsinoNamespaceSchemaLocation@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
