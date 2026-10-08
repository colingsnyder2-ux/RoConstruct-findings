// roc 2007-03 007725e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007725e0
//
// 007725e0  6a17                 push 0x17
// 007725e2  6858a77a00           push 0x7aa758
// 007725e7  e8f4b2dbff           call 0x52d8e0
// 007725ec  83c408               add esp, 8
// 007725ef  a320c68b00           mov dword ptr [0x8bc620], eax
// 007725f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_X@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
