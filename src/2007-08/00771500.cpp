// roc 2007-08 00771500  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771500
//
// 00771500  6a01                 push 1
// 00771502  68808f7a00           push 0x7a8f80
// 00771507  e834b4dbff           call 0x52c940
// 0077150c  83c408               add esp, 8
// 0077150f  a378228c00           mov dword ptr [0x8c2278], eax
// 00771514  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Evalue_IDREF_null@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
