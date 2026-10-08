// roc 2007-08 007719c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007719c0
//
// 007719c0  6a31                 push 0x31
// 007719c2  6860907a00           push 0x7a9060
// 007719c7  e874afdbff           call 0x52c940
// 007719cc  83c408               add esp, 8
// 007719cf  a390228c00           mov dword ptr [0x8c2290], eax
// 007719d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_xsinoNamespaceSchemaLocation@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
