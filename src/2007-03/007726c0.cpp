// roc 2007-03 007726c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007726c0
//
// 007726c0  6a1e                 push 0x1e
// 007726c2  6874a77a00           push 0x7aa774
// 007726c7  e814b2dbff           call 0x52d8e0
// 007726cc  83c408               add esp, 8
// 007726cf  a340c68b00           mov dword ptr [0x8bc640], eax
// 007726d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R11@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
