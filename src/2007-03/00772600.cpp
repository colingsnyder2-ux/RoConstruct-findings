// roc 2007-03 00772600  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772600
//
// 00772600  6a18                 push 0x18
// 00772602  685ca77a00           push 0x7aa75c
// 00772607  e8d4b2dbff           call 0x52d8e0
// 0077260c  83c408               add esp, 8
// 0077260f  a370c68b00           mov dword ptr [0x8bc670], eax
// 00772614  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Y@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
