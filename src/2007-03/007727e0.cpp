// roc 2007-03 007727e0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007727e0
//
// 007727e0  6a27                 push 0x27
// 007727e2  6898a77a00           push 0x7aa798
// 007727e7  e8f4b0dbff           call 0x52d8e0
// 007727ec  83c408               add esp, 8
// 007727ef  a348c68b00           mov dword ptr [0x8bc648], eax
// 007727f4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Item@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
