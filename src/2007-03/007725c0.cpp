// roc 2007-03 007725c0  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007725c0
//
// 007725c0  6a15                 push 0x15
// 007725c2  6850a77a00           push 0x7aa750
// 007725c7  e814b3dbff           call 0x52d8e0
// 007725cc  83c408               add esp, 8
// 007725cf  a350c68b00           mov dword ptr [0x8bc650], eax
// 007725d4  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Refs@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
