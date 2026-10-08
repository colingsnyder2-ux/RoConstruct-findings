// roc 2007-03 007724c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007724c0
//
// 007724c0  6a07                 push 7
// 007724c2  681ca77a00           push 0x7aa71c
// 007724c7  e814b4dbff           call 0x52d8e0
// 007724cc  83c408               add esp, 8
// 007724cf  a3f8c58b00           mov dword ptr [0x8bc5f8], eax
// 007724d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Ename_referent@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
