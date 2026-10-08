// roc 2007-08 00771720  unit: seg_00770000  size: 21 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00771720
//
// 00771720  6a19                 push 0x19
// 00771722  68f08f7a00           push 0x7a8ff0
// 00771727  e814b2dbff           call 0x52c940
// 0077172c  83c408               add esp, 8
// 0077172f  a374228c00           mov dword ptr [0x8c2274], eax
// 00771734  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ??__Etag_Z@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
