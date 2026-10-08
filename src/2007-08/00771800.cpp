// roc 2007-08 00771800  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771800
//
// 00771800  6a20                 push 0x20
// 00771802  680c907a00           push 0x7a900c
// 00771807  e834b1dbff           call 0x52c940
// 0077180c  83c408               add esp, 8
// 0077180f  a380228c00           mov dword ptr [0x8c2280], eax
// 00771814  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_R20@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
