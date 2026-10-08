// roc 2007-03 00772680  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772680
//
// 00772680  6a1c                 push 0x1c
// 00772682  686ca77a00           push 0x7aa76c
// 00772687  e854b2dbff           call 0x52d8e0
// 0077268c  83c408               add esp, 8
// 0077268f  a3ecc58b00           mov dword ptr [0x8bc5ec], eax
// 00772694  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R02@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
