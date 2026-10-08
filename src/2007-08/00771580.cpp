// roc 2007-08 00771580  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771580
//
// 00771580  6a05                 push 5
// 00771582  68a08f7a00           push 0x7a8fa0
// 00771587  e8b4b3dbff           call 0x52c940
// 0077158c  83c408               add esp, 8
// 0077158f  a358228c00           mov dword ptr [0x8c2258], eax
// 00771594  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_xmlnsxsi@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
