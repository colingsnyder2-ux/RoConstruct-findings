// roc 2007-03 007727c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007727c0
//
// 007727c0  6a26                 push 0x26
// 007727c2  6890a77a00           push 0x7aa790
// 007727c7  e814b1dbff           call 0x52d8e0
// 007727cc  83c408               add esp, 8
// 007727cf  a368c68b00           mov dword ptr [0x8bc668], eax
// 007727d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_class@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
