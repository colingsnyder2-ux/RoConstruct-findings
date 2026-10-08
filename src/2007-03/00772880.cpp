// roc 2007-03 00772880  unit: seg_00770000  size: 19 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00772880
//
// 00772880  68f0a67a00           push 0x7aa6f0
// 00772885  e886b4dbff           call 0x52dd10
// 0077288a  83c404               add esp, 4
// 0077288d  a378c68b00           mov dword ptr [0x8bc678], eax
// 00772892  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_null@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
