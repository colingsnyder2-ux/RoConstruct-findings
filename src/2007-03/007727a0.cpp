// roc 2007-03 007727a0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007727a0
//
// 007727a0  6a25                 push 0x25
// 007727a2  682c3a7800           push 0x783a2c
// 007727a7  e834b1dbff           call 0x52d8e0
// 007727ac  83c408               add esp, 8
// 007727af  a32cc68b00           mov dword ptr [0x8bc62c], eax
// 007727b4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_B@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
